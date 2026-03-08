/********************************************************************************
** Form generated from reading UI file 'TableFontSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEFONTSETTINGS_H
#define UI_TABLEFONTSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableFontSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *textfontLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *textfontvalueLabel;
    QToolButton *textfontToolButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelfontLabel;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelfontvalueLabel;
    QToolButton *labelfontToolButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *defaultsPushButton;
    QPushButton *resetPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyPushButton;

    void setupUi(QWidget *TableFontSettings)
    {
        if (TableFontSettings->objectName().isEmpty())
            TableFontSettings->setObjectName("TableFontSettings");
        TableFontSettings->resize(400, 319);
        verticalLayout_2 = new QVBoxLayout(TableFontSettings);
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea = new QScrollArea(TableFontSettings);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 380, 266));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(scrollAreaWidgetContents_2);
        titleLabel->setObjectName("titleLabel");

        verticalLayout->addWidget(titleLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        textfontLabel = new QLabel(scrollAreaWidgetContents_2);
        textfontLabel->setObjectName("textfontLabel");

        horizontalLayout_3->addWidget(textfontLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        textfontvalueLabel = new QLabel(scrollAreaWidgetContents_2);
        textfontvalueLabel->setObjectName("textfontvalueLabel");

        horizontalLayout_3->addWidget(textfontvalueLabel);

        textfontToolButton = new QToolButton(scrollAreaWidgetContents_2);
        textfontToolButton->setObjectName("textfontToolButton");

        horizontalLayout_3->addWidget(textfontToolButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelfontLabel = new QLabel(scrollAreaWidgetContents_2);
        labelfontLabel->setObjectName("labelfontLabel");

        horizontalLayout_4->addWidget(labelfontLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        labelfontvalueLabel = new QLabel(scrollAreaWidgetContents_2);
        labelfontvalueLabel->setObjectName("labelfontvalueLabel");

        horizontalLayout_4->addWidget(labelfontvalueLabel);

        labelfontToolButton = new QToolButton(scrollAreaWidgetContents_2);
        labelfontToolButton->setObjectName("labelfontToolButton");

        horizontalLayout_4->addWidget(labelfontToolButton);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        defaultsPushButton = new QPushButton(TableFontSettings);
        defaultsPushButton->setObjectName("defaultsPushButton");

        horizontalLayout_2->addWidget(defaultsPushButton);

        resetPushButton = new QPushButton(TableFontSettings);
        resetPushButton->setObjectName("resetPushButton");

        horizontalLayout_2->addWidget(resetPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        applyPushButton = new QPushButton(TableFontSettings);
        applyPushButton->setObjectName("applyPushButton");

        horizontalLayout_2->addWidget(applyPushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(TableFontSettings);

        QMetaObject::connectSlotsByName(TableFontSettings);
    } // setupUi

    void retranslateUi(QWidget *TableFontSettings)
    {
        TableFontSettings->setWindowTitle(QCoreApplication::translate("TableFontSettings", "Form", nullptr));
        titleLabel->setText(QString());
        textfontLabel->setText(QCoreApplication::translate("TableFontSettings", "Text Font", nullptr));
        textfontvalueLabel->setText(QCoreApplication::translate("TableFontSettings", "TextLabel", nullptr));
        textfontToolButton->setText(QCoreApplication::translate("TableFontSettings", "...", nullptr));
        labelfontLabel->setText(QCoreApplication::translate("TableFontSettings", "Label Font", nullptr));
        labelfontvalueLabel->setText(QCoreApplication::translate("TableFontSettings", "TextLabel", nullptr));
        labelfontToolButton->setText(QCoreApplication::translate("TableFontSettings", "...", nullptr));
        defaultsPushButton->setText(QCoreApplication::translate("TableFontSettings", "Defaults", nullptr));
        resetPushButton->setText(QCoreApplication::translate("TableFontSettings", "Reset", nullptr));
        applyPushButton->setText(QCoreApplication::translate("TableFontSettings", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableFontSettings: public Ui_TableFontSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEFONTSETTINGS_H
