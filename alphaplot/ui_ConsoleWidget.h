/********************************************************************************
** Form generated from reading UI file 'ConsoleWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLEWIDGET_H
#define UI_CONSOLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "scripting/widgets/Console.h"

QT_BEGIN_NAMESPACE

class Ui_ConsoleWidget
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    Console *console;
    QTableView *tableView;

    void setupUi(QDockWidget *ConsoleWidget)
    {
        if (ConsoleWidget->objectName().isEmpty())
            ConsoleWidget->setObjectName("ConsoleWidget");
        ConsoleWidget->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName("gridLayout");
        splitter = new QSplitter(dockWidgetContents);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        console = new Console(splitter);
        console->setObjectName("console");
        splitter->addWidget(console);
        tableView = new QTableView(splitter);
        tableView->setObjectName("tableView");
        splitter->addWidget(tableView);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        ConsoleWidget->setWidget(dockWidgetContents);

        retranslateUi(ConsoleWidget);

        QMetaObject::connectSlotsByName(ConsoleWidget);
    } // setupUi

    void retranslateUi(QDockWidget *ConsoleWidget)
    {
        ConsoleWidget->setWindowTitle(QCoreApplication::translate("ConsoleWidget", "Scripting &Console", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsoleWidget: public Ui_ConsoleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEWIDGET_H
