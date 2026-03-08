/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../widgets/aSettingsListView.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QGridLayout *settingGridLayout;
    QHBoxLayout *headerHorizontalLayout;
    QPushButton *settingsButton;
    QSpacerItem *headerHorizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QGridLayout *stackGridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *scrollVerticalLayout;
    QLabel *generalLabel;
    aSettingsListView *generalListView;
    QLabel *tableLabel;
    aSettingsListView *tableListView;
    QLabel *plot2dLabel;
    aSettingsListView *plot2dListView;
    QLabel *plot3dLabel;
    aSettingsListView *plot3dListView;
    QLabel *fittingLabel;
    aSettingsListView *fittingListView;
    QLabel *scriptingLabel;
    aSettingsListView *scriptingListView;
    QSpacerItem *scrollAreaVerticalSpacer;
    QWidget *page_1;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName("SettingsDialog");
        SettingsDialog->resize(400, 300);
        settingGridLayout = new QGridLayout(SettingsDialog);
        settingGridLayout->setObjectName("settingGridLayout");
        headerHorizontalLayout = new QHBoxLayout();
        headerHorizontalLayout->setObjectName("headerHorizontalLayout");
        headerHorizontalLayout->setContentsMargins(2, 2, 2, 2);
        settingsButton = new QPushButton(SettingsDialog);
        settingsButton->setObjectName("settingsButton");
        settingsButton->setFlat(true);

        headerHorizontalLayout->addWidget(settingsButton);

        headerHorizontalSpacer = new QSpacerItem(36, 23, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        headerHorizontalLayout->addItem(headerHorizontalSpacer);


        settingGridLayout->addLayout(headerHorizontalLayout, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(SettingsDialog);
        stackedWidget->setObjectName("stackedWidget");
        page_0 = new QWidget();
        page_0->setObjectName("page_0");
        stackGridLayout = new QGridLayout(page_0);
        stackGridLayout->setObjectName("stackGridLayout");
        scrollArea = new QScrollArea(page_0);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 348, 612));
        scrollVerticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        scrollVerticalLayout->setObjectName("scrollVerticalLayout");
        generalLabel = new QLabel(scrollAreaWidgetContents);
        generalLabel->setObjectName("generalLabel");
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        generalLabel->setFont(font);
        generalLabel->setLayoutDirection(Qt::LeftToRight);

        scrollVerticalLayout->addWidget(generalLabel);

        generalListView = new aSettingsListView(scrollAreaWidgetContents);
        generalListView->setObjectName("generalListView");
        generalListView->setMaximumSize(QSize(16777215, 16777215));
        generalListView->setBaseSize(QSize(0, 0));

        scrollVerticalLayout->addWidget(generalListView);

        tableLabel = new QLabel(scrollAreaWidgetContents);
        tableLabel->setObjectName("tableLabel");
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setKerning(false);
        tableLabel->setFont(font1);

        scrollVerticalLayout->addWidget(tableLabel);

        tableListView = new aSettingsListView(scrollAreaWidgetContents);
        tableListView->setObjectName("tableListView");

        scrollVerticalLayout->addWidget(tableListView);

        plot2dLabel = new QLabel(scrollAreaWidgetContents);
        plot2dLabel->setObjectName("plot2dLabel");
        plot2dLabel->setFont(font);

        scrollVerticalLayout->addWidget(plot2dLabel);

        plot2dListView = new aSettingsListView(scrollAreaWidgetContents);
        plot2dListView->setObjectName("plot2dListView");

        scrollVerticalLayout->addWidget(plot2dListView);

        plot3dLabel = new QLabel(scrollAreaWidgetContents);
        plot3dLabel->setObjectName("plot3dLabel");
        plot3dLabel->setFont(font);

        scrollVerticalLayout->addWidget(plot3dLabel);

        plot3dListView = new aSettingsListView(scrollAreaWidgetContents);
        plot3dListView->setObjectName("plot3dListView");

        scrollVerticalLayout->addWidget(plot3dListView);

        fittingLabel = new QLabel(scrollAreaWidgetContents);
        fittingLabel->setObjectName("fittingLabel");
        fittingLabel->setFont(font);

        scrollVerticalLayout->addWidget(fittingLabel);

        fittingListView = new aSettingsListView(scrollAreaWidgetContents);
        fittingListView->setObjectName("fittingListView");

        scrollVerticalLayout->addWidget(fittingListView);

        scriptingLabel = new QLabel(scrollAreaWidgetContents);
        scriptingLabel->setObjectName("scriptingLabel");
        scriptingLabel->setFont(font);

        scrollVerticalLayout->addWidget(scriptingLabel);

        scriptingListView = new aSettingsListView(scrollAreaWidgetContents);
        scriptingListView->setObjectName("scriptingListView");

        scrollVerticalLayout->addWidget(scriptingListView);

        scrollAreaVerticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        scrollVerticalLayout->addItem(scrollAreaVerticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        stackGridLayout->addWidget(scrollArea, 1, 0, 1, 1);

        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        stackedWidget->addWidget(page_1);

        settingGridLayout->addWidget(stackedWidget, 1, 0, 1, 1);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Dialog", nullptr));
        settingsButton->setText(QCoreApplication::translate("SettingsDialog", "All Settings", nullptr));
        generalLabel->setText(QCoreApplication::translate("SettingsDialog", "General", nullptr));
        tableLabel->setText(QCoreApplication::translate("SettingsDialog", "Table", nullptr));
        plot2dLabel->setText(QCoreApplication::translate("SettingsDialog", "2D Plot", nullptr));
        plot3dLabel->setText(QCoreApplication::translate("SettingsDialog", "3D Plot", nullptr));
        fittingLabel->setText(QCoreApplication::translate("SettingsDialog", "Fitting", nullptr));
        scriptingLabel->setText(QCoreApplication::translate("SettingsDialog", "Scripting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
