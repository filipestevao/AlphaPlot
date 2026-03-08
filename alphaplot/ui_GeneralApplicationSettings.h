/********************************************************************************
** Form generated from reading UI file 'GeneralApplicationSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALAPPLICATIONSETTINGS_H
#define UI_GENERALAPPLICATIONSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../widgets/ColorLabel.h"

QT_BEGIN_NAMESPACE

class Ui_ApplicationSettingsPage
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *glowIndicatorGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *glowColorTextLabel;
    QSpacerItem *horizontalSpacer_7;
    ColorLabel *glowColorLabel;
    QToolButton *glowColorButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *glowThicknessTextLabel;
    QSpacerItem *horizontalSpacer_8;
    QSpinBox *glowThicknessSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *fontLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *fontvalueLabel;
    QToolButton *fontToolButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *languageLabel;
    QComboBox *languageComboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *scriptingLabel;
    QComboBox *scriptingComboBox;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *saveCheckBox;
    QSpinBox *saveSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *undoLabel;
    QSpinBox *undoSpinBox;
    QCheckBox *versionCheckBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *defaultsPushButton;
    QPushButton *resetPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyPushButton;
    QLabel *titleLabel;

    void setupUi(QWidget *ApplicationSettingsPage)
    {
        if (ApplicationSettingsPage->objectName().isEmpty())
            ApplicationSettingsPage->setObjectName("ApplicationSettingsPage");
        ApplicationSettingsPage->resize(397, 404);
        gridLayout = new QGridLayout(ApplicationSettingsPage);
        gridLayout->setObjectName("gridLayout");
        scrollArea = new QScrollArea(ApplicationSettingsPage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 377, 328));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        glowIndicatorGroupBox = new QGroupBox(scrollAreaWidgetContents);
        glowIndicatorGroupBox->setObjectName("glowIndicatorGroupBox");
        verticalLayout_2 = new QVBoxLayout(glowIndicatorGroupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        glowColorTextLabel = new QLabel(glowIndicatorGroupBox);
        glowColorTextLabel->setObjectName("glowColorTextLabel");

        horizontalLayout_7->addWidget(glowColorTextLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        glowColorLabel = new ColorLabel(glowIndicatorGroupBox);
        glowColorLabel->setObjectName("glowColorLabel");

        horizontalLayout_7->addWidget(glowColorLabel);

        glowColorButton = new QToolButton(glowIndicatorGroupBox);
        glowColorButton->setObjectName("glowColorButton");

        horizontalLayout_7->addWidget(glowColorButton);


        horizontalLayout_9->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        glowThicknessTextLabel = new QLabel(glowIndicatorGroupBox);
        glowThicknessTextLabel->setObjectName("glowThicknessTextLabel");

        horizontalLayout_8->addWidget(glowThicknessTextLabel);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        glowThicknessSpinBox = new QSpinBox(glowIndicatorGroupBox);
        glowThicknessSpinBox->setObjectName("glowThicknessSpinBox");

        horizontalLayout_8->addWidget(glowThicknessSpinBox);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout->addWidget(glowIndicatorGroupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        fontLabel = new QLabel(scrollAreaWidgetContents);
        fontLabel->setObjectName("fontLabel");

        horizontalLayout_3->addWidget(fontLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        fontvalueLabel = new QLabel(scrollAreaWidgetContents);
        fontvalueLabel->setObjectName("fontvalueLabel");

        horizontalLayout_3->addWidget(fontvalueLabel);

        fontToolButton = new QToolButton(scrollAreaWidgetContents);
        fontToolButton->setObjectName("fontToolButton");

        horizontalLayout_3->addWidget(fontToolButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        languageLabel = new QLabel(scrollAreaWidgetContents);
        languageLabel->setObjectName("languageLabel");

        horizontalLayout_2->addWidget(languageLabel);

        languageComboBox = new QComboBox(scrollAreaWidgetContents);
        languageComboBox->setObjectName("languageComboBox");

        horizontalLayout_2->addWidget(languageComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        scriptingLabel = new QLabel(scrollAreaWidgetContents);
        scriptingLabel->setObjectName("scriptingLabel");

        horizontalLayout_4->addWidget(scriptingLabel);

        scriptingComboBox = new QComboBox(scrollAreaWidgetContents);
        scriptingComboBox->setObjectName("scriptingComboBox");

        horizontalLayout_4->addWidget(scriptingComboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        saveCheckBox = new QCheckBox(scrollAreaWidgetContents);
        saveCheckBox->setObjectName("saveCheckBox");

        horizontalLayout_5->addWidget(saveCheckBox);

        saveSpinBox = new QSpinBox(scrollAreaWidgetContents);
        saveSpinBox->setObjectName("saveSpinBox");

        horizontalLayout_5->addWidget(saveSpinBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        undoLabel = new QLabel(scrollAreaWidgetContents);
        undoLabel->setObjectName("undoLabel");

        horizontalLayout_6->addWidget(undoLabel);

        undoSpinBox = new QSpinBox(scrollAreaWidgetContents);
        undoSpinBox->setObjectName("undoSpinBox");

        horizontalLayout_6->addWidget(undoSpinBox);


        verticalLayout->addLayout(horizontalLayout_6);

        versionCheckBox = new QCheckBox(scrollAreaWidgetContents);
        versionCheckBox->setObjectName("versionCheckBox");

        verticalLayout->addWidget(versionCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        defaultsPushButton = new QPushButton(ApplicationSettingsPage);
        defaultsPushButton->setObjectName("defaultsPushButton");

        horizontalLayout->addWidget(defaultsPushButton);

        resetPushButton = new QPushButton(ApplicationSettingsPage);
        resetPushButton->setObjectName("resetPushButton");

        horizontalLayout->addWidget(resetPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        applyPushButton = new QPushButton(ApplicationSettingsPage);
        applyPushButton->setObjectName("applyPushButton");

        horizontalLayout->addWidget(applyPushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        titleLabel = new QLabel(ApplicationSettingsPage);
        titleLabel->setObjectName("titleLabel");

        gridLayout->addWidget(titleLabel, 0, 0, 1, 1);


        retranslateUi(ApplicationSettingsPage);

        QMetaObject::connectSlotsByName(ApplicationSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *ApplicationSettingsPage)
    {
        ApplicationSettingsPage->setWindowTitle(QCoreApplication::translate("ApplicationSettingsPage", "Form", nullptr));
        glowIndicatorGroupBox->setTitle(QCoreApplication::translate("ApplicationSettingsPage", "Glow Indicator", nullptr));
        glowColorTextLabel->setText(QCoreApplication::translate("ApplicationSettingsPage", "Glow Color", nullptr));
        glowColorLabel->setText(QString());
        glowColorButton->setText(QCoreApplication::translate("ApplicationSettingsPage", "...", nullptr));
        glowThicknessTextLabel->setText(QCoreApplication::translate("ApplicationSettingsPage", "Glow Thickness", nullptr));
        fontLabel->setText(QCoreApplication::translate("ApplicationSettingsPage", "Main Font", nullptr));
        fontvalueLabel->setText(QCoreApplication::translate("ApplicationSettingsPage", "TextLabel", nullptr));
        fontToolButton->setText(QCoreApplication::translate("ApplicationSettingsPage", "...", nullptr));
        languageLabel->setText(QCoreApplication::translate("ApplicationSettingsPage", "Language", nullptr));
        scriptingLabel->setText(QCoreApplication::translate("ApplicationSettingsPage", "Default Scripting Language", nullptr));
        saveCheckBox->setText(QCoreApplication::translate("ApplicationSettingsPage", "Save Every", nullptr));
        undoLabel->setText(QCoreApplication::translate("ApplicationSettingsPage", "Undo/Redo History Limit", nullptr));
        versionCheckBox->setText(QCoreApplication::translate("ApplicationSettingsPage", "Check for new versions at startup", nullptr));
        defaultsPushButton->setText(QCoreApplication::translate("ApplicationSettingsPage", "Default", nullptr));
        resetPushButton->setText(QCoreApplication::translate("ApplicationSettingsPage", "Reset", nullptr));
        applyPushButton->setText(QCoreApplication::translate("ApplicationSettingsPage", "Apply", nullptr));
        titleLabel->setText(QCoreApplication::translate("ApplicationSettingsPage", "General", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApplicationSettingsPage: public Ui_ApplicationSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALAPPLICATIONSETTINGS_H
