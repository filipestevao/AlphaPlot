#ifndef DATAMANAGER3D_H
#define DATAMANAGER3D_H

//#include <QtDataVisualization//* QAbstract3DSeries */>
//#include <QtDataVisualization/QBar3DSeries>
//#include <QtDataVisualization/QItemModelBarDataProxy>
//#include <QtDataVisualization/QItemModelScatterDataProxy>
//#include <QtDataVisualization/QItemModelSurfaceDataProxy>
//#include <QtDataVisualization/QScatter3DSeries>
//#include <QtDataVisualization/QSurface3DSeries>
//#include <QtDataVisualization/QSurfaceDataProxy>
//#include <QtDataVisualization/QBarDataProxy>
//#include <QtDataVisualization/QScatterDataProxy>
#include <QList>
#include <QObject>
#include <QtDataVisualization/QBarDataArray>
#include <QtDataVisualization/QScatterDataArray>
#include <QtDataVisualization/QSurfaceDataArray>

#include "Graph3DCommon.h"

class Matrix;
class Table;
class Column;

#include <QtDataVisualization/qsurfacedataproxy.h>
#include <QtDataVisualization/qsurface3dseries.h>
#include <QtDataVisualization/qbardataproxy.h>
#include <QtDataVisualization/qbar3dseries.h>
#include <QtDataVisualization/qscatterdataproxy.h>
#include <QtDataVisualization/qscatter3dseries.h>
#include <QtDataVisualization/qabstract3dseries.h>
#include <QtDataVisualization/qitemmodelsurfacedataproxy.h>
#include <QtDataVisualization/qitemmodelbardataproxy.h>
#include <QtDataVisualization/qitemmodelscatterdataproxy.h>
// Manual forward declarations of QtDataVisualization classes are removed to avoid ambiguity with headers.

class DataBlockAbstract3D : public QObject {
 public:
  // getters
  Matrix *getmatrix() const { return matrix_; }
  Table *gettable() const { return table_; }
  Column *getxcolumn() const { return xcolumn_; }
  Column *getycolumn() { return ycolumn_; }
  Column *getzcolumn() { return zcolumn_; }
  Graph3DCommon::Gradient getgradient() { return gradient_; }

  // setters
  void setmatrix(Matrix *matrix) { matrix_ = matrix; }
  void settable(Table *table) { table_ = table; }
  void setxcolumn(Column *column) { xcolumn_ = column; }
  void setycolumn(Column *column) { ycolumn_ = column; }
  void setzcolumns(Column *column) { zcolumn_ = column; }
  void setgradient(QAbstract3DSeries *series,
                   const Graph3DCommon::Gradient &gradient);

 protected:
  DataBlockAbstract3D();
  DataBlockAbstract3D(Matrix *matrix);
  DataBlockAbstract3D(Table *table, Column *xcolumn, Column *ycolumn,
                      Column *zcolumn);
  ~DataBlockAbstract3D();

  Matrix *matrix_;
  Table *table_;
  Column *xcolumn_;
  Column *ycolumn_;
  Column *zcolumn_;
  Graph3DCommon::Gradient gradient_;
};

class DataBlockSurface3D : public DataBlockAbstract3D {
  Q_OBJECT
 public:
  DataBlockSurface3D(Matrix *matrix);
  DataBlockSurface3D(Table *table, Column *xcolumn, Column *ycolumn,
                     Column *zcolumn);
  DataBlockSurface3D(QList<QPair<QPair<double, double>, double>> *data,
                     const Graph3DCommon::Function3DData &funcdata);
  ~DataBlockSurface3D();

  QString getItemName();
  QIcon getItemIcon();
  QString getItemTooltip();

  void regenerateDataBlockModel();
  void regenerateDataBlockValue();
  void regenerateDataBlockFunction(
      QList<QPair<QPair<double, double>, double>> *data);

  // getters
  QSurfaceDataArray *getvaluedataarray() {
    return valueDataArray_;
  }
  QSurfaceDataProxy *getvaluedataproxy() {
    return valueDataProxy_;
  }
  QSurface3DSeries *getdataseries() { return dataSeries_; }
  QItemModelSurfaceDataProxy *getmodeldataproxy() {
    return modelDataProxy_;
  }
  bool ismatrix();
  bool istable();
  QString getfunction();
  double getxlower();
  double getxupper();
  double getylower();
  double getyupper();
  double getzlower();
  double getzupper();
  double getxpoints();
  double getypoints();

 private:
  Graph3DCommon::Function3DData funcData_;
  QSurfaceDataArray *valueDataArray_;
  QSurfaceDataProxy *valueDataProxy_;
  QSurface3DSeries *dataSeries_;
  QItemModelSurfaceDataProxy *modelDataProxy_;
};

class DataBlockBar3D : public DataBlockAbstract3D {
  Q_OBJECT
 public:
  DataBlockBar3D(Matrix *matrix);
  DataBlockBar3D(Table *table, Column *xcolumn, Column *ycolumn,
                 Column *zcolumn);
  ~DataBlockBar3D();

  QString getItemName();
  QIcon getItemIcon();
  QString getItemTooltip();

  void regenerateDataBlockModel();
  void regenerateDataBlockXYZValue();

  // getters
  QBarDataArray *getvaluedataarray() {
    return valueDataArray_;
  }
  QBarDataProxy *getvaluedataproxy() {
    return valueDataProxy_;
  }
  QBar3DSeries *getdataseries() { return dataSeries_; }
  QItemModelBarDataProxy *getmodeldataproxy() {
    return modelDataProxy_;
  }
  bool ismatrix();

 private:
  QBarDataArray *valueDataArray_;
  QBarDataProxy *valueDataProxy_;
  QBar3DSeries *dataSeries_;
  QItemModelBarDataProxy *modelDataProxy_;
};

class DataBlockScatter3D : public DataBlockAbstract3D {
  Q_OBJECT
 public:
  DataBlockScatter3D(Matrix *matrix);
  DataBlockScatter3D(Table *table, Column *xcolumn, Column *ycolumn,
                     Column *zcolumn);
  ~DataBlockScatter3D();

  QString getItemName();
  QIcon getItemIcon();
  QString getItemTooltip();

  void regenerateDataBlockModel();
  void regenerateDataBlockXYZValue();

  // getters
  QScatterDataArray *getvaluedataarray() {
    return valueDataArray_;
  }
  QScatterDataProxy *getvaluedataproxy() {
    return valueDataProxy_;
  }
  QScatter3DSeries *getdataseries() { return dataSeries_; }
  bool ismatrix();

 private:
  QScatterDataArray *valueDataArray_;
  QScatterDataProxy *valueDataProxy_;
  QScatter3DSeries *dataSeries_;
};

Q_DECLARE_METATYPE(DataBlockBar3D *);
Q_DECLARE_METATYPE(DataBlockScatter3D *);
Q_DECLARE_METATYPE(DataBlockSurface3D *);
#endif  // DATAMANAGER3D_H
