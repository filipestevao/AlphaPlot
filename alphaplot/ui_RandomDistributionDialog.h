/********************************************************************************
** Form generated from reading UI file 'RandomDistributionDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDOMDISTRIBUTIONDIALOG_H
#define UI_RANDOMDISTRIBUTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RandomDistributionDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *randomDistributionButtonBox;
    QGroupBox *RandomDistributionGroupBox;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *distributionLabel;
    QComboBox *distComboBox;
    QLabel *distFormulaLabel;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *parameter1Label;
    QLabel *parameter2Label;
    QLabel *parameter3Label;
    QVBoxLayout *verticalLayout_2;
    QDoubleSpinBox *parameter1DbleSpinBox;
    QDoubleSpinBox *parameter2DbleSpinBox;
    QDoubleSpinBox *parameter3DbleSpinBox;

    void setupUi(QDialog *RandomDistributionDialog)
    {
        if (RandomDistributionDialog->objectName().isEmpty())
            RandomDistributionDialog->setObjectName("RandomDistributionDialog");
        RandomDistributionDialog->resize(400, 244);
        gridLayout = new QGridLayout(RandomDistributionDialog);
        gridLayout->setObjectName("gridLayout");
        randomDistributionButtonBox = new QDialogButtonBox(RandomDistributionDialog);
        randomDistributionButtonBox->setObjectName("randomDistributionButtonBox");
        randomDistributionButtonBox->setOrientation(Qt::Horizontal);
        randomDistributionButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(randomDistributionButtonBox, 1, 0, 1, 1);

        RandomDistributionGroupBox = new QGroupBox(RandomDistributionDialog);
        RandomDistributionGroupBox->setObjectName("RandomDistributionGroupBox");
        verticalLayout_4 = new QVBoxLayout(RandomDistributionGroupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        distributionLabel = new QLabel(RandomDistributionGroupBox);
        distributionLabel->setObjectName("distributionLabel");

        horizontalLayout->addWidget(distributionLabel);

        distComboBox = new QComboBox(RandomDistributionGroupBox);
        distComboBox->setObjectName("distComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(distComboBox->sizePolicy().hasHeightForWidth());
        distComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(distComboBox);


        verticalLayout_3->addLayout(horizontalLayout);

        distFormulaLabel = new QLabel(RandomDistributionGroupBox);
        distFormulaLabel->setObjectName("distFormulaLabel");

        verticalLayout_3->addWidget(distFormulaLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        parameter1Label = new QLabel(RandomDistributionGroupBox);
        parameter1Label->setObjectName("parameter1Label");
        parameter1Label->setScaledContents(true);
        parameter1Label->setWordWrap(true);

        verticalLayout->addWidget(parameter1Label);

        parameter2Label = new QLabel(RandomDistributionGroupBox);
        parameter2Label->setObjectName("parameter2Label");
        parameter2Label->setScaledContents(true);
        parameter2Label->setWordWrap(true);

        verticalLayout->addWidget(parameter2Label);

        parameter3Label = new QLabel(RandomDistributionGroupBox);
        parameter3Label->setObjectName("parameter3Label");
        parameter3Label->setScaledContents(true);
        parameter3Label->setWordWrap(true);

        verticalLayout->addWidget(parameter3Label);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        parameter1DbleSpinBox = new QDoubleSpinBox(RandomDistributionGroupBox);
        parameter1DbleSpinBox->setObjectName("parameter1DbleSpinBox");
        sizePolicy.setHeightForWidth(parameter1DbleSpinBox->sizePolicy().hasHeightForWidth());
        parameter1DbleSpinBox->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(parameter1DbleSpinBox);

        parameter2DbleSpinBox = new QDoubleSpinBox(RandomDistributionGroupBox);
        parameter2DbleSpinBox->setObjectName("parameter2DbleSpinBox");
        sizePolicy.setHeightForWidth(parameter2DbleSpinBox->sizePolicy().hasHeightForWidth());
        parameter2DbleSpinBox->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(parameter2DbleSpinBox);

        parameter3DbleSpinBox = new QDoubleSpinBox(RandomDistributionGroupBox);
        parameter3DbleSpinBox->setObjectName("parameter3DbleSpinBox");
        sizePolicy.setHeightForWidth(parameter3DbleSpinBox->sizePolicy().hasHeightForWidth());
        parameter3DbleSpinBox->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(parameter3DbleSpinBox);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout->addWidget(RandomDistributionGroupBox, 0, 0, 1, 1);


        retranslateUi(RandomDistributionDialog);
        QObject::connect(randomDistributionButtonBox, &QDialogButtonBox::accepted, RandomDistributionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(randomDistributionButtonBox, &QDialogButtonBox::rejected, RandomDistributionDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RandomDistributionDialog);
    } // setupUi

    void retranslateUi(QDialog *RandomDistributionDialog)
    {
        RandomDistributionDialog->setWindowTitle(QCoreApplication::translate("RandomDistributionDialog", "Random Values", nullptr));
        RandomDistributionGroupBox->setTitle(QString());
        distributionLabel->setText(QCoreApplication::translate("RandomDistributionDialog", "Distribution :", nullptr));
        distFormulaLabel->setText(QString());
        parameter1Label->setText(QCoreApplication::translate("RandomDistributionDialog", "TextLabel", nullptr));
        parameter2Label->setText(QCoreApplication::translate("RandomDistributionDialog", "TextLabel", nullptr));
        parameter3Label->setText(QCoreApplication::translate("RandomDistributionDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RandomDistributionDialog: public Ui_RandomDistributionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOMDISTRIBUTIONDIALOG_H
