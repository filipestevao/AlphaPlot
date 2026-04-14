/***************************************************************************
        File                 : SyntaxHighlighter.cpp
        Project              : AlphaPlot
--------------------------------------------------------------------
        Copyright            : (C) 2016 by Arun Narayanankutty
        Email                : n.arun.lifescience@gmail.com
        Description          : Highlight scripts & interpreter text

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *  This program is free software; you can redistribute it and/or modify   *
 *  it under the terms of the GNU General Public License as published by   *
 *  the Free Software Foundation; under version 2 of the License.          *
 *                                                                         *
 *  This program is distributed in the hope that it will be useful,        *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *  GNU General Public License for more details.                           *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the Free Software           *
 *   Foundation, Inc., 51 Franklin Street, Fifth Floor,                    *
 *   Boston, MA  02110-1301  USA                                           *
 *                                                                         *
 ***************************************************************************/

#include "SyntaxHighlighter.h"

SyntaxHighlighter::SyntaxHighlighter(QTextDocument *parent)
    : QSyntaxHighlighter(parent) {
  HighlightingRule rule;

  keywordFormat.setForeground(QColor(249, 38, 114));
  keywordFormat.setFontWeight(QFont::Normal);

  keywords << "break"
           << "case"
           << "catch"
           << "continue"
           << "debugger"
           << "default"
           << "delete"
           << "do"
           << "else"
           << "finally"
           << "for"
           << "function"
           << "if"
           << "in"
           << "instanceof"
           << "new"
           << "return"
           << "switch"
           << "throw"
           << "try"
           << "typeof"
           << "var"
           << "while"
           << "with";

  uselessKeywords << "class"
                  << "const"
                  << "enum"
                  << "export"
                  << "extends"
                  << "import"
                  << "super";

  foreach (const QString &pattern, keywords) {
    rule.pattern = QRegularExpression("\\b" + pattern + "\\b");
    rule.format = keywordFormat;
    highlightingRules.append(rule);
  }

  classFormat.setForeground(Qt::darkMagenta);
  rule.pattern = QRegularExpression("\\bMath\\b");
  rule.format = classFormat;
  highlightingRules.append(rule);

  QTextCharFormat trueFalseFormat;
  trueFalseFormat.setForeground(QColor(174, 129, 255));
  rule.pattern = QRegularExpression("\\b(true|false|this)\\b");
  rule.format = trueFalseFormat;
  highlightingRules.append(rule);

  quotationFormat.setForeground(Qt::darkGreen);
  rule.pattern = QRegularExpression("\".*\"");
  rule.format = quotationFormat;
  highlightingRules.append(rule);

  singleQuotationFormat.setForeground(Qt::darkGreen);
  rule.pattern = QRegularExpression("'.*'");
  rule.format = singleQuotationFormat;
  highlightingRules.append(rule);

  functionFormat.setFontItalic(true);
  functionFormat.setForeground(QColor(204, 140, 91));

  // Exclude keywords misinterpretation as functions
  QString keywordExcludePatterns;
  foreach (const QString &pattern, keywords) {
    (pattern == keywords[0])
        ? keywordExcludePatterns.append(pattern)
        : keywordExcludePatterns.append(QString("|%1").arg(pattern));
  }

  rule.pattern = QRegularExpression(
      QString("\\b(?!(%1)+[\\s]*[/]?(?=\\())([A-Za-z0-9_]+[\\s]*[/]?(?=\\())")
          .arg(keywordExcludePatterns));
  rule.format = functionFormat;
  highlightingRules.append(rule);

  singleLineCommentFormat.setForeground(QColor(128, 128, 128));
  rule.pattern = QRegularExpression("//[^\n]*");
  rule.format = singleLineCommentFormat;
  highlightingRules.append(rule);

  multiLineCommentFormat.setForeground(QColor(128, 128, 128));

  commentStartExpression = QRegularExpression("/\\*");
  commentEndExpression = QRegularExpression("\\*/");
}

void SyntaxHighlighter::highlightBlock(const QString &text) {
  foreach (const HighlightingRule &rule, highlightingRules) {
    QRegularExpressionMatchIterator matchIterator =
        rule.pattern.globalMatch(text);
    while (matchIterator.hasNext()) {
      QRegularExpressionMatch match = matchIterator.next();
      setFormat(static_cast<int>(match.capturedStart()), static_cast<int>(match.capturedLength()), rule.format);
    }
  }
  setCurrentBlockState(0);

  int startIndex = 0;
  if (previousBlockState() != 1) {
    QRegularExpressionMatch m = commentStartExpression.match(text);
    startIndex = m.hasMatch() ? static_cast<int>(m.capturedStart()) : -1;
  }

  while (startIndex >= 0) {
    QRegularExpressionMatch endMatch =
        commentEndExpression.match(text, startIndex);
    int commentLength;
    if (!endMatch.hasMatch()) {
      setCurrentBlockState(1);
      commentLength = text.length() - startIndex;
    } else {
      commentLength =
          static_cast<int>(endMatch.capturedStart()) - startIndex + static_cast<int>(endMatch.capturedLength());
    }
    setFormat(startIndex, commentLength, multiLineCommentFormat);
    QRegularExpressionMatch nextStart =
        commentStartExpression.match(text, startIndex + commentLength);
    startIndex = nextStart.hasMatch() ? static_cast<int>(nextStart.capturedStart()) : -1;
  }
}
