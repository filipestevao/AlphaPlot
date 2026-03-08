/********************************************************************************
** Form generated from reading UI file 'SwapLayout2DDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWAPLAYOUT2DDIALOG_H
#define UI_SWAPLAYOUT2DDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SwapLayout2DDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *swap1comboBox;
    QLabel *swaplabel;
    QComboBox *swap2comboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SwapLayout2DDialog)
    {
        if (SwapLayout2DDialog->objectName().isEmpty())
            SwapLayout2DDialog->setObjectName("SwapLayout2DDialog");
        SwapLayout2DDialog->resize(172, 61);
        verticalLayout = new QVBoxLayout(SwapLayout2DDialog);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        swap1comboBox = new QComboBox(SwapLayout2DDialog);
        swap1comboBox->setObjectName("swap1comboBox");

        horizontalLayout->addWidget(swap1comboBox);

        swaplabel = new QLabel(SwapLayout2DDialog);
        swaplabel->setObjectName("swaplabel");

        horizontalLayout->addWidget(swaplabel);

        swap2comboBox = new QComboBox(SwapLayout2DDialog);
        swap2comboBox->setObjectName("swap2comboBox");

        horizontalLayout->addWidget(swap2comboBox);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(SwapLayout2DDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SwapLayout2DDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SwapLayout2DDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SwapLayout2DDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SwapLayout2DDialog);
    } // setupUi

    void retranslateUi(QDialog *SwapLayout2DDialog)
    {
        SwapLayout2DDialog->setWindowTitle(QCoreApplication::translate("SwapLayout2DDialog", "Dialog", nullptr));
        swaplabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SwapLayout2DDialog: public Ui_SwapLayout2DDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWAPLAYOUT2DDIALOG_H
