/***************************************************************************
    File                 : pieDialog.cpp
    Project              : QtiPlot
    --------------------------------------------------------------------
    Copyright            : (C) 2006 by Ion Vasilief, Tilman Hoener zu Siederdissen
    Email                : ion_vasilief@yahoo.fr, thzs@gmx.net
    Description          : Pie plot dialog
                           
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
#include "pieDialog.h"
#include "textDialog.h"
#include "colorBox.h"
#include "colorButton.h"
#include "patternBox.h"
#include "graph.h"
#include "multilayer.h"
#include "plot.h"
#include "pie.h"

#include <QSpinBox>
#include <QCheckBox>
#include <QGroupBox>
#include <QPushButton>
#include <QLabel>
#include <QComboBox>
#include <QTabWidget>
#include <QLayout>
#include <QListWidget>
#include <QMenu>
#include <QColorDialog>

#include <qwt_plot.h>

PieDialog::PieDialog( QWidget* parent,  const char* name, bool modal, Qt::WFlags fl )
: QDialog( parent, name, modal, fl )
{
	if ( !name )
		setName( "PieDialog" );
	setWindowTitle( tr( "QtiPlot - Pie Options" ) );

	generalDialog = new QTabWidget();

	initPiePage();
	initBorderPage();

	QHBoxLayout *hbox1 = new QHBoxLayout(); 
	hbox1->addStretch();	
	buttonWrk = new QPushButton(tr( "&Worksheet" ));
	hbox1->addWidget(buttonWrk);
	buttonApply = new QPushButton(tr( "&Apply" ));
	hbox1->addWidget(buttonApply);	
	buttonOk = new QPushButton(tr( "&OK" ));
	buttonOk->setDefault( true );
	hbox1->addWidget(buttonOk);
	buttonCancel = new QPushButton(tr( "&Cancel" ));
	hbox1->addWidget(buttonCancel);

	QVBoxLayout* vl = new QVBoxLayout();
	vl->addWidget(generalDialog);
	vl->addLayout(hbox1);
	setLayout(vl);

	resize(minimumSize());
	setMaximumHeight(minimumSize ().height());

	// signals and slots connections
	connect( buttonWrk, SIGNAL(clicked()), this, SLOT(showWorksheet()));
	connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
	connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
	connect( buttonApply, SIGNAL( clicked() ), this, SLOT(updatePlot() ) );
}

void PieDialog::initPiePage()
{
	pieOptions = new QWidget();
	curvesList = new QListWidget();

	QGridLayout *gl1 = new QGridLayout();
	gl1->addWidget(new QLabel( tr( "Color" )), 0, 0);

	boxLineColor = new ColorBox(false);
	gl1->addWidget(boxLineColor, 0, 1);

	gl1->addWidget(new QLabel(tr( "Style" )), 1, 0);
	boxLineStyle = new QComboBox( false );
	boxLineStyle->insertItem("_____");
	boxLineStyle->insertItem("- - -");
	boxLineStyle->insertItem(".....");
	boxLineStyle->insertItem("_._._");
	boxLineStyle->insertItem("_.._..");
	gl1->addWidget(boxLineStyle);

	gl1->addWidget(new QLabel(tr( "Width")), 2, 0);  
	boxLineWidth = new QSpinBox();
	gl1->addWidget(boxLineWidth, 2, 1);

	QGroupBox *gb1 = new QGroupBox(tr( "Border" ));
	gb1->setLayout(gl1);

	QGridLayout *gl2 = new QGridLayout();
	gl2->addWidget(new QLabel( tr( "First color" )), 0, 0);

	boxFirstColor = new ColorBox(false);
	gl2->addWidget(boxFirstColor, 0, 1);

	gl2->addWidget(new QLabel( tr( "Pattern" )), 1, 0);
	boxPattern = new PatternBox(false);
	gl2->addWidget(boxPattern, 1, 1);
	gl2->addWidget(new QLabel( tr( "Pie radius" )), 2, 0);

	boxRadius= new QSpinBox();
	boxRadius->setRange(0, 10000);
	boxRadius->setSingleStep(10);

	gl2->addWidget(boxRadius, 2, 1);

	QGroupBox *gb2 = new QGroupBox(tr( "Fill" ));
	gb2->setLayout(gl2);

	QHBoxLayout* hl = new QHBoxLayout();
	hl->addWidget(curvesList);
	hl->addWidget(gb1);
	hl->addWidget(gb2);
	pieOptions->setLayout(hl);

	generalDialog->insertTab(pieOptions, tr( "Pie" ) );
}

void PieDialog::initBorderPage()
{
	frame = new QWidget();	

	QGridLayout *gl1 = new QGridLayout();
	gl1->addWidget(new QLabel( tr( "Color" )), 0, 0);

	boxBackgroundColor = new ColorButton();
	gl1->addWidget(boxBackgroundColor, 0, 1);

	gl1->addWidget(new QLabel( tr( "Border Width" )), 1, 0);
	boxBorderWidth = new QSpinBox();
	gl1->addWidget(boxBorderWidth, 1, 1);

	gl1->addWidget(new QLabel( tr( "Border Color" )), 2, 0);
	boxBorderColor= new ColorButton();
	gl1->addWidget(boxBorderColor, 2, 1);

	gl1->addWidget(new QLabel( tr( "Canvas Color" )), 3, 0);
	boxCanvasColor= new ColorButton();
	gl1->addWidget(boxCanvasColor, 3, 1);

	QGroupBox *gb1 = new QGroupBox(tr("Background"));
	gb1->setLayout(gl1);

	QGroupBox *gb2 = new QGroupBox(tr("Options"));
	QGridLayout *gl2 = new QGridLayout();
	gl2->addWidget(new QLabel( tr( "Margin" )), 0, 0);

	boxMargin= new QSpinBox();
	boxMargin->setRange(0, 1000);
	boxMargin->setSingleStep(5);

	gl2->addWidget(boxMargin, 0, 1);

	boxAll = new QCheckBox(tr("Apply to all layers"));
	gl2->addWidget(boxAll, 1, 0);
	gb2->setLayout(gl2);

	QHBoxLayout* hl = new QHBoxLayout();
	hl->addWidget(gb1);
	hl->addWidget(gb2);
	frame->setLayout(hl);

	generalDialog->insertTab(frame, tr( "General" ) );

	connect(boxMargin, SIGNAL(valueChanged (int)), this, SLOT(changeMargin(int)));
	connect(boxBorderColor, SIGNAL(clicked()), this, SLOT(pickBorderColor()));
	connect(boxBackgroundColor, SIGNAL(clicked()), this, SLOT(pickBackgroundColor()));
	connect(boxBorderWidth,SIGNAL(valueChanged (int)), this, SLOT(updateBorder(int)));
	connect(boxCanvasColor,SIGNAL(clicked()), this, SLOT(pickCanvasColor()));
}

void PieDialog::setMultiLayerPlot(MultiLayer *m)
{
	mPlot = m;
	Graph* g = (Graph*)mPlot->activeGraph();
	QwtPieCurve *pie = (QwtPieCurve *)g->curve(0);
	if (!pie)
		return;

	Plot *p = g->plotWidget();

	boxMargin->setValue (p->margin());
	boxBorderWidth->setValue(p->lineWidth());
	boxBorderColor->setColor(p->frameColor());
	boxBackgroundColor->setColor(p->paletteBackgroundColor());

	boxCanvasColor->setColor(p->canvasBackground());

	curvesList->addItem(pie->title().text());
	curvesList->setCurrentItem (0);

	boxRadius->setValue(pie->ray());
	boxPattern->setPattern(pie->pattern());
	boxLineWidth->setValue(pie->pen().width());
	boxLineColor->setColor(pie->pen().color());
	setBorderStyle(pie->pen().style());
	boxFirstColor->setCurrentItem(pie->first());
}

void PieDialog::pickCanvasColor()
{
	QColor c = QColorDialog::getColor(boxCanvasColor->color(), this);
	if ( !c.isValid() || c == boxCanvasColor->color() )
		return;

	boxCanvasColor->setColor ( c ) ;

	if (boxAll->isChecked())
	{
		QWidgetList allPlots = mPlot->graphPtrs();
		for (int i=0; i<(int)allPlots.count();i++)
		{
			Graph* g=(Graph*)allPlots.at(i);
			if (g)
			{
				g->setCanvasBackground(c);
				g->replot();
			}
		}
	}
	else
	{
		Graph* g = (Graph*)mPlot->activeGraph();
		if (g)
		{
			g->setCanvasBackground(c);
			g->replot();
		}
	}

	if (c == QColor(Qt::white) && mPlot->hasOverlapingLayers())
		mPlot->updateTransparency();
}

void PieDialog::pickBackgroundColor()
{
	QColor c = QColorDialog::getColor(boxBackgroundColor->color(), this);
	if ( !c.isValid() || c == boxBackgroundColor->color() )
		return;

	boxBackgroundColor->setColor ( c ) ;

	if (boxAll->isChecked())
	{
		QWidgetList allPlots = mPlot->graphPtrs();
		for (int i=0; i<allPlots.count();i++)
		{
			Graph* g=(Graph*)allPlots.at(i);
			if (g)
				g->setBackgroundColor(c);
		}
	}
	else
	{
		Graph* g = (Graph*)mPlot->activeGraph();
		if (g)
			g->setBackgroundColor(c);
	}

	if (c == QColor(Qt::white) && mPlot->hasOverlapingLayers())
		mPlot->updateTransparency();
}

void PieDialog::pickBorderColor()
{
	QColor c = QColorDialog::getColor(boxBorderColor->color(), this);
	if ( !c.isValid() || c == boxBorderColor->color() )
		return;

	boxBorderColor->setColor ( c ) ;

	if (boxAll->isChecked())
	{
		QWidgetList allPlots = mPlot->graphPtrs();
		for (int i=0; i<allPlots.count();i++)
		{
			Graph* g=(Graph*)allPlots.at(i);
			if (g)
				g->drawBorder(boxBorderWidth->value(), c);
		}
	}
	else
	{
		Graph* g = (Graph*)mPlot->activeGraph();
		if (g)
			g->drawBorder(boxBorderWidth->value(), c);
	}
}

void PieDialog::updateBorder(int width)
{
	if (generalDialog->currentPage() != frame)
		return;

	if (boxAll->isChecked())
	{
		QWidgetList allPlots = mPlot->graphPtrs();
		for (int i=0; i<allPlots.count();i++)
		{
			Graph* g=(Graph*)allPlots.at(i);
			if (g)
				g->drawBorder(width, boxBorderColor->color());
		}
	}
	else
	{
		Graph* g = (Graph*)mPlot->activeGraph();
		if (g)
			g->drawBorder(width, boxBorderColor->color());
	}
}

void PieDialog::changeMargin(int width)
{
	if (generalDialog->currentPage() != frame)
		return;

	if (boxAll->isChecked())
	{
		QWidgetList allPlots = mPlot->graphPtrs();
		for (int i=0; i<allPlots.count();i++)
		{
			Graph* g=(Graph*)allPlots.at(i);
			if (g)
				g->changeMargin(width);
		}
	}
	else
	{
		Graph* g = (Graph*)mPlot->activeGraph();
		if (g)
			g->changeMargin(width);
	}
}

void PieDialog::showWorksheet()
{
	emit worksheet(curvesList->currentItem()->text());
	close();
}

void PieDialog::contextMenuEvent(QContextMenuEvent *e)
{
	QListWidgetItem *item = curvesList->item(0);
	if (!item)
		return;

	QPoint pos = curvesList->viewport()->mapFromGlobal(QCursor::pos());
	QRect rect = curvesList->visualItemRect(item);
	if (rect.contains(pos))
	{
		QMenu contextMenu(this);
		contextMenu.insertItem("&Delete", this, SLOT(removeCurve()));
		contextMenu.exec(QCursor::pos());
	}
	e->accept();
}

void PieDialog::removeCurve()
{
	emit toggleCurve();
	QListWidgetItem *item = curvesList->takeItem (0);
	delete item;
	close();
}

void PieDialog::setFramed(bool ok)
{
	boxFramed->setChecked(ok);
}

void PieDialog::drawFrame(bool framed)
{
	boxFrameWidth->setEnabled(framed);
	boxFrameColor->setEnabled(framed);

	emit drawFrame(framed,boxFrameWidth->text().toInt(),boxFrameColor->color());
}

void PieDialog::setFrameWidth(int w)
{
	boxFrameWidth->setValue(w);
}

void PieDialog::setFrameColor(const QColor& c)
{
	boxFrameColor->setColor(c);
}

void PieDialog::accept()
{
	updatePlot();
	close();
}

void PieDialog::updatePlot()
{
	if (generalDialog->currentPage()==(QWidget *)pieOptions)
	{
		QPen pen=QPen(boxLineColor->color(),boxLineWidth->value(), style());
		emit updatePie(pen, pattern(), boxRadius->value(), boxFirstColor->currentItem());	
	}

	if (generalDialog->currentPage()==(QWidget*)frame)
	{
		if (!boxAll->isChecked())
			return;

		QColor c = boxBackgroundColor->color();
		QWidgetList allPlots = mPlot->graphPtrs();
		for (int i=0; i<allPlots.count();i++)
		{
			Graph* g=(Graph*)allPlots.at(i);
			if (g)
			{
				g->drawBorder(boxBorderWidth->value(), boxBorderColor->color());
				g->changeMargin(boxMargin->value());
				g->setBackgroundColor(c);
				g->setCanvasBackground(c);
			}
		}
		if (c == QColor(Qt::white) && mPlot->hasOverlapingLayers())
			mPlot->updateTransparency();
	}
}

Qt::PenStyle PieDialog::style()
{
	Qt::PenStyle style;
	switch (boxLineStyle->currentItem())
	{
		case 0:
			style=Qt::SolidLine;
			break;
		case 1:
			style=Qt::DashLine;
			break;
		case 2:
			style=Qt::DotLine;
			break;
		case 3:
			style=Qt::DashDotLine;
			break;
		case 4:
			style=Qt::DashDotDotLine;
			break;
	}
	return style;
}

void PieDialog::setBorderStyle(const Qt::PenStyle& style)
{
	if(style == Qt::SolidLine)
		boxLineStyle->setCurrentItem(0);
	if(style == Qt::DashLine)
		boxLineStyle->setCurrentItem(1);
	if(style == Qt::DotLine)
		boxLineStyle->setCurrentItem(2);
	if(style == Qt::DashDotLine)
		boxLineStyle->setCurrentItem(3);
	if(style == Qt::DashDotDotLine)
		boxLineStyle->setCurrentItem(4);
}

Qt::BrushStyle PieDialog::pattern()
{
	return boxPattern->getSelectedPattern();
}

void PieDialog::showGeneralPage()
{
	generalDialog->showPage (frame);
}

PieDialog::~PieDialog()
{
}
