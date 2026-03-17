/* This file is part of AlphaPlot.
   Copyright 2016, Arun Narayanankutty <n.arun.lifescience@gmail.com>

   AlphaPlot is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   AlphaPlot is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with AlphaPlot.  If not, see <http://www.gnu.org/licenses/>.

   Description : AlphaPlot Console dock widget
*/
#include "ConsoleWidget.h"
#include <QDebug>
#include <QPainter>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QJSValueIterator>
#include "ui_ConsoleWidget.h"

#include "scripting/widgets/Console.h"

ConsoleWidget::ConsoleWidget(QWidget *parent)
    : QDockWidget(parent),
      engine(new QJSEngine(this)),
      ui_(new Ui_ConsoleWidget),
      scriptGlobalObjectsModel(new QStandardItemModel(this)) {
  ui_->setupUi(this);
  setWindowTitle(tr("Scripting Console"));
  setWindowIcon(QIcon());
  ui_->gridLayout->setSpacing(0);
  ui_->gridLayout->setContentsMargins(0, 0, 0, 0);
  ui_->console->setFrameShape(QFrame::NoFrame);
  ui_->tableView->setFrameShape(QFrame::NoFrame);
  ui_->splitter->setSizes(QList<int>() << 70 << 30);
  // ui_->tableView->setShowGrid(false);
  ui_->tableView->verticalHeader()->setVisible(false);
  ui_->tableView->horizontalHeader()->setSelectionMode(
      QAbstractItemView::SingleSelection);
  ui_->tableView->horizontalHeader()->setSectionResizeMode(
      (0, QHeaderView::Stretch));
  scriptGlobalObjectsModel->setColumnCount(2);
  ui_->tableView->setModel(scriptGlobalObjectsModel);
  ui_->tableView->setItemDelegate(new Delegate(this));
  ui_->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
  ui_->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
  ui_->tableView->setAlternatingRowColors(true);
  addScriptGlobalsToTableView();

  connect(ui_->console, SIGNAL(command(QString)), this,
          SLOT(evaluate(QString)));

  // In Qt 6, use newQObject() to expose a QObject's Q_INVOKABLE methods to JS.
  // We expose ConsoleWidget itself as the global 'Console' object.
  engine->installExtensions(QJSEngine::ConsoleExtension);
  QJSValue consoleHelper = engine->newQObject(this);
  engine->globalObject().setProperty("Console", consoleHelper);
  
  // Also expose the UI console widget for direct output access
  QJSValue uiConsole = engine->newQObject(ui_->console);
  engine->globalObject().setProperty("_console", uiConsole);

  // Inject JS wrapper functions for backward compatibility
  engine->evaluate(
    "function print() {\n"
    "  var args = Array.prototype.slice.call(arguments);\n"
    "  Console.jsPrint(args.join(' '));\n"
    "}\n"
    "function clear() { Console.jsClear(); }\n"
    "function collectGarbage() { Console.jsCollectGarbage(); }\n"
    "function attachDebugger(b) { Console.jsAttachDebugger(b); }\n"
  );
}

ConsoleWidget::~ConsoleWidget() {
  delete ui_;
  if (engine) delete engine;
}

void ConsoleWidget::printError(QString err) {
  ui_->console->result("muParser error: " + err, Console::Error);
}

void ConsoleWidget::jsPrint(const QString &text) {
  ui_->console->append(text);
}

void ConsoleWidget::jsClear() {
  ui_->console->clearConsole();
}

void ConsoleWidget::jsCollectGarbage() {
  if (engine) engine->collectGarbage();
}

void ConsoleWidget::setSplitterPosition(QByteArray state) {
  ui_->splitter->restoreState(state);
}

QByteArray ConsoleWidget::getSplitterPosition() {
  return ui_->splitter->saveState();
}

void ConsoleWidget::addScriptGlobalsToTableView() {
  QPair<QString, QString> rowPair;
  scriptGlobalObjectsModel->clear();
  scriptGlobalObjectsModel->setHorizontalHeaderLabels(QStringList()
                                                      << "variables"
                                                      << "values");
  QJSValue globalObj = engine->globalObject();
  QJSValueIterator it(globalObj);
  while (it.hasNext()) {
    it.next();
    QString name = it.name();
    QJSValue value = it.value();

    if (value.isArray()) {
      rowPair.first = name + QString("[%0]").arg(
                                       value.property("length").toString());
      QString arrayValue;
      int arrayLength = value.property("length").toInt();
      for (int j = 0; j < 3; j++) {
        if (j < arrayLength)
          arrayValue += value.property(j).toString() + " ,";
      }
      if (arrayLength > 3) arrayValue += "...";
      rowPair.second = arrayValue;
      appendRowToTableView(rowPair);
    } else if (!value.isCallable() && !value.isObject()) {
      if (name != "NaN" && name != "Infinity" && name != "undefined") {
        rowPair.first = name;
        rowPair.second = value.toString();
        appendRowToTableView(rowPair);
      }
    } else if (value.isObject() && !value.isCallable()) {
      rowPair.first = name;
      rowPair.second = value.toString();
      appendRowToTableView(rowPair);
    }
  }
}

void ConsoleWidget::appendRowToTableView(QPair<QString, QString> rowPair) {
  scriptGlobalObjectsModel->appendRow(QList<QStandardItem *>()
                                      << new QStandardItem(rowPair.first)
                                      << new QStandardItem(rowPair.second));
}

void ConsoleWidget::evaluate(QString line) {
  snippet.append(line);
  snippet += QLatin1Char('\n');
  
  // QJSEngine doesn't have canEvaluate, we'll try to evaluate and check for errors 
  // but a partial input logic is harder. For now, let's just evaluate.
  QJSValue result = engine->evaluate(snippet, "line", 1);
  if (result.isError()) {
      // If it's a syntax error that looks like partial input, we might want to continue.
      // But QJSEngine makes this hard.
      QString msg = result.toString();
      if (msg.contains("SyntaxError") && (msg.contains("Expected") || msg.contains("Unexpected end of input"))) {
          // Likely partial input
          ui_->console->partialResult();
          return;
      }
  }

  snippet.clear();
  if (!result.isUndefined()) {
    if (!result.isError()) {
      ui_->console->result(result.toString(), Console::Success);
    } else {
      ui_->console->result(result.toString(), Console::Error);
    }
  } else {
    ui_->console->promptWithoutResult();
  }
  addScriptGlobalsToTableView();
}

void Delegate::paint(QPainter *painter, const QStyleOptionViewItem &option,
                     const QModelIndex &index) const {
  QString val;
  QStyleOptionViewItem opt(option);
  /*if (qVariantCanConvert<QString>(index.data()))
    val = qVariantValue<QString>(index.data());
  if (val == "variable") {
    QColor fillColor = option.palette.highlight();
    fillColor.setAlpha(50);
    painter->fillRect(option.rect,fillColor);
    }*/
  QItemDelegate::paint(painter, opt, index);
}
