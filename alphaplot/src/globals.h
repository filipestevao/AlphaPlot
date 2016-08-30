/***************************************************************************
    File                 : globals.h
    Project              : AlphaPlot
    Description          : Definition of global constants and enums
    --------------------------------------------------------------------
    Copyright            : (C) 2006-2009 Tilman Benkert (thzs*gmx.net)
    Copyright            : (C) 2006-2007 Ion Vasilief (ion_vasilief*yahoo.fr)
                           (replace * with @ in the email addresses)

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *  This program is free software; you can redistribute it and/or modify   *
 *  it under the terms of the GNU General Public License as published by   *
 *  the Free Software Foundation; either version 2 of the License, or      *
 *  (at your option) any later version.                                    *
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

#ifndef ALPHA_PLOT_GLOBALS_H
#define ALPHA_PLOT_GLOBALS_H

#include <QObject>
#include <QString>
#include <QColor>

//! Definition of global constants and enums
/**
 * This class must not be instanced. All members are static.
 */
class AlphaPlot : public QObject {
  Q_OBJECT
  Q_ENUMS(PlotDesignation)
  Q_ENUMS(ColumnMode)
  Q_ENUMS(ColumnDataType)

 private:
  AlphaPlot() {}  // don't allow instancing

 public:
  virtual ~AlphaPlot() {}  // avoid the warning message

  // Url links
  static const char* homepage_Uri;
  static const char* manual_Uri;
  static const char* forum_Uri;
  static const char* bugreport_Uri;
  static const char* download_Uri;

  // Table header/comment height
  static int headerHeight;
  static int commentHeaderHeight;

  // Table header color codes
  static QColor xColorCode;
  static QColor yColorCode;
  static QColor zColorCode;
  static QColor xErrColorCode;
  static QColor yErrColorCode;
  static QColor noneColorCode;

  // Table header color code geometry
  static int colorCodeThickness;
  static int colorCodeXPadding;
  static int colorCodeYPadding;

  //! Types of plot designations
  enum PlotDesignation {
    noDesignation = 0,  //!< no plot designation
    X = 1,              //!< x values
    Y = 2,              //!< y values
    Z = 3,              //!< z values
    xErr = 4,           //!< x errors
    yErr = 5            //!< y errors
  };

  //! The column mode (defines output and input filter for table columns)
  enum ColumnMode {
    Numeric = 0,   //!< column contains doubles
    Text = 1,      //!< column contains strings
    Month = 4,     //!< column contains month names
    Day = 5,       //!< column containts day of week names
    DateTime = 6,  //!< column contains dates and/or times
    // 2 and 3 are skipped to avoid problems with old obsolete values
  };

  //! Column data type
  enum ColumnDataType {
    TypeDouble = 1,
    TypeString = 2,
    TypeMonth = 3,
    TypeDay = 4,
    TypeDateTime = 5
  };

  // Return the AlphaPlot version number
  static int version();

  static QString enumValueToString(int key, const QString& enum_name);
  static int enumStringToValue(const QString& string, const QString& enum_name);

  // Return the AlphaPlot version string ("AlphaPlot x.y.z" without extra
  // version) used in the project file
  static QString schemaVersion();
  /// the user visible release version string (x.Dy usually)
  static QString versionString();

  // Return the extra version as a string
  static QString extraVersion();

  // Return the release date as a string
  static QString releaseDateString();

  // Returns original author
  static QString originalAuthor();

  static QString originalAuthorWithMail();

 private:
  /* 0xMMmmbb means MM.mm.bb with<br>
   * MM = major version
   * mm = minor version
   * bb = bugfix version */
  static const int AlphaPlot_versionNo;
  static const char* AlphaPlot_version;
  // Extra version information string (like "-alpha", "-beta", "-rc1", etc...)
  static const char* extra_version;
  // Release date as a string
  static const char* release_date;
};

#endif  // ALPHA_PLOT_GLOBALS_H
