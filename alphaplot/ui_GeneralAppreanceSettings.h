/********************************************************************************
** Form generated from reading UI file 'GeneralAppreanceSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALAPPREANCESETTINGS_H
#define UI_GENERALAPPREANCESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../widgets/ColorLabel.h"

QT_BEGIN_NAMESPACE

class Ui_GeneralAppreanceSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *styleLabel;
    QComboBox *styleComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *colorSchemeLabel;
    QComboBox *colorSchemeComboBox;
    QGroupBox *customColorGroupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *panelTextLabel;
    QSpacerItem *horizontalSpacer_3;
    ColorLabel *panelColorLabel;
    QToolButton *panelColorButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *paneltextTextLabel;
    QSpacerItem *horizontalSpacer_4;
    ColorLabel *paneltextColorLabel;
    QToolButton *paneltextColorButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *workspaceTextLabel;
    QSpacerItem *horizontalSpacer_2;
    ColorLabel *workspaceColorLabel;
    QToolButton *workspaceColorButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTabWidget *previewTabWidget;
    QWidget *previewTab;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *previewVerticalLayout;
    QGroupBox *previewGroupBox;
    QVBoxLayout *_3;
    QRadioButton *previewRadioButton1;
    QRadioButton *previewRadioButton2;
    QSpacerItem *previewVerticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *previewProgressBar;
    QComboBox *previewComboBox;
    QPushButton *previewPushButton;
    QFrame *previewLine;
    QHBoxLayout *_5;
    QSlider *previewSlider;
    QSpinBox *previewSpinBox;
    QCheckBox *previewCheckBox;
    QSpacerItem *spacerItem;
    QScrollBar *previewScrollBar;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *previewTableWidget;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *defaultsPushButton;
    QPushButton *resetPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyPushButton;

    void setupUi(QWidget *GeneralAppreanceSettings)
    {
        if (GeneralAppreanceSettings->objectName().isEmpty())
            GeneralAppreanceSettings->setObjectName("GeneralAppreanceSettings");
        GeneralAppreanceSettings->resize(557, 498);
        verticalLayout_2 = new QVBoxLayout(GeneralAppreanceSettings);
        verticalLayout_2->setObjectName("verticalLayout_2");
        titleLabel = new QLabel(GeneralAppreanceSettings);
        titleLabel->setObjectName("titleLabel");

        verticalLayout_2->addWidget(titleLabel);

        scrollArea = new QScrollArea(GeneralAppreanceSettings);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 537, 429));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        styleLabel = new QLabel(scrollAreaWidgetContents);
        styleLabel->setObjectName("styleLabel");

        horizontalLayout->addWidget(styleLabel);

        styleComboBox = new QComboBox(scrollAreaWidgetContents);
        styleComboBox->setObjectName("styleComboBox");

        horizontalLayout->addWidget(styleComboBox);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        colorSchemeLabel = new QLabel(scrollAreaWidgetContents);
        colorSchemeLabel->setObjectName("colorSchemeLabel");

        horizontalLayout_5->addWidget(colorSchemeLabel);

        colorSchemeComboBox = new QComboBox(scrollAreaWidgetContents);
        colorSchemeComboBox->setObjectName("colorSchemeComboBox");

        horizontalLayout_5->addWidget(colorSchemeComboBox);


        verticalLayout_3->addLayout(horizontalLayout_5);

        customColorGroupBox = new QGroupBox(scrollAreaWidgetContents);
        customColorGroupBox->setObjectName("customColorGroupBox");
        verticalLayout_4 = new QVBoxLayout(customColorGroupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        panelTextLabel = new QLabel(customColorGroupBox);
        panelTextLabel->setObjectName("panelTextLabel");

        horizontalLayout_7->addWidget(panelTextLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        panelColorLabel = new ColorLabel(customColorGroupBox);
        panelColorLabel->setObjectName("panelColorLabel");

        horizontalLayout_7->addWidget(panelColorLabel);

        panelColorButton = new QToolButton(customColorGroupBox);
        panelColorButton->setObjectName("panelColorButton");

        horizontalLayout_7->addWidget(panelColorButton);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        paneltextTextLabel = new QLabel(customColorGroupBox);
        paneltextTextLabel->setObjectName("paneltextTextLabel");

        horizontalLayout_8->addWidget(paneltextTextLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        paneltextColorLabel = new ColorLabel(customColorGroupBox);
        paneltextColorLabel->setObjectName("paneltextColorLabel");

        horizontalLayout_8->addWidget(paneltextColorLabel);

        paneltextColorButton = new QToolButton(customColorGroupBox);
        paneltextColorButton->setObjectName("paneltextColorButton");

        horizontalLayout_8->addWidget(paneltextColorButton);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        workspaceTextLabel = new QLabel(customColorGroupBox);
        workspaceTextLabel->setObjectName("workspaceTextLabel");

        horizontalLayout_6->addWidget(workspaceTextLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        workspaceColorLabel = new ColorLabel(customColorGroupBox);
        workspaceColorLabel->setObjectName("workspaceColorLabel");

        horizontalLayout_6->addWidget(workspaceColorLabel);

        workspaceColorButton = new QToolButton(customColorGroupBox);
        workspaceColorButton->setObjectName("workspaceColorButton");

        horizontalLayout_6->addWidget(workspaceColorButton);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_3->addWidget(customColorGroupBox);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        previewTabWidget = new QTabWidget(groupBox);
        previewTabWidget->setObjectName("previewTabWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(previewTabWidget->sizePolicy().hasHeightForWidth());
        previewTabWidget->setSizePolicy(sizePolicy);
        previewTab = new QWidget();
        previewTab->setObjectName("previewTab");
        horizontalLayout_4 = new QHBoxLayout(previewTab);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        previewVerticalLayout = new QVBoxLayout();
        previewVerticalLayout->setObjectName("previewVerticalLayout");
        previewGroupBox = new QGroupBox(previewTab);
        previewGroupBox->setObjectName("previewGroupBox");
        _3 = new QVBoxLayout(previewGroupBox);
        _3->setObjectName("_3");
        previewRadioButton1 = new QRadioButton(previewGroupBox);
        previewRadioButton1->setObjectName("previewRadioButton1");
        previewRadioButton1->setChecked(true);

        _3->addWidget(previewRadioButton1);

        previewRadioButton2 = new QRadioButton(previewGroupBox);
        previewRadioButton2->setObjectName("previewRadioButton2");

        _3->addWidget(previewRadioButton2);


        previewVerticalLayout->addWidget(previewGroupBox);

        previewVerticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        previewVerticalLayout->addItem(previewVerticalSpacer);


        horizontalLayout_4->addLayout(previewVerticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        previewProgressBar = new QProgressBar(previewTab);
        previewProgressBar->setObjectName("previewProgressBar");
        previewProgressBar->setValue(70);

        horizontalLayout_3->addWidget(previewProgressBar);

        previewComboBox = new QComboBox(previewTab);
        previewComboBox->addItem(QString());
        previewComboBox->setObjectName("previewComboBox");

        horizontalLayout_3->addWidget(previewComboBox);

        previewPushButton = new QPushButton(previewTab);
        previewPushButton->setObjectName("previewPushButton");

        horizontalLayout_3->addWidget(previewPushButton);


        verticalLayout_5->addLayout(horizontalLayout_3);

        previewLine = new QFrame(previewTab);
        previewLine->setObjectName("previewLine");
        previewLine->setFrameShape(QFrame::HLine);
        previewLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(previewLine);

        _5 = new QHBoxLayout();
        _5->setObjectName("_5");
        previewSlider = new QSlider(previewTab);
        previewSlider->setObjectName("previewSlider");
        previewSlider->setValue(30);
        previewSlider->setOrientation(Qt::Horizontal);

        _5->addWidget(previewSlider);

        previewSpinBox = new QSpinBox(previewTab);
        previewSpinBox->setObjectName("previewSpinBox");

        _5->addWidget(previewSpinBox);

        previewCheckBox = new QCheckBox(previewTab);
        previewCheckBox->setObjectName("previewCheckBox");
        previewCheckBox->setChecked(true);
        previewCheckBox->setTristate(false);

        _5->addWidget(previewCheckBox);


        verticalLayout_5->addLayout(_5);


        horizontalLayout_4->addLayout(verticalLayout_5);

        spacerItem = new QSpacerItem(13, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_4->addItem(spacerItem);

        previewScrollBar = new QScrollBar(previewTab);
        previewScrollBar->setObjectName("previewScrollBar");
        previewScrollBar->setMaximum(19);
        previewScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout_4->addWidget(previewScrollBar);

        previewTabWidget->addTab(previewTab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName("verticalLayout");
        previewTableWidget = new QTableWidget(tab_2);
        if (previewTableWidget->columnCount() < 2)
            previewTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        previewTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        previewTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (previewTableWidget->rowCount() < 11)
            previewTableWidget->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        previewTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        previewTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        previewTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        previewTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        previewTableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        previewTableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        previewTableWidget->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        previewTableWidget->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        previewTableWidget->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        previewTableWidget->setVerticalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        previewTableWidget->setVerticalHeaderItem(10, __qtablewidgetitem12);
        previewTableWidget->setObjectName("previewTableWidget");

        verticalLayout->addWidget(previewTableWidget);

        previewTabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(previewTabWidget, 2, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        defaultsPushButton = new QPushButton(GeneralAppreanceSettings);
        defaultsPushButton->setObjectName("defaultsPushButton");

        horizontalLayout_2->addWidget(defaultsPushButton);

        resetPushButton = new QPushButton(GeneralAppreanceSettings);
        resetPushButton->setObjectName("resetPushButton");

        horizontalLayout_2->addWidget(resetPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        applyPushButton = new QPushButton(GeneralAppreanceSettings);
        applyPushButton->setObjectName("applyPushButton");

        horizontalLayout_2->addWidget(applyPushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(GeneralAppreanceSettings);

        previewTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GeneralAppreanceSettings);
    } // setupUi

    void retranslateUi(QWidget *GeneralAppreanceSettings)
    {
        GeneralAppreanceSettings->setWindowTitle(QCoreApplication::translate("GeneralAppreanceSettings", "Form", nullptr));
        titleLabel->setText(QString());
        styleLabel->setText(QCoreApplication::translate("GeneralAppreanceSettings", "Style", nullptr));
        colorSchemeLabel->setText(QCoreApplication::translate("GeneralAppreanceSettings", "Color Scheme", nullptr));
        customColorGroupBox->setTitle(QCoreApplication::translate("GeneralAppreanceSettings", "Custom Colors", nullptr));
        panelTextLabel->setText(QCoreApplication::translate("GeneralAppreanceSettings", "Panel", nullptr));
        panelColorLabel->setText(QString());
        panelColorButton->setText(QCoreApplication::translate("GeneralAppreanceSettings", "...", nullptr));
        paneltextTextLabel->setText(QCoreApplication::translate("GeneralAppreanceSettings", "Panel text", nullptr));
        paneltextColorLabel->setText(QString());
        paneltextColorButton->setText(QCoreApplication::translate("GeneralAppreanceSettings", "...", nullptr));
        workspaceTextLabel->setText(QCoreApplication::translate("GeneralAppreanceSettings", "Workspace", nullptr));
        workspaceColorLabel->setText(QString());
        workspaceColorButton->setText(QCoreApplication::translate("GeneralAppreanceSettings", "...", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GeneralAppreanceSettings", "Preview", nullptr));
        previewGroupBox->setTitle(QCoreApplication::translate("GeneralAppreanceSettings", "Group Box", nullptr));
        previewRadioButton1->setText(QCoreApplication::translate("GeneralAppreanceSettings", "Radio butto&n", nullptr));
        previewRadioButton2->setText(QCoreApplication::translate("GeneralAppreanceSettings", "Radio button", nullptr));
        previewComboBox->setItemText(0, QCoreApplication::translate("GeneralAppreanceSettings", "Combobox", nullptr));

        previewPushButton->setText(QCoreApplication::translate("GeneralAppreanceSettings", "Button", nullptr));
        previewCheckBox->setText(QCoreApplication::translate("GeneralAppreanceSettings", "Checkbox", nullptr));
        previewTabWidget->setTabText(previewTabWidget->indexOf(previewTab), QCoreApplication::translate("GeneralAppreanceSettings", "Controls", nullptr));
        QTableWidgetItem *___qtablewidgetitem = previewTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("GeneralAppreanceSettings", "1[X]", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = previewTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("GeneralAppreanceSettings", "2[Y]", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = previewTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("GeneralAppreanceSettings", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = previewTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("GeneralAppreanceSettings", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = previewTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("GeneralAppreanceSettings", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = previewTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("GeneralAppreanceSettings", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = previewTableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("GeneralAppreanceSettings", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = previewTableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("GeneralAppreanceSettings", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = previewTableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("GeneralAppreanceSettings", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = previewTableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("GeneralAppreanceSettings", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = previewTableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("GeneralAppreanceSettings", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = previewTableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("GeneralAppreanceSettings", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = previewTableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("GeneralAppreanceSettings", "12", nullptr));
        previewTabWidget->setTabText(previewTabWidget->indexOf(tab_2), QCoreApplication::translate("GeneralAppreanceSettings", "Table", nullptr));
        defaultsPushButton->setText(QCoreApplication::translate("GeneralAppreanceSettings", "Defaults", nullptr));
        resetPushButton->setText(QCoreApplication::translate("GeneralAppreanceSettings", "Reset", nullptr));
        applyPushButton->setText(QCoreApplication::translate("GeneralAppreanceSettings", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeneralAppreanceSettings: public Ui_GeneralAppreanceSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALAPPREANCESETTINGS_H
