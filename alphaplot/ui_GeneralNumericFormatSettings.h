/********************************************************************************
** Form generated from reading UI file 'GeneralNumericFormatSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALNUMERICFORMATSETTINGS_H
#define UI_GENERALNUMERICFORMATSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneralNumericFormatSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *defaultNumberLabel;
    QSpinBox *defaultNumberSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *decimalSeparatorLabel;
    QComboBox *decimalSeparatorComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *numberFormatLabel;
    QComboBox *numberFormatComboBox;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *groupSeparatorCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *groupSeparatorLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *defaultsPushButton;
    QPushButton *resetPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyPushButton;

    void setupUi(QWidget *GeneralNumericFormatSettings)
    {
        if (GeneralNumericFormatSettings->objectName().isEmpty())
            GeneralNumericFormatSettings->setObjectName("GeneralNumericFormatSettings");
        GeneralNumericFormatSettings->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(GeneralNumericFormatSettings);
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea = new QScrollArea(GeneralNumericFormatSettings);
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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        defaultNumberLabel = new QLabel(scrollAreaWidgetContents_2);
        defaultNumberLabel->setObjectName("defaultNumberLabel");

        horizontalLayout->addWidget(defaultNumberLabel);

        defaultNumberSpinBox = new QSpinBox(scrollAreaWidgetContents_2);
        defaultNumberSpinBox->setObjectName("defaultNumberSpinBox");

        horizontalLayout->addWidget(defaultNumberSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        decimalSeparatorLabel = new QLabel(scrollAreaWidgetContents_2);
        decimalSeparatorLabel->setObjectName("decimalSeparatorLabel");

        horizontalLayout_3->addWidget(decimalSeparatorLabel);

        decimalSeparatorComboBox = new QComboBox(scrollAreaWidgetContents_2);
        decimalSeparatorComboBox->setObjectName("decimalSeparatorComboBox");

        horizontalLayout_3->addWidget(decimalSeparatorComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        numberFormatLabel = new QLabel(scrollAreaWidgetContents_2);
        numberFormatLabel->setObjectName("numberFormatLabel");

        horizontalLayout_5->addWidget(numberFormatLabel);

        numberFormatComboBox = new QComboBox(scrollAreaWidgetContents_2);
        numberFormatComboBox->setObjectName("numberFormatComboBox");

        horizontalLayout_5->addWidget(numberFormatComboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupSeparatorCheckBox = new QCheckBox(scrollAreaWidgetContents_2);
        groupSeparatorCheckBox->setObjectName("groupSeparatorCheckBox");

        horizontalLayout_4->addWidget(groupSeparatorCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        groupSeparatorLineEdit = new QLineEdit(scrollAreaWidgetContents_2);
        groupSeparatorLineEdit->setObjectName("groupSeparatorLineEdit");

        horizontalLayout_4->addWidget(groupSeparatorLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        defaultsPushButton = new QPushButton(GeneralNumericFormatSettings);
        defaultsPushButton->setObjectName("defaultsPushButton");

        horizontalLayout_2->addWidget(defaultsPushButton);

        resetPushButton = new QPushButton(GeneralNumericFormatSettings);
        resetPushButton->setObjectName("resetPushButton");

        horizontalLayout_2->addWidget(resetPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        applyPushButton = new QPushButton(GeneralNumericFormatSettings);
        applyPushButton->setObjectName("applyPushButton");

        horizontalLayout_2->addWidget(applyPushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(GeneralNumericFormatSettings);

        QMetaObject::connectSlotsByName(GeneralNumericFormatSettings);
    } // setupUi

    void retranslateUi(QWidget *GeneralNumericFormatSettings)
    {
        GeneralNumericFormatSettings->setWindowTitle(QCoreApplication::translate("GeneralNumericFormatSettings", "Form", nullptr));
        titleLabel->setText(QString());
        defaultNumberLabel->setText(QCoreApplication::translate("GeneralNumericFormatSettings", "Default Number of Decimal Digits", nullptr));
        decimalSeparatorLabel->setText(QCoreApplication::translate("GeneralNumericFormatSettings", "Decimal Separators", nullptr));
        numberFormatLabel->setText(QCoreApplication::translate("GeneralNumericFormatSettings", "Default Numeric Format", nullptr));
        groupSeparatorCheckBox->setText(QCoreApplication::translate("GeneralNumericFormatSettings", "Use Group Separators", nullptr));
        defaultsPushButton->setText(QCoreApplication::translate("GeneralNumericFormatSettings", "Defaults", nullptr));
        resetPushButton->setText(QCoreApplication::translate("GeneralNumericFormatSettings", "Reset", nullptr));
        applyPushButton->setText(QCoreApplication::translate("GeneralNumericFormatSettings", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeneralNumericFormatSettings: public Ui_GeneralNumericFormatSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALNUMERICFORMATSETTINGS_H
