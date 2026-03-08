/********************************************************************************
** Form generated from reading UI file 'Function2DDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTION2DDIALOG_H
#define UI_FUNCTION2DDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Function2DDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *functionLabel;
    QComboBox *functionComboBox;
    QStackedWidget *functionStackedWidget;
    QWidget *function_normal;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *normfofxLabel;
    QTextEdit *normfofxTextEdit;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *normfromxLabel;
    QLabel *normtoxLabel;
    QLabel *normpointsLabel;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *normfromxLineEdit;
    QLineEdit *normtoxLineEdit;
    QSpinBox *normpointsSpinBox;
    QWidget *function_parametric;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *paramparameterLabel;
    QLabel *paramfromLabel;
    QLabel *paramtoLabel;
    QLabel *paramxLabel;
    QLabel *paramyLabel;
    QLabel *parampointsLabel;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *paramparameterLineEdit;
    QLineEdit *paramfromLineEdit;
    QLineEdit *paramtoLineEdit;
    QLineEdit *paramxLineEdit;
    QLineEdit *paramyLineEdit;
    QSpinBox *parampointsSpinBox;
    QWidget *function_polar;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *polarparameterLabel;
    QLabel *polarfromLabel;
    QLabel *polartoLabel;
    QLabel *polarxLabel;
    QLabel *polaryLabel;
    QLabel *polarpointsLabel;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *polarparameterLineEdit;
    QLineEdit *polarfromLineEdit;
    QLineEdit *polartoLineEdit;
    QLineEdit *polarxLineEdit;
    QLineEdit *polaryLineEdit;
    QSpinBox *polarpointsSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearfunction_pushButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *dialogButtonBox;

    void setupUi(QDialog *Function2DDialog)
    {
        if (Function2DDialog->objectName().isEmpty())
            Function2DDialog->setObjectName("Function2DDialog");
        Function2DDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(Function2DDialog);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        functionLabel = new QLabel(Function2DDialog);
        functionLabel->setObjectName("functionLabel");

        horizontalLayout_2->addWidget(functionLabel);

        functionComboBox = new QComboBox(Function2DDialog);
        functionComboBox->addItem(QString());
        functionComboBox->addItem(QString());
        functionComboBox->addItem(QString());
        functionComboBox->setObjectName("functionComboBox");

        horizontalLayout_2->addWidget(functionComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        functionStackedWidget = new QStackedWidget(Function2DDialog);
        functionStackedWidget->setObjectName("functionStackedWidget");
        function_normal = new QWidget();
        function_normal->setObjectName("function_normal");
        verticalLayout_4 = new QVBoxLayout(function_normal);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        normfofxLabel = new QLabel(function_normal);
        normfofxLabel->setObjectName("normfofxLabel");
        QFont font;
        font.setItalic(true);
        normfofxLabel->setFont(font);

        horizontalLayout_3->addWidget(normfofxLabel);

        normfofxTextEdit = new QTextEdit(function_normal);
        normfofxTextEdit->setObjectName("normfofxTextEdit");

        horizontalLayout_3->addWidget(normfofxTextEdit);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        normfromxLabel = new QLabel(function_normal);
        normfromxLabel->setObjectName("normfromxLabel");

        verticalLayout_2->addWidget(normfromxLabel);

        normtoxLabel = new QLabel(function_normal);
        normtoxLabel->setObjectName("normtoxLabel");

        verticalLayout_2->addWidget(normtoxLabel);

        normpointsLabel = new QLabel(function_normal);
        normpointsLabel->setObjectName("normpointsLabel");

        verticalLayout_2->addWidget(normpointsLabel);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        normfromxLineEdit = new QLineEdit(function_normal);
        normfromxLineEdit->setObjectName("normfromxLineEdit");

        verticalLayout_3->addWidget(normfromxLineEdit);

        normtoxLineEdit = new QLineEdit(function_normal);
        normtoxLineEdit->setObjectName("normtoxLineEdit");

        verticalLayout_3->addWidget(normtoxLineEdit);

        normpointsSpinBox = new QSpinBox(function_normal);
        normpointsSpinBox->setObjectName("normpointsSpinBox");

        verticalLayout_3->addWidget(normpointsSpinBox);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        functionStackedWidget->addWidget(function_normal);
        function_parametric = new QWidget();
        function_parametric->setObjectName("function_parametric");
        verticalLayout_7 = new QVBoxLayout(function_parametric);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        paramparameterLabel = new QLabel(function_parametric);
        paramparameterLabel->setObjectName("paramparameterLabel");

        verticalLayout_5->addWidget(paramparameterLabel);

        paramfromLabel = new QLabel(function_parametric);
        paramfromLabel->setObjectName("paramfromLabel");

        verticalLayout_5->addWidget(paramfromLabel);

        paramtoLabel = new QLabel(function_parametric);
        paramtoLabel->setObjectName("paramtoLabel");

        verticalLayout_5->addWidget(paramtoLabel);

        paramxLabel = new QLabel(function_parametric);
        paramxLabel->setObjectName("paramxLabel");

        verticalLayout_5->addWidget(paramxLabel);

        paramyLabel = new QLabel(function_parametric);
        paramyLabel->setObjectName("paramyLabel");

        verticalLayout_5->addWidget(paramyLabel);

        parampointsLabel = new QLabel(function_parametric);
        parampointsLabel->setObjectName("parampointsLabel");

        verticalLayout_5->addWidget(parampointsLabel);


        horizontalLayout_5->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        paramparameterLineEdit = new QLineEdit(function_parametric);
        paramparameterLineEdit->setObjectName("paramparameterLineEdit");

        verticalLayout_6->addWidget(paramparameterLineEdit);

        paramfromLineEdit = new QLineEdit(function_parametric);
        paramfromLineEdit->setObjectName("paramfromLineEdit");

        verticalLayout_6->addWidget(paramfromLineEdit);

        paramtoLineEdit = new QLineEdit(function_parametric);
        paramtoLineEdit->setObjectName("paramtoLineEdit");

        verticalLayout_6->addWidget(paramtoLineEdit);

        paramxLineEdit = new QLineEdit(function_parametric);
        paramxLineEdit->setObjectName("paramxLineEdit");

        verticalLayout_6->addWidget(paramxLineEdit);

        paramyLineEdit = new QLineEdit(function_parametric);
        paramyLineEdit->setObjectName("paramyLineEdit");

        verticalLayout_6->addWidget(paramyLineEdit);

        parampointsSpinBox = new QSpinBox(function_parametric);
        parampointsSpinBox->setObjectName("parampointsSpinBox");

        verticalLayout_6->addWidget(parampointsSpinBox);


        horizontalLayout_5->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_5);

        functionStackedWidget->addWidget(function_parametric);
        function_polar = new QWidget();
        function_polar->setObjectName("function_polar");
        verticalLayout_10 = new QVBoxLayout(function_polar);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        polarparameterLabel = new QLabel(function_polar);
        polarparameterLabel->setObjectName("polarparameterLabel");

        verticalLayout_8->addWidget(polarparameterLabel);

        polarfromLabel = new QLabel(function_polar);
        polarfromLabel->setObjectName("polarfromLabel");

        verticalLayout_8->addWidget(polarfromLabel);

        polartoLabel = new QLabel(function_polar);
        polartoLabel->setObjectName("polartoLabel");

        verticalLayout_8->addWidget(polartoLabel);

        polarxLabel = new QLabel(function_polar);
        polarxLabel->setObjectName("polarxLabel");

        verticalLayout_8->addWidget(polarxLabel);

        polaryLabel = new QLabel(function_polar);
        polaryLabel->setObjectName("polaryLabel");

        verticalLayout_8->addWidget(polaryLabel);

        polarpointsLabel = new QLabel(function_polar);
        polarpointsLabel->setObjectName("polarpointsLabel");

        verticalLayout_8->addWidget(polarpointsLabel);


        horizontalLayout_6->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        polarparameterLineEdit = new QLineEdit(function_polar);
        polarparameterLineEdit->setObjectName("polarparameterLineEdit");

        verticalLayout_9->addWidget(polarparameterLineEdit);

        polarfromLineEdit = new QLineEdit(function_polar);
        polarfromLineEdit->setObjectName("polarfromLineEdit");

        verticalLayout_9->addWidget(polarfromLineEdit);

        polartoLineEdit = new QLineEdit(function_polar);
        polartoLineEdit->setObjectName("polartoLineEdit");

        verticalLayout_9->addWidget(polartoLineEdit);

        polarxLineEdit = new QLineEdit(function_polar);
        polarxLineEdit->setObjectName("polarxLineEdit");

        verticalLayout_9->addWidget(polarxLineEdit);

        polaryLineEdit = new QLineEdit(function_polar);
        polaryLineEdit->setObjectName("polaryLineEdit");

        verticalLayout_9->addWidget(polaryLineEdit);

        polarpointsSpinBox = new QSpinBox(function_polar);
        polarpointsSpinBox->setObjectName("polarpointsSpinBox");

        verticalLayout_9->addWidget(polarpointsSpinBox);


        horizontalLayout_6->addLayout(verticalLayout_9);


        verticalLayout_10->addLayout(horizontalLayout_6);

        functionStackedWidget->addWidget(function_polar);

        verticalLayout->addWidget(functionStackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        clearfunction_pushButton = new QPushButton(Function2DDialog);
        clearfunction_pushButton->setObjectName("clearfunction_pushButton");

        horizontalLayout->addWidget(clearfunction_pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        dialogButtonBox = new QDialogButtonBox(Function2DDialog);
        dialogButtonBox->setObjectName("dialogButtonBox");
        dialogButtonBox->setOrientation(Qt::Horizontal);
        dialogButtonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(dialogButtonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Function2DDialog);

        functionStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Function2DDialog);
    } // setupUi

    void retranslateUi(QDialog *Function2DDialog)
    {
        Function2DDialog->setWindowTitle(QCoreApplication::translate("Function2DDialog", "Add Function Curve", nullptr));
        functionLabel->setText(QCoreApplication::translate("Function2DDialog", "Function Type :", nullptr));
        functionComboBox->setItemText(0, QCoreApplication::translate("Function2DDialog", "Normal Function", nullptr));
        functionComboBox->setItemText(1, QCoreApplication::translate("Function2DDialog", "Parametric Function", nullptr));
        functionComboBox->setItemText(2, QCoreApplication::translate("Function2DDialog", "Polar Function", nullptr));

        normfofxLabel->setText(QCoreApplication::translate("Function2DDialog", "f(x)", nullptr));
        normfromxLabel->setText(QCoreApplication::translate("Function2DDialog", "From x", nullptr));
        normtoxLabel->setText(QCoreApplication::translate("Function2DDialog", "To x", nullptr));
        normpointsLabel->setText(QCoreApplication::translate("Function2DDialog", "Points", nullptr));
        paramparameterLabel->setText(QCoreApplication::translate("Function2DDialog", "Parameter", nullptr));
        paramfromLabel->setText(QCoreApplication::translate("Function2DDialog", "From", nullptr));
        paramtoLabel->setText(QCoreApplication::translate("Function2DDialog", "To", nullptr));
        paramxLabel->setText(QCoreApplication::translate("Function2DDialog", "X =", nullptr));
        paramyLabel->setText(QCoreApplication::translate("Function2DDialog", "Y =", nullptr));
        parampointsLabel->setText(QCoreApplication::translate("Function2DDialog", "Points", nullptr));
        polarparameterLabel->setText(QCoreApplication::translate("Function2DDialog", "Parameter", nullptr));
        polarfromLabel->setText(QCoreApplication::translate("Function2DDialog", "From", nullptr));
        polartoLabel->setText(QCoreApplication::translate("Function2DDialog", "To", nullptr));
        polarxLabel->setText(QCoreApplication::translate("Function2DDialog", "R =", nullptr));
        polaryLabel->setText(QCoreApplication::translate("Function2DDialog", "Theta =", nullptr));
        polarpointsLabel->setText(QCoreApplication::translate("Function2DDialog", "Points", nullptr));
        clearfunction_pushButton->setText(QCoreApplication::translate("Function2DDialog", "Clear Function", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Function2DDialog: public Ui_Function2DDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTION2DDIALOG_H
