/********************************************************************************
** Form generated from reading UI file 'propertyeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYEDITOR_H
#define UI_PROPERTYEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropertyEditor
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;

    void setupUi(QDockWidget *PropertyEditor)
    {
        if (PropertyEditor->objectName().isEmpty())
            PropertyEditor->setObjectName("PropertyEditor");
        PropertyEditor->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        PropertyEditor->setWidget(dockWidgetContents);

        retranslateUi(PropertyEditor);

        QMetaObject::connectSlotsByName(PropertyEditor);
    } // setupUi

    void retranslateUi(QDockWidget *PropertyEditor)
    {
        PropertyEditor->setWindowTitle(QCoreApplication::translate("PropertyEditor", "Property Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertyEditor: public Ui_PropertyEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYEDITOR_H
