/********************************************************************************
** Form generated from reading UI file 'CustomCharacterDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMCHARACTERDIALOG_H
#define UI_CUSTOMCHARACTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CustomCharacterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CustomCharacterDialog)
    {
        if (CustomCharacterDialog->objectName().isEmpty())
            CustomCharacterDialog->setObjectName("CustomCharacterDialog");
        CustomCharacterDialog->resize(253, 76);
        verticalLayout = new QVBoxLayout(CustomCharacterDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(CustomCharacterDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(CustomCharacterDialog);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(CustomCharacterDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CustomCharacterDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CustomCharacterDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CustomCharacterDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CustomCharacterDialog);
    } // setupUi

    void retranslateUi(QDialog *CustomCharacterDialog)
    {
        CustomCharacterDialog->setWindowTitle(QCoreApplication::translate("CustomCharacterDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CustomCharacterDialog", "Character HEX value: 0x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomCharacterDialog: public Ui_CustomCharacterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMCHARACTERDIALOG_H
