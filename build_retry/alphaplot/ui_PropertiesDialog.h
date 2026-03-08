/********************************************************************************
** Form generated from reading UI file 'PropertiesDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESDIALOG_H
#define UI_PROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropertiesDialog
{
public:
    QGridLayout *mainGridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *generalTab;
    QGridLayout *gridLayout;
    QHBoxLayout *mainPropertiesHorizontalLayout;
    QVBoxLayout *captionsVerticalLayout;
    QLabel *typeCaption;
    QLabel *statusCaption;
    QLabel *pathCaption;
    QLabel *sizeCaption;
    QLabel *contentCaption;
    QLabel *dummyLabel;
    QLabel *createdCaption;
    QLabel *modifiedCaption;
    QVBoxLayout *valuesVerticalLayout;
    QLabel *typeValue;
    QLabel *statusValue;
    QLabel *pathValue;
    QLabel *sizeValue;
    QLabel *contentValue1;
    QLabel *contentValue2;
    QLabel *createdValue;
    QLabel *modifiedValue;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *labelVerticalLayout;
    QLabel *labelCaption;
    QPlainTextEdit *labelValue;
    QHBoxLayout *nameHorizontalLayout;
    QLabel *iconLabel;
    QLineEdit *nameLineEdit;
    QFrame *line;
    QWidget *descriptionTab;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *descriptionPlainTextEdit;

    void setupUi(QDialog *PropertiesDialog)
    {
        if (PropertiesDialog->objectName().isEmpty())
            PropertiesDialog->setObjectName("PropertiesDialog");
        PropertiesDialog->resize(422, 490);
        mainGridLayout = new QGridLayout(PropertiesDialog);
        mainGridLayout->setObjectName("mainGridLayout");
        buttonBox = new QDialogButtonBox(PropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        mainGridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        tabWidget = new QTabWidget(PropertiesDialog);
        tabWidget->setObjectName("tabWidget");
        generalTab = new QWidget();
        generalTab->setObjectName("generalTab");
        gridLayout = new QGridLayout(generalTab);
        gridLayout->setObjectName("gridLayout");
        mainPropertiesHorizontalLayout = new QHBoxLayout();
        mainPropertiesHorizontalLayout->setObjectName("mainPropertiesHorizontalLayout");
        mainPropertiesHorizontalLayout->setContentsMargins(40, 10, -1, 10);
        captionsVerticalLayout = new QVBoxLayout();
        captionsVerticalLayout->setObjectName("captionsVerticalLayout");
        typeCaption = new QLabel(generalTab);
        typeCaption->setObjectName("typeCaption");
        typeCaption->setLayoutDirection(Qt::RightToLeft);

        captionsVerticalLayout->addWidget(typeCaption);

        statusCaption = new QLabel(generalTab);
        statusCaption->setObjectName("statusCaption");
        statusCaption->setLayoutDirection(Qt::RightToLeft);

        captionsVerticalLayout->addWidget(statusCaption);

        pathCaption = new QLabel(generalTab);
        pathCaption->setObjectName("pathCaption");
        pathCaption->setLayoutDirection(Qt::RightToLeft);

        captionsVerticalLayout->addWidget(pathCaption);

        sizeCaption = new QLabel(generalTab);
        sizeCaption->setObjectName("sizeCaption");
        sizeCaption->setLayoutDirection(Qt::RightToLeft);

        captionsVerticalLayout->addWidget(sizeCaption);

        contentCaption = new QLabel(generalTab);
        contentCaption->setObjectName("contentCaption");
        contentCaption->setLayoutDirection(Qt::RightToLeft);

        captionsVerticalLayout->addWidget(contentCaption);

        dummyLabel = new QLabel(generalTab);
        dummyLabel->setObjectName("dummyLabel");

        captionsVerticalLayout->addWidget(dummyLabel);

        createdCaption = new QLabel(generalTab);
        createdCaption->setObjectName("createdCaption");
        createdCaption->setLayoutDirection(Qt::RightToLeft);

        captionsVerticalLayout->addWidget(createdCaption);

        modifiedCaption = new QLabel(generalTab);
        modifiedCaption->setObjectName("modifiedCaption");
        modifiedCaption->setLayoutDirection(Qt::RightToLeft);

        captionsVerticalLayout->addWidget(modifiedCaption);


        mainPropertiesHorizontalLayout->addLayout(captionsVerticalLayout);

        valuesVerticalLayout = new QVBoxLayout();
        valuesVerticalLayout->setObjectName("valuesVerticalLayout");
        typeValue = new QLabel(generalTab);
        typeValue->setObjectName("typeValue");

        valuesVerticalLayout->addWidget(typeValue);

        statusValue = new QLabel(generalTab);
        statusValue->setObjectName("statusValue");

        valuesVerticalLayout->addWidget(statusValue);

        pathValue = new QLabel(generalTab);
        pathValue->setObjectName("pathValue");

        valuesVerticalLayout->addWidget(pathValue);

        sizeValue = new QLabel(generalTab);
        sizeValue->setObjectName("sizeValue");

        valuesVerticalLayout->addWidget(sizeValue);

        contentValue1 = new QLabel(generalTab);
        contentValue1->setObjectName("contentValue1");

        valuesVerticalLayout->addWidget(contentValue1);

        contentValue2 = new QLabel(generalTab);
        contentValue2->setObjectName("contentValue2");

        valuesVerticalLayout->addWidget(contentValue2);

        createdValue = new QLabel(generalTab);
        createdValue->setObjectName("createdValue");

        valuesVerticalLayout->addWidget(createdValue);

        modifiedValue = new QLabel(generalTab);
        modifiedValue->setObjectName("modifiedValue");

        valuesVerticalLayout->addWidget(modifiedValue);


        mainPropertiesHorizontalLayout->addLayout(valuesVerticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        mainPropertiesHorizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(mainPropertiesHorizontalLayout, 2, 0, 1, 1);

        labelVerticalLayout = new QVBoxLayout();
        labelVerticalLayout->setObjectName("labelVerticalLayout");
        labelCaption = new QLabel(generalTab);
        labelCaption->setObjectName("labelCaption");

        labelVerticalLayout->addWidget(labelCaption);

        labelValue = new QPlainTextEdit(generalTab);
        labelValue->setObjectName("labelValue");
        labelValue->setReadOnly(true);

        labelVerticalLayout->addWidget(labelValue);


        gridLayout->addLayout(labelVerticalLayout, 3, 0, 1, 1);

        nameHorizontalLayout = new QHBoxLayout();
        nameHorizontalLayout->setSpacing(24);
        nameHorizontalLayout->setObjectName("nameHorizontalLayout");
        nameHorizontalLayout->setContentsMargins(-1, -1, -1, 10);
        iconLabel = new QLabel(generalTab);
        iconLabel->setObjectName("iconLabel");
        iconLabel->setMinimumSize(QSize(64, 64));
        iconLabel->setMaximumSize(QSize(64, 64));
        iconLabel->setFrameShape(QFrame::NoFrame);
        iconLabel->setFrameShadow(QFrame::Plain);

        nameHorizontalLayout->addWidget(iconLabel);

        nameLineEdit = new QLineEdit(generalTab);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setReadOnly(true);

        nameHorizontalLayout->addWidget(nameLineEdit);


        gridLayout->addLayout(nameHorizontalLayout, 0, 0, 1, 1);

        line = new QFrame(generalTab);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);

        tabWidget->addTab(generalTab, QString());
        descriptionTab = new QWidget();
        descriptionTab->setObjectName("descriptionTab");
        gridLayout_2 = new QGridLayout(descriptionTab);
        gridLayout_2->setObjectName("gridLayout_2");
        descriptionPlainTextEdit = new QPlainTextEdit(descriptionTab);
        descriptionPlainTextEdit->setObjectName("descriptionPlainTextEdit");

        gridLayout_2->addWidget(descriptionPlainTextEdit, 0, 0, 1, 1);

        tabWidget->addTab(descriptionTab, QString());

        mainGridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(PropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PropertiesDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *PropertiesDialog)
    {
        PropertiesDialog->setWindowTitle(QCoreApplication::translate("PropertiesDialog", "properties", nullptr));
        typeCaption->setText(QCoreApplication::translate("PropertiesDialog", "Type :", nullptr));
        statusCaption->setText(QCoreApplication::translate("PropertiesDialog", "Status :", nullptr));
        pathCaption->setText(QCoreApplication::translate("PropertiesDialog", "Path :", nullptr));
        sizeCaption->setText(QCoreApplication::translate("PropertiesDialog", "Size :", nullptr));
        contentCaption->setText(QCoreApplication::translate("PropertiesDialog", "Contents :", nullptr));
        dummyLabel->setText(QString());
        createdCaption->setText(QCoreApplication::translate("PropertiesDialog", "Created :", nullptr));
        modifiedCaption->setText(QCoreApplication::translate("PropertiesDialog", "Modified :", nullptr));
        typeValue->setText(QCoreApplication::translate("PropertiesDialog", "TextLabel", nullptr));
        statusValue->setText(QCoreApplication::translate("PropertiesDialog", "TextLabel", nullptr));
        pathValue->setText(QCoreApplication::translate("PropertiesDialog", "TextLabel", nullptr));
        sizeValue->setText(QCoreApplication::translate("PropertiesDialog", "TextLabel", nullptr));
        contentValue1->setText(QCoreApplication::translate("PropertiesDialog", "TextLabel", nullptr));
        contentValue2->setText(QCoreApplication::translate("PropertiesDialog", "TextLabel", nullptr));
        createdValue->setText(QCoreApplication::translate("PropertiesDialog", "TextLabel", nullptr));
        modifiedValue->setText(QCoreApplication::translate("PropertiesDialog", "TextLabel", nullptr));
        labelCaption->setText(QCoreApplication::translate("PropertiesDialog", "Label", nullptr));
        iconLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(generalTab), QCoreApplication::translate("PropertiesDialog", "General", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(descriptionTab), QCoreApplication::translate("PropertiesDialog", "Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertiesDialog: public Ui_PropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESDIALOG_H
