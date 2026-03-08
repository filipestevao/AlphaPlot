/********************************************************************************
** Form generated from reading UI file 'TableColorSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLECOLORSETTINGS_H
#define UI_TABLECOLORSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../widgets/ColorLabel.h"

QT_BEGIN_NAMESPACE

class Ui_TableColorSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *titleLabel;
    QGroupBox *columnColorGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *columnxTextLabel;
    QSpacerItem *horizontalSpacer_5;
    ColorLabel *columnxColorLabel;
    QToolButton *columnxColorButton;
    QHBoxLayout *horizontalLayout_12;
    QLabel *columnxerrTextLabel;
    QSpacerItem *horizontalSpacer_8;
    ColorLabel *columnxerrColorLabel;
    QToolButton *columnxerrColorButton;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *columnyTextLabel;
    QSpacerItem *horizontalSpacer_6;
    ColorLabel *columnyColorLabel;
    QToolButton *columnyColorButton;
    QHBoxLayout *horizontalLayout_13;
    QLabel *columnyerrTextLabel;
    QSpacerItem *horizontalSpacer_9;
    ColorLabel *columnyerrColorLabel;
    QToolButton *columnyerrColorButton;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *columnzTextLabel;
    QSpacerItem *horizontalSpacer_7;
    ColorLabel *columnzColorLabel;
    QToolButton *columnzColorButton;
    QHBoxLayout *horizontalLayout_14;
    QLabel *noneTextLabel;
    QSpacerItem *horizontalSpacer_10;
    ColorLabel *noneColorLabel;
    QToolButton *noneColorButton;
    QGroupBox *customColorGroupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *backgroundTextLabel;
    QSpacerItem *horizontalSpacer_3;
    ColorLabel *backgroundColorLabel;
    QToolButton *backgroundColorButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *textTextLabel;
    QSpacerItem *horizontalSpacer_4;
    ColorLabel *textColorLabel;
    QToolButton *textColorButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelTextLabel;
    QSpacerItem *horizontalSpacer_2;
    ColorLabel *labelColorLabel;
    QToolButton *labelColorButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *defaultsPushButton;
    QPushButton *resetPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyPushButton;

    void setupUi(QWidget *TableColorSettings)
    {
        if (TableColorSettings->objectName().isEmpty())
            TableColorSettings->setObjectName("TableColorSettings");
        TableColorSettings->resize(400, 424);
        verticalLayout_2 = new QVBoxLayout(TableColorSettings);
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea = new QScrollArea(TableColorSettings);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 380, 371));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        titleLabel = new QLabel(scrollAreaWidgetContents_2);
        titleLabel->setObjectName("titleLabel");

        verticalLayout_3->addWidget(titleLabel);

        columnColorGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        columnColorGroupBox->setObjectName("columnColorGroupBox");
        verticalLayout = new QVBoxLayout(columnColorGroupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        columnxTextLabel = new QLabel(columnColorGroupBox);
        columnxTextLabel->setObjectName("columnxTextLabel");

        horizontalLayout_9->addWidget(columnxTextLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        columnxColorLabel = new ColorLabel(columnColorGroupBox);
        columnxColorLabel->setObjectName("columnxColorLabel");

        horizontalLayout_9->addWidget(columnxColorLabel);

        columnxColorButton = new QToolButton(columnColorGroupBox);
        columnxColorButton->setObjectName("columnxColorButton");

        horizontalLayout_9->addWidget(columnxColorButton);


        horizontalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        columnxerrTextLabel = new QLabel(columnColorGroupBox);
        columnxerrTextLabel->setObjectName("columnxerrTextLabel");

        horizontalLayout_12->addWidget(columnxerrTextLabel);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_8);

        columnxerrColorLabel = new ColorLabel(columnColorGroupBox);
        columnxerrColorLabel->setObjectName("columnxerrColorLabel");

        horizontalLayout_12->addWidget(columnxerrColorLabel);

        columnxerrColorButton = new QToolButton(columnColorGroupBox);
        columnxerrColorButton->setObjectName("columnxerrColorButton");

        horizontalLayout_12->addWidget(columnxerrColorButton);


        horizontalLayout->addLayout(horizontalLayout_12);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        columnyTextLabel = new QLabel(columnColorGroupBox);
        columnyTextLabel->setObjectName("columnyTextLabel");

        horizontalLayout_10->addWidget(columnyTextLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);

        columnyColorLabel = new ColorLabel(columnColorGroupBox);
        columnyColorLabel->setObjectName("columnyColorLabel");

        horizontalLayout_10->addWidget(columnyColorLabel);

        columnyColorButton = new QToolButton(columnColorGroupBox);
        columnyColorButton->setObjectName("columnyColorButton");

        horizontalLayout_10->addWidget(columnyColorButton);


        horizontalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        columnyerrTextLabel = new QLabel(columnColorGroupBox);
        columnyerrTextLabel->setObjectName("columnyerrTextLabel");

        horizontalLayout_13->addWidget(columnyerrTextLabel);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_9);

        columnyerrColorLabel = new ColorLabel(columnColorGroupBox);
        columnyerrColorLabel->setObjectName("columnyerrColorLabel");

        horizontalLayout_13->addWidget(columnyerrColorLabel);

        columnyerrColorButton = new QToolButton(columnColorGroupBox);
        columnyerrColorButton->setObjectName("columnyerrColorButton");

        horizontalLayout_13->addWidget(columnyerrColorButton);


        horizontalLayout_3->addLayout(horizontalLayout_13);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        columnzTextLabel = new QLabel(columnColorGroupBox);
        columnzTextLabel->setObjectName("columnzTextLabel");

        horizontalLayout_11->addWidget(columnzTextLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);

        columnzColorLabel = new ColorLabel(columnColorGroupBox);
        columnzColorLabel->setObjectName("columnzColorLabel");

        horizontalLayout_11->addWidget(columnzColorLabel);

        columnzColorButton = new QToolButton(columnColorGroupBox);
        columnzColorButton->setObjectName("columnzColorButton");

        horizontalLayout_11->addWidget(columnzColorButton);


        horizontalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        noneTextLabel = new QLabel(columnColorGroupBox);
        noneTextLabel->setObjectName("noneTextLabel");

        horizontalLayout_14->addWidget(noneTextLabel);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_10);

        noneColorLabel = new ColorLabel(columnColorGroupBox);
        noneColorLabel->setObjectName("noneColorLabel");

        horizontalLayout_14->addWidget(noneColorLabel);

        noneColorButton = new QToolButton(columnColorGroupBox);
        noneColorButton->setObjectName("noneColorButton");

        horizontalLayout_14->addWidget(noneColorButton);


        horizontalLayout_4->addLayout(horizontalLayout_14);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(columnColorGroupBox);

        customColorGroupBox = new QGroupBox(scrollAreaWidgetContents_2);
        customColorGroupBox->setObjectName("customColorGroupBox");
        verticalLayout_4 = new QVBoxLayout(customColorGroupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        backgroundTextLabel = new QLabel(customColorGroupBox);
        backgroundTextLabel->setObjectName("backgroundTextLabel");

        horizontalLayout_7->addWidget(backgroundTextLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        backgroundColorLabel = new ColorLabel(customColorGroupBox);
        backgroundColorLabel->setObjectName("backgroundColorLabel");

        horizontalLayout_7->addWidget(backgroundColorLabel);

        backgroundColorButton = new QToolButton(customColorGroupBox);
        backgroundColorButton->setObjectName("backgroundColorButton");

        horizontalLayout_7->addWidget(backgroundColorButton);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        textTextLabel = new QLabel(customColorGroupBox);
        textTextLabel->setObjectName("textTextLabel");

        horizontalLayout_8->addWidget(textTextLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        textColorLabel = new ColorLabel(customColorGroupBox);
        textColorLabel->setObjectName("textColorLabel");

        horizontalLayout_8->addWidget(textColorLabel);

        textColorButton = new QToolButton(customColorGroupBox);
        textColorButton->setObjectName("textColorButton");

        horizontalLayout_8->addWidget(textColorButton);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        labelTextLabel = new QLabel(customColorGroupBox);
        labelTextLabel->setObjectName("labelTextLabel");

        horizontalLayout_6->addWidget(labelTextLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        labelColorLabel = new ColorLabel(customColorGroupBox);
        labelColorLabel->setObjectName("labelColorLabel");

        horizontalLayout_6->addWidget(labelColorLabel);

        labelColorButton = new QToolButton(customColorGroupBox);
        labelColorButton->setObjectName("labelColorButton");

        horizontalLayout_6->addWidget(labelColorButton);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_3->addWidget(customColorGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        defaultsPushButton = new QPushButton(TableColorSettings);
        defaultsPushButton->setObjectName("defaultsPushButton");

        horizontalLayout_2->addWidget(defaultsPushButton);

        resetPushButton = new QPushButton(TableColorSettings);
        resetPushButton->setObjectName("resetPushButton");

        horizontalLayout_2->addWidget(resetPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        applyPushButton = new QPushButton(TableColorSettings);
        applyPushButton->setObjectName("applyPushButton");

        horizontalLayout_2->addWidget(applyPushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(TableColorSettings);

        QMetaObject::connectSlotsByName(TableColorSettings);
    } // setupUi

    void retranslateUi(QWidget *TableColorSettings)
    {
        TableColorSettings->setWindowTitle(QCoreApplication::translate("TableColorSettings", "Form", nullptr));
        titleLabel->setText(QString());
        columnColorGroupBox->setTitle(QCoreApplication::translate("TableColorSettings", "Column Color Indicator", nullptr));
        columnxTextLabel->setText(QCoreApplication::translate("TableColorSettings", "Column X ", nullptr));
        columnxColorLabel->setText(QString());
        columnxColorButton->setText(QCoreApplication::translate("TableColorSettings", "...", nullptr));
        columnxerrTextLabel->setText(QCoreApplication::translate("TableColorSettings", "Column Xerr", nullptr));
        columnxerrColorLabel->setText(QString());
        columnxerrColorButton->setText(QCoreApplication::translate("TableColorSettings", "...", nullptr));
        columnyTextLabel->setText(QCoreApplication::translate("TableColorSettings", "Column Y", nullptr));
        columnyColorLabel->setText(QString());
        columnyColorButton->setText(QCoreApplication::translate("TableColorSettings", "...", nullptr));
        columnyerrTextLabel->setText(QCoreApplication::translate("TableColorSettings", "Column Yerr", nullptr));
        columnyerrColorLabel->setText(QString());
        columnyerrColorButton->setText(QCoreApplication::translate("TableColorSettings", "...", nullptr));
        columnzTextLabel->setText(QCoreApplication::translate("TableColorSettings", "Column Z", nullptr));
        columnzColorLabel->setText(QString());
        columnzColorButton->setText(QCoreApplication::translate("TableColorSettings", "...", nullptr));
        noneTextLabel->setText(QCoreApplication::translate("TableColorSettings", "None", nullptr));
        noneColorLabel->setText(QString());
        noneColorButton->setText(QCoreApplication::translate("TableColorSettings", "...", nullptr));
        customColorGroupBox->setTitle(QCoreApplication::translate("TableColorSettings", "Custom Colors", nullptr));
        backgroundTextLabel->setText(QCoreApplication::translate("TableColorSettings", " Background", nullptr));
        backgroundColorLabel->setText(QString());
        backgroundColorButton->setText(QCoreApplication::translate("TableColorSettings", "...", nullptr));
        textTextLabel->setText(QCoreApplication::translate("TableColorSettings", "Text", nullptr));
        textColorLabel->setText(QString());
        textColorButton->setText(QCoreApplication::translate("TableColorSettings", "...", nullptr));
        labelTextLabel->setText(QCoreApplication::translate("TableColorSettings", "Label", nullptr));
        labelColorLabel->setText(QString());
        labelColorButton->setText(QCoreApplication::translate("TableColorSettings", "...", nullptr));
        defaultsPushButton->setText(QCoreApplication::translate("TableColorSettings", "Defaults", nullptr));
        resetPushButton->setText(QCoreApplication::translate("TableColorSettings", "Reset", nullptr));
        applyPushButton->setText(QCoreApplication::translate("TableColorSettings", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableColorSettings: public Ui_TableColorSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLECOLORSETTINGS_H
