/********************************************************************************
** Form generated from reading UI file 'GeneralConfirmationSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALCONFIRMATIONSETTINGS_H
#define UI_GENERALCONFIRMATIONSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneralConfirmationSettings
{
public:
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *foldersCheckBox;
    QCheckBox *tablesCheckBox;
    QCheckBox *matricesCheckBox;
    QCheckBox *notesCheckBox;
    QCheckBox *plot2dCheckBox;
    QCheckBox *plot3dCheckBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *defaultsPushButton;
    QPushButton *resetPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyPushButton;

    void setupUi(QWidget *GeneralConfirmationSettings)
    {
        if (GeneralConfirmationSettings->objectName().isEmpty())
            GeneralConfirmationSettings->setObjectName("GeneralConfirmationSettings");
        GeneralConfirmationSettings->resize(411, 313);
        verticalLayout_3 = new QVBoxLayout(GeneralConfirmationSettings);
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollArea = new QScrollArea(GeneralConfirmationSettings);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 391, 260));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        titleLabel = new QLabel(scrollAreaWidgetContents_2);
        titleLabel->setObjectName("titleLabel");

        verticalLayout_2->addWidget(titleLabel);

        groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        foldersCheckBox = new QCheckBox(groupBox);
        foldersCheckBox->setObjectName("foldersCheckBox");

        verticalLayout->addWidget(foldersCheckBox);

        tablesCheckBox = new QCheckBox(groupBox);
        tablesCheckBox->setObjectName("tablesCheckBox");

        verticalLayout->addWidget(tablesCheckBox);

        matricesCheckBox = new QCheckBox(groupBox);
        matricesCheckBox->setObjectName("matricesCheckBox");

        verticalLayout->addWidget(matricesCheckBox);

        notesCheckBox = new QCheckBox(groupBox);
        notesCheckBox->setObjectName("notesCheckBox");

        verticalLayout->addWidget(notesCheckBox);

        plot2dCheckBox = new QCheckBox(groupBox);
        plot2dCheckBox->setObjectName("plot2dCheckBox");

        verticalLayout->addWidget(plot2dCheckBox);

        plot3dCheckBox = new QCheckBox(groupBox);
        plot3dCheckBox->setObjectName("plot3dCheckBox");

        verticalLayout->addWidget(plot3dCheckBox);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        defaultsPushButton = new QPushButton(GeneralConfirmationSettings);
        defaultsPushButton->setObjectName("defaultsPushButton");

        horizontalLayout_2->addWidget(defaultsPushButton);

        resetPushButton = new QPushButton(GeneralConfirmationSettings);
        resetPushButton->setObjectName("resetPushButton");

        horizontalLayout_2->addWidget(resetPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        applyPushButton = new QPushButton(GeneralConfirmationSettings);
        applyPushButton->setObjectName("applyPushButton");

        horizontalLayout_2->addWidget(applyPushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(GeneralConfirmationSettings);

        QMetaObject::connectSlotsByName(GeneralConfirmationSettings);
    } // setupUi

    void retranslateUi(QWidget *GeneralConfirmationSettings)
    {
        GeneralConfirmationSettings->setWindowTitle(QCoreApplication::translate("GeneralConfirmationSettings", "Form", nullptr));
        titleLabel->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("GeneralConfirmationSettings", "Confirmations", nullptr));
        foldersCheckBox->setText(QCoreApplication::translate("GeneralConfirmationSettings", "Folders", nullptr));
        tablesCheckBox->setText(QCoreApplication::translate("GeneralConfirmationSettings", "Tables", nullptr));
        matricesCheckBox->setText(QCoreApplication::translate("GeneralConfirmationSettings", "Matrices", nullptr));
        notesCheckBox->setText(QCoreApplication::translate("GeneralConfirmationSettings", "Notes", nullptr));
        plot2dCheckBox->setText(QCoreApplication::translate("GeneralConfirmationSettings", "2D Plots", nullptr));
        plot3dCheckBox->setText(QCoreApplication::translate("GeneralConfirmationSettings", "3D Plots", nullptr));
        defaultsPushButton->setText(QCoreApplication::translate("GeneralConfirmationSettings", "Defaults", nullptr));
        resetPushButton->setText(QCoreApplication::translate("GeneralConfirmationSettings", "Reset", nullptr));
        applyPushButton->setText(QCoreApplication::translate("GeneralConfirmationSettings", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeneralConfirmationSettings: public Ui_GeneralConfirmationSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALCONFIRMATIONSETTINGS_H
