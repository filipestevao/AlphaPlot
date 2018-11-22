#include "TextItem2D.h"
#include <QPen>
#include "core/Utilities.h"

TextItem2D::TextItem2D(AxisRect2D *axisrect, Plot2D *plot)
    : QCPItemText(plot),
      axisrect_(axisrect),
      draggingtextitem_(false),
      cursorshape_(axisrect->getParentPlot2D()->cursor().shape()) {
  layer()->setMode(QCPLayer::LayerMode::lmBuffered);
  setClipAxisRect(axisrect_);
  setAntialiased(false);
  setstrokestyle_textitem(Qt::SolidLine);
  QBrush b = brush();
  b.setStyle(Qt::SolidPattern);
  b.setColor(Qt::white);
  setBrush(b);
  settextalignment_textitem(TextAlignment::CenterCenter);
}

TextItem2D::~TextItem2D() {}

AxisRect2D *TextItem2D::getaxisrect_textitem() const { return axisrect_; }

QColor TextItem2D::getstrokecolor_textitem() const { return pen().color(); }

double TextItem2D::getstrokethickness_textitem() const {
  return pen().widthF();
}

Qt::PenStyle TextItem2D::getstrokestyle_textitem() const {
  return pen().style();
}

TextItem2D::TextAlignment TextItem2D::gettextalignment_textitem() const {
  return textalignment_;
}

void TextItem2D::setstrokecolor_textitem(const QColor &color) {
  QPen p = pen();
  p.setColor(color);
  setPen(p);
}

void TextItem2D::setstrokethickness_textitem(const double value) {
  QPen p = pen();
  p.setWidthF(value);
  setPen(p);
}

void TextItem2D::setstrokestyle_textitem(const Qt::PenStyle &style) {
  QPen p = pen();
  p.setStyle(style);
  setPen(p);
}

void TextItem2D::settextalignment_textitem(const TextAlignment &value) {
  textalignment_ = value;
  switch (value) {
    case TextItem2D::TextAlignment::TopLeft:
      setTextAlignment(Qt::AlignTop | Qt::AlignLeft);
      break;
    case TextItem2D::TextAlignment::TopCenter:
      setTextAlignment(Qt::AlignTop | Qt::AlignHCenter);
      break;
    case TextItem2D::TextAlignment::TopRight:
      setTextAlignment(Qt::AlignTop | Qt::AlignRight);
      break;
    case TextItem2D::TextAlignment::CenterLeft:
      setTextAlignment(Qt::AlignVCenter | Qt::AlignLeft);
      break;
    case TextItem2D::TextAlignment::CenterCenter:
      setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
      break;
    case TextItem2D::TextAlignment::CenterRight:
      setTextAlignment(Qt::AlignVCenter | Qt::AlignRight);
      break;
    case TextItem2D::TextAlignment::BottomLeft:
      setTextAlignment(Qt::AlignBottom | Qt::AlignLeft);
      break;
    case TextItem2D::TextAlignment::BottomCenter:
      setTextAlignment(Qt::AlignBottom | Qt::AlignHCenter);
      break;
    case TextItem2D::TextAlignment::BottomRight:
      setTextAlignment(Qt::AlignBottom | Qt::AlignRight);
      break;
  }
}

void TextItem2D::mousePressEvent(QMouseEvent *event, const QVariant &details) {
  Q_UNUSED(details);
  if (event->button() == Qt::LeftButton) {
    if (selectTest(event->pos(), false) > 0) {
      draggingtextitem_ = true;
      cursorshape_ = axisrect_->getParentPlot2D()->cursor().shape();
      axisrect_->getParentPlot2D()->setCursor(
          Qt::CursorShape::ClosedHandCursor);
    }
  }
}

void TextItem2D::mouseMoveEvent(QMouseEvent *event, const QPointF &startPos) {
  Q_UNUSED(startPos);
  if (draggingtextitem_) {
    // set bounding rect for drag event
    QPointF eventpos = event->pos();
    if (event->pos().x() < axisrect_->left()) {
      eventpos.setX(axisrect_->left());
    }
    if (event->pos().x() > axisrect_->right()) {
      eventpos.setX(axisrect_->right());
    }
    if (event->pos().y() < axisrect_->top()) {
      eventpos.setY(axisrect_->top());
    }
    if (event->pos().y() > axisrect_->bottom()) {
      eventpos.setY(axisrect_->bottom());
    }
    position->setPixelPosition(eventpos);
    this->layer()->replot();
  }
}

void TextItem2D::mouseReleaseEvent(QMouseEvent *event,
                                   const QPointF &startPos) {
  Q_UNUSED(startPos);
  if (event->button() == Qt::LeftButton) {
    if (draggingtextitem_) {
      draggingtextitem_ = false;
      axisrect_->getParentPlot2D()->setCursor(cursorshape_);
    }
  }
}
