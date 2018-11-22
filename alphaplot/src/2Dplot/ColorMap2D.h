#ifndef COLORMAP2D_H
#define COLORMAP2D_H

#include "../3rdparty/qcustomplot/qcustomplot.h"
#include "Axis2D.h"

class Matrix;

class ColorMap2D : public QCPColorMap {
 public:
  ColorMap2D(Matrix *matrix, Axis2D *xAxis, Axis2D *yAxis);
  ~ColorMap2D();

  enum class Gradient : int {
    Grayscale = 0,
    Hot = 1,
    Cold = 2,
    Night = 3,
    candy = 4,
    Geography = 5,
    Ion = 6,
    Thermal = 7,
    Polar = 8,
    Spectrum = 9,
    Jet = 10,
    Hues = 11
  };

  Gradient getgradient_colormap() const;
  QString getname_colormap() const;
  Axis2D *getcolormapscaleaxis_colormap() {
    return qobject_cast<Axis2D *>(colorScale_->axis());
  }
  void setgradient_colormap(const Gradient &grad);
  void setname_colormap(const QString &value);

 private:
  QCPMarginGroup *margingroup_;
  Axis2D *xaxis_;
  Axis2D *yaxis_;
  Matrix *matrix_;
  QCPColorScale *colorScale_;
  QCPColorMapData *data_;
  Gradient gradient_;
};

#endif  // COLORMAP2D_H
