/********************************************************************************
** Form generated from reading UI file 'FittingSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FITTINGSETTINGS_H
#define UI_FITTINGSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ColorBox.h"

QT_BEGIN_NAMESPACE

class Ui_FittingSettings
{
public:
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *titleLabel;
    QGroupBox *fitCurveGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *uniformXRadioButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *pointsLabel;
    QSpinBox *pointsSpinBox;
    QCheckBox *linearFitCheckBox;
    QRadioButton *sameXRadioButton;
    QGroupBox *multiPeakGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *peakColorLabel;
    ColorBox *peakColorComboBox;
    QGroupBox *paramwtwrsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *significantDigitsLabel;
    QSpinBox *significantDigitsSpinBox;
    QCheckBox *writetoResultCheckBox;
    QCheckBox *pastetoPlotCheckBox;
    QCheckBox *scaleCheckBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *defaultsPushButton;
    QPushButton *resetPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyPushButton;

    void setupUi(QWidget *FittingSettings)
    {
        if (FittingSettings->objectName().isEmpty())
            FittingSettings->setObjectName("FittingSettings");
        FittingSettings->resize(487, 446);
        verticalLayout_3 = new QVBoxLayout(FittingSettings);
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollArea = new QScrollArea(FittingSettings);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 467, 393));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        titleLabel = new QLabel(scrollAreaWidgetContents_2);
        titleLabel->setObjectName("titleLabel");

        verticalLayout_4->addWidget(titleLabel);

        fitCurveGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        fitCurveGroupBox->setObjectName("fitCurveGroupBox");
        verticalLayout = new QVBoxLayout(fitCurveGroupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        uniformXRadioButton = new QRadioButton(fitCurveGroupBox);
        uniformXRadioButton->setObjectName("uniformXRadioButton");

        horizontalLayout->addWidget(uniformXRadioButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pointsLabel = new QLabel(fitCurveGroupBox);
        pointsLabel->setObjectName("pointsLabel");

        horizontalLayout->addWidget(pointsLabel);

        pointsSpinBox = new QSpinBox(fitCurveGroupBox);
        pointsSpinBox->setObjectName("pointsSpinBox");
        pointsSpinBox->setMaximum(10000000);

        horizontalLayout->addWidget(pointsSpinBox);

        linearFitCheckBox = new QCheckBox(fitCurveGroupBox);
        linearFitCheckBox->setObjectName("linearFitCheckBox");

        horizontalLayout->addWidget(linearFitCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        sameXRadioButton = new QRadioButton(fitCurveGroupBox);
        sameXRadioButton->setObjectName("sameXRadioButton");

        verticalLayout->addWidget(sameXRadioButton);


        verticalLayout_4->addWidget(fitCurveGroupBox);

        multiPeakGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        multiPeakGroupBox->setObjectName("multiPeakGroupBox");
        multiPeakGroupBox->setCheckable(true);
        horizontalLayout_3 = new QHBoxLayout(multiPeakGroupBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        peakColorLabel = new QLabel(multiPeakGroupBox);
        peakColorLabel->setObjectName("peakColorLabel");

        horizontalLayout_3->addWidget(peakColorLabel);

        peakColorComboBox = new ColorBox(multiPeakGroupBox);
        peakColorComboBox->setObjectName("peakColorComboBox");

        horizontalLayout_3->addWidget(peakColorComboBox);


        verticalLayout_4->addWidget(multiPeakGroupBox);

        paramwtwrsGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        paramwtwrsGroupBox->setObjectName("paramwtwrsGroupBox");
        verticalLayout_2 = new QVBoxLayout(paramwtwrsGroupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        significantDigitsLabel = new QLabel(paramwtwrsGroupBox);
        significantDigitsLabel->setObjectName("significantDigitsLabel");

        horizontalLayout_4->addWidget(significantDigitsLabel);

        significantDigitsSpinBox = new QSpinBox(paramwtwrsGroupBox);
        significantDigitsSpinBox->setObjectName("significantDigitsSpinBox");
        significantDigitsSpinBox->setMaximum(16);

        horizontalLayout_4->addWidget(significantDigitsSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        writetoResultCheckBox = new QCheckBox(paramwtwrsGroupBox);
        writetoResultCheckBox->setObjectName("writetoResultCheckBox");

        verticalLayout_2->addWidget(writetoResultCheckBox);

        pastetoPlotCheckBox = new QCheckBox(paramwtwrsGroupBox);
        pastetoPlotCheckBox->setObjectName("pastetoPlotCheckBox");

        verticalLayout_2->addWidget(pastetoPlotCheckBox);

        scaleCheckBox = new QCheckBox(paramwtwrsGroupBox);
        scaleCheckBox->setObjectName("scaleCheckBox");

        verticalLayout_2->addWidget(scaleCheckBox);


        verticalLayout_4->addWidget(paramwtwrsGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        defaultsPushButton = new QPushButton(FittingSettings);
        defaultsPushButton->setObjectName("defaultsPushButton");

        horizontalLayout_2->addWidget(defaultsPushButton);

        resetPushButton = new QPushButton(FittingSettings);
        resetPushButton->setObjectName("resetPushButton");

        horizontalLayout_2->addWidget(resetPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        applyPushButton = new QPushButton(FittingSettings);
        applyPushButton->setObjectName("applyPushButton");

        horizontalLayout_2->addWidget(applyPushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(FittingSettings);

        QMetaObject::connectSlotsByName(FittingSettings);
    } // setupUi

    void retranslateUi(QWidget *FittingSettings)
    {
        FittingSettings->setWindowTitle(QCoreApplication::translate("FittingSettings", "Form", nullptr));
        titleLabel->setText(QCoreApplication::translate("FittingSettings", "Fitting", nullptr));
        fitCurveGroupBox->setTitle(QCoreApplication::translate("FittingSettings", "Generated Fit Curve", nullptr));
        uniformXRadioButton->setText(QCoreApplication::translate("FittingSettings", "Uniform X Function", nullptr));
        pointsLabel->setText(QCoreApplication::translate("FittingSettings", "Points", nullptr));
        linearFitCheckBox->setText(QCoreApplication::translate("FittingSettings", "2 points for linear fits", nullptr));
        sameXRadioButton->setText(QCoreApplication::translate("FittingSettings", "Same X as Fitting Data", nullptr));
        multiPeakGroupBox->setTitle(QCoreApplication::translate("FittingSettings", "Display Peak Curves for Multiple Peak Fits", nullptr));
        peakColorLabel->setText(QCoreApplication::translate("FittingSettings", "Peaks Color", nullptr));
        paramwtwrsGroupBox->setTitle(QCoreApplication::translate("FittingSettings", "Parameters Output", nullptr));
        significantDigitsLabel->setText(QCoreApplication::translate("FittingSettings", "Significant digits", nullptr));
        writetoResultCheckBox->setText(QCoreApplication::translate("FittingSettings", "Write Parameters to Result Log", nullptr));
        pastetoPlotCheckBox->setText(QCoreApplication::translate("FittingSettings", "Paste Parameters to Plot", nullptr));
        scaleCheckBox->setText(QCoreApplication::translate("FittingSettings", "Scale Errors with sqrt(chi^2/doF)", nullptr));
        defaultsPushButton->setText(QCoreApplication::translate("FittingSettings", "Defaults", nullptr));
        resetPushButton->setText(QCoreApplication::translate("FittingSettings", "Reset", nullptr));
        applyPushButton->setText(QCoreApplication::translate("FittingSettings", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FittingSettings: public Ui_FittingSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FITTINGSETTINGS_H
