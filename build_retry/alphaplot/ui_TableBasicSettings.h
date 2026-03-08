/********************************************************************************
** Form generated from reading UI file 'TableBasicSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEBASICSETTINGS_H
#define UI_TABLEBASICSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableBasicSettings
{
public:
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QCheckBox *commentsCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *columnSeparatorLabel;
    QComboBox *columnSeparatorComboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *rowHeightLabel;
    QSpinBox *rowHeightSpinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *defaultsPushButton;
    QPushButton *resetPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyPushButton;

    void setupUi(QWidget *TableBasicSettings)
    {
        if (TableBasicSettings->objectName().isEmpty())
            TableBasicSettings->setObjectName("TableBasicSettings");
        TableBasicSettings->resize(400, 300);
        verticalLayout_3 = new QVBoxLayout(TableBasicSettings);
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollArea = new QScrollArea(TableBasicSettings);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 380, 247));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(scrollAreaWidgetContents_2);
        titleLabel->setObjectName("titleLabel");

        verticalLayout->addWidget(titleLabel);

        commentsCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        commentsCheckBox->setObjectName("commentsCheckBox");

        verticalLayout->addWidget(commentsCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        columnSeparatorLabel = new QLabel(scrollAreaWidgetContents_2);
        columnSeparatorLabel->setObjectName("columnSeparatorLabel");

        horizontalLayout->addWidget(columnSeparatorLabel);

        columnSeparatorComboBox = new QComboBox(scrollAreaWidgetContents_2);
        columnSeparatorComboBox->setObjectName("columnSeparatorComboBox");

        horizontalLayout->addWidget(columnSeparatorComboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        rowHeightLabel = new QLabel(scrollAreaWidgetContents_2);
        rowHeightLabel->setObjectName("rowHeightLabel");

        horizontalLayout_3->addWidget(rowHeightLabel);

        rowHeightSpinBox = new QSpinBox(scrollAreaWidgetContents_2);
        rowHeightSpinBox->setObjectName("rowHeightSpinBox");

        horizontalLayout_3->addWidget(rowHeightSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        defaultsPushButton = new QPushButton(TableBasicSettings);
        defaultsPushButton->setObjectName("defaultsPushButton");

        horizontalLayout_2->addWidget(defaultsPushButton);

        resetPushButton = new QPushButton(TableBasicSettings);
        resetPushButton->setObjectName("resetPushButton");

        horizontalLayout_2->addWidget(resetPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        applyPushButton = new QPushButton(TableBasicSettings);
        applyPushButton->setObjectName("applyPushButton");

        horizontalLayout_2->addWidget(applyPushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(TableBasicSettings);

        QMetaObject::connectSlotsByName(TableBasicSettings);
    } // setupUi

    void retranslateUi(QWidget *TableBasicSettings)
    {
        TableBasicSettings->setWindowTitle(QCoreApplication::translate("TableBasicSettings", "Form", nullptr));
        titleLabel->setText(QString());
        commentsCheckBox->setText(QCoreApplication::translate("TableBasicSettings", "Display Comments in Header", nullptr));
        columnSeparatorLabel->setText(QCoreApplication::translate("TableBasicSettings", "Default Column Separator", nullptr));
        rowHeightLabel->setText(QCoreApplication::translate("TableBasicSettings", "Table Row Height", nullptr));
        defaultsPushButton->setText(QCoreApplication::translate("TableBasicSettings", "Defaults", nullptr));
        resetPushButton->setText(QCoreApplication::translate("TableBasicSettings", "Reset", nullptr));
        applyPushButton->setText(QCoreApplication::translate("TableBasicSettings", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableBasicSettings: public Ui_TableBasicSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEBASICSETTINGS_H
