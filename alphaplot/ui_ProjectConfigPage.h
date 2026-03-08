/********************************************************************************
** Form generated from reading UI file 'ProjectConfigPage.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTCONFIGPAGE_H
#define UI_PROJECTCONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectConfigPage
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *default_subwindow_visibility_label;
    QComboBox *default_subwindow_visibility_combobox;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *ProjectConfigPage)
    {
        if (ProjectConfigPage->objectName().isEmpty())
            ProjectConfigPage->setObjectName("ProjectConfigPage");
        ProjectConfigPage->resize(519, 305);
        vboxLayout = new QVBoxLayout(ProjectConfigPage);
        vboxLayout->setObjectName("vboxLayout");
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        default_subwindow_visibility_label = new QLabel(ProjectConfigPage);
        default_subwindow_visibility_label->setObjectName("default_subwindow_visibility_label");

        hboxLayout->addWidget(default_subwindow_visibility_label);

        default_subwindow_visibility_combobox = new QComboBox(ProjectConfigPage);
        default_subwindow_visibility_combobox->addItem(QString());
        default_subwindow_visibility_combobox->addItem(QString());
        default_subwindow_visibility_combobox->addItem(QString());
        default_subwindow_visibility_combobox->setObjectName("default_subwindow_visibility_combobox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(default_subwindow_visibility_combobox->sizePolicy().hasHeightForWidth());
        default_subwindow_visibility_combobox->setSizePolicy(sizePolicy);
        default_subwindow_visibility_combobox->setMinimumSize(QSize(200, 0));

        hboxLayout->addWidget(default_subwindow_visibility_combobox);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vboxLayout->addItem(spacerItem1);


        retranslateUi(ProjectConfigPage);

        QMetaObject::connectSlotsByName(ProjectConfigPage);
    } // setupUi

    void retranslateUi(QWidget *ProjectConfigPage)
    {
        ProjectConfigPage->setWindowTitle(QCoreApplication::translate("ProjectConfigPage", "Form", nullptr));
        default_subwindow_visibility_label->setText(QCoreApplication::translate("ProjectConfigPage", "By default, show the subwindows ...", nullptr));
        default_subwindow_visibility_combobox->setItemText(0, QCoreApplication::translate("ProjectConfigPage", "in the current folder", nullptr));
        default_subwindow_visibility_combobox->setItemText(1, QCoreApplication::translate("ProjectConfigPage", "in the current folder and its subfolders", nullptr));
        default_subwindow_visibility_combobox->setItemText(2, QCoreApplication::translate("ProjectConfigPage", "all subwindows in the project", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ProjectConfigPage: public Ui_ProjectConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTCONFIGPAGE_H
