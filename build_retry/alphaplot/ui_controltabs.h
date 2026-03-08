/********************************************************************************
** Form generated from reading UI file 'controltabs.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLTABS_H
#define UI_CONTROLTABS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <future/core/ControlWidget.h>

QT_BEGIN_NAMESPACE

class Ui_ControlTabs
{
public:
    QGridLayout *gridLayout;
    ControlWidget *cwidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tab_widget;
    QWidget *description_tab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *previous_column_button;
    QToolButton *next_column_button;
    QPushButton *button_set_description;
    QWidget *widget;
    QHBoxLayout *hboxLayout;
    QLabel *name_label;
    QLineEdit *name_edit;
    QLabel *comment_label;
    QTextEdit *comment_box;
    QWidget *format_tab;
    QGridLayout *format_tab_layout;
    QPushButton *button_set_type;
    QLabel *type_label;
    QComboBox *type_box;
    QLabel *format_label;
    QComboBox *format_box;
    QLabel *format_label2;
    QLineEdit *formatLineEdit;
    QLabel *digits_label;
    QSpinBox *digits_box;
    QLabel *date_time_interval_label;
    QComboBox *date_time_interval;
    QLabel *date_time_0_label;
    QDateTimeEdit *date_time_0;
    QTextEdit *type_info;
    QWidget *formula_tab;
    QGridLayout *formula_tab_layout;
    QComboBox *add_function_combobox;
    QLabel *formula_label;
    QTextEdit *formula_box;
    QPushButton *add_reference_button;
    QPushButton *set_formula_button;
    QComboBox *add_reference_combobox;
    QPushButton *add_function_button;

    void setupUi(QWidget *ControlTabs)
    {
        if (ControlTabs->objectName().isEmpty())
            ControlTabs->setObjectName("ControlTabs");
        ControlTabs->resize(435, 470);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ControlTabs->sizePolicy().hasHeightForWidth());
        ControlTabs->setSizePolicy(sizePolicy);
        ControlTabs->setMinimumSize(QSize(260, 230));
        gridLayout = new QGridLayout(ControlTabs);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cwidget = new ControlWidget(ControlTabs);
        cwidget->setObjectName("cwidget");
        gridLayout_2 = new QGridLayout(cwidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tab_widget = new QTabWidget(cwidget);
        tab_widget->setObjectName("tab_widget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tab_widget->sizePolicy().hasHeightForWidth());
        tab_widget->setSizePolicy(sizePolicy1);
        tab_widget->setMinimumSize(QSize(260, 230));
        tab_widget->setTabPosition(QTabWidget::North);
        description_tab = new QWidget();
        description_tab->setObjectName("description_tab");
        verticalLayout = new QVBoxLayout(description_tab);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        previous_column_button = new QToolButton(description_tab);
        previous_column_button->setObjectName("previous_column_button");
        previous_column_button->setAutoRaise(true);
        previous_column_button->setArrowType(Qt::LeftArrow);

        horizontalLayout->addWidget(previous_column_button);

        next_column_button = new QToolButton(description_tab);
        next_column_button->setObjectName("next_column_button");
        next_column_button->setAutoRaise(true);
        next_column_button->setArrowType(Qt::RightArrow);

        horizontalLayout->addWidget(next_column_button);

        button_set_description = new QPushButton(description_tab);
        button_set_description->setObjectName("button_set_description");

        horizontalLayout->addWidget(button_set_description);


        verticalLayout->addLayout(horizontalLayout);

        widget = new QWidget(description_tab);
        widget->setObjectName("widget");
        hboxLayout = new QHBoxLayout(widget);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, -1, 0, -1);
        name_label = new QLabel(widget);
        name_label->setObjectName("name_label");
        name_label->setTextFormat(Qt::PlainText);

        hboxLayout->addWidget(name_label);

        name_edit = new QLineEdit(widget);
        name_edit->setObjectName("name_edit");

        hboxLayout->addWidget(name_edit);


        verticalLayout->addWidget(widget);

        comment_label = new QLabel(description_tab);
        comment_label->setObjectName("comment_label");
        comment_label->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(comment_label);

        comment_box = new QTextEdit(description_tab);
        comment_box->setObjectName("comment_box");
        comment_box->setMinimumSize(QSize(60, 10));

        verticalLayout->addWidget(comment_box);

        tab_widget->addTab(description_tab, QString());
        format_tab = new QWidget();
        format_tab->setObjectName("format_tab");
        format_tab_layout = new QGridLayout(format_tab);
        format_tab_layout->setObjectName("format_tab_layout");
        button_set_type = new QPushButton(format_tab);
        button_set_type->setObjectName("button_set_type");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(button_set_type->sizePolicy().hasHeightForWidth());
        button_set_type->setSizePolicy(sizePolicy2);

        format_tab_layout->addWidget(button_set_type, 1, 0, 1, 4);

        type_label = new QLabel(format_tab);
        type_label->setObjectName("type_label");

        format_tab_layout->addWidget(type_label, 2, 0, 1, 1);

        type_box = new QComboBox(format_tab);
        type_box->setObjectName("type_box");
        sizePolicy2.setHeightForWidth(type_box->sizePolicy().hasHeightForWidth());
        type_box->setSizePolicy(sizePolicy2);
        type_box->setMinimumSize(QSize(120, 0));

        format_tab_layout->addWidget(type_box, 2, 1, 1, 3);

        format_label = new QLabel(format_tab);
        format_label->setObjectName("format_label");

        format_tab_layout->addWidget(format_label, 3, 0, 1, 1);

        format_box = new QComboBox(format_tab);
        format_box->setObjectName("format_box");
        sizePolicy2.setHeightForWidth(format_box->sizePolicy().hasHeightForWidth());
        format_box->setSizePolicy(sizePolicy2);
        format_box->setMinimumSize(QSize(120, 0));

        format_tab_layout->addWidget(format_box, 3, 1, 1, 3);

        format_label2 = new QLabel(format_tab);
        format_label2->setObjectName("format_label2");

        format_tab_layout->addWidget(format_label2, 4, 0, 1, 1);

        formatLineEdit = new QLineEdit(format_tab);
        formatLineEdit->setObjectName("formatLineEdit");

        format_tab_layout->addWidget(formatLineEdit, 4, 1, 1, 3);

        digits_label = new QLabel(format_tab);
        digits_label->setObjectName("digits_label");

        format_tab_layout->addWidget(digits_label, 5, 0, 1, 1);

        digits_box = new QSpinBox(format_tab);
        digits_box->setObjectName("digits_box");
        digits_box->setMaximum(16);
        digits_box->setValue(6);

        format_tab_layout->addWidget(digits_box, 5, 1, 1, 3);

        date_time_interval_label = new QLabel(format_tab);
        date_time_interval_label->setObjectName("date_time_interval_label");

        format_tab_layout->addWidget(date_time_interval_label, 6, 0, 1, 1);

        date_time_interval = new QComboBox(format_tab);
        date_time_interval->setObjectName("date_time_interval");

        format_tab_layout->addWidget(date_time_interval, 6, 1, 1, 1);

        date_time_0_label = new QLabel(format_tab);
        date_time_0_label->setObjectName("date_time_0_label");

        format_tab_layout->addWidget(date_time_0_label, 6, 2, 1, 1);

        date_time_0 = new QDateTimeEdit(format_tab);
        date_time_0->setObjectName("date_time_0");

        format_tab_layout->addWidget(date_time_0, 6, 3, 1, 1);

        type_info = new QTextEdit(format_tab);
        type_info->setObjectName("type_info");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(type_info->sizePolicy().hasHeightForWidth());
        type_info->setSizePolicy(sizePolicy3);
        type_info->setMinimumSize(QSize(60, 10));
        type_info->setUndoRedoEnabled(false);
        type_info->setReadOnly(true);

        format_tab_layout->addWidget(type_info, 7, 0, 1, 4);

        tab_widget->addTab(format_tab, QString());
        formula_tab = new QWidget();
        formula_tab->setObjectName("formula_tab");
        formula_tab_layout = new QGridLayout(formula_tab);
        formula_tab_layout->setObjectName("formula_tab_layout");
        add_function_combobox = new QComboBox(formula_tab);
        add_function_combobox->setObjectName("add_function_combobox");
        add_function_combobox->setMinimumSize(QSize(120, 0));

        formula_tab_layout->addWidget(add_function_combobox, 3, 0, 1, 2);

        formula_label = new QLabel(formula_tab);
        formula_label->setObjectName("formula_label");

        formula_tab_layout->addWidget(formula_label, 0, 0, 1, 1);

        formula_box = new QTextEdit(formula_tab);
        formula_box->setObjectName("formula_box");
        formula_box->setMinimumSize(QSize(60, 10));
        formula_box->setAcceptRichText(false);

        formula_tab_layout->addWidget(formula_box, 1, 0, 1, 3);

        add_reference_button = new QPushButton(formula_tab);
        add_reference_button->setObjectName("add_reference_button");

        formula_tab_layout->addWidget(add_reference_button, 2, 2, 1, 1);

        set_formula_button = new QPushButton(formula_tab);
        set_formula_button->setObjectName("set_formula_button");

        formula_tab_layout->addWidget(set_formula_button, 0, 1, 1, 2);

        add_reference_combobox = new QComboBox(formula_tab);
        add_reference_combobox->setObjectName("add_reference_combobox");
        add_reference_combobox->setMinimumSize(QSize(120, 0));

        formula_tab_layout->addWidget(add_reference_combobox, 2, 0, 1, 2);

        add_function_button = new QPushButton(formula_tab);
        add_function_button->setObjectName("add_function_button");

        formula_tab_layout->addWidget(add_function_button, 3, 2, 1, 1);

        tab_widget->addTab(formula_tab, QString());

        gridLayout_2->addWidget(tab_widget, 0, 0, 1, 1);


        gridLayout->addWidget(cwidget, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        name_label->setBuddy(name_edit);
        comment_label->setBuddy(comment_box);
        type_label->setBuddy(type_box);
        format_label->setBuddy(format_box);
        digits_label->setBuddy(digits_box);
        formula_label->setBuddy(formula_box);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ControlTabs);

        tab_widget->setCurrentIndex(1);
        button_set_description->setDefault(true);
        button_set_type->setDefault(true);
        set_formula_button->setDefault(true);


        QMetaObject::connectSlotsByName(ControlTabs);
    } // setupUi

    void retranslateUi(QWidget *ControlTabs)
    {
        ControlTabs->setWindowTitle(QCoreApplication::translate("ControlTabs", "Control Tabs", nullptr));
#if QT_CONFIG(tooltip)
        previous_column_button->setToolTip(QCoreApplication::translate("ControlTabs", "go to previous column", nullptr));
#endif // QT_CONFIG(tooltip)
        previous_column_button->setText(QCoreApplication::translate("ControlTabs", "...", nullptr));
#if QT_CONFIG(tooltip)
        next_column_button->setToolTip(QCoreApplication::translate("ControlTabs", "go to next column", nullptr));
#endif // QT_CONFIG(tooltip)
        next_column_button->setText(QCoreApplication::translate("ControlTabs", "...", nullptr));
        button_set_description->setText(QCoreApplication::translate("ControlTabs", "Appl&y", nullptr));
        name_label->setText(QCoreApplication::translate("ControlTabs", " &Name:", nullptr));
        comment_label->setText(QCoreApplication::translate("ControlTabs", " Co&mment:", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(description_tab), QCoreApplication::translate("ControlTabs", "Text", nullptr));
#if QT_CONFIG(tooltip)
        button_set_type->setToolTip(QCoreApplication::translate("ControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Apply new type and format to all selected columns</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        button_set_type->setText(QCoreApplication::translate("ControlTabs", "Appl&y", nullptr));
        type_label->setText(QCoreApplication::translate("ControlTabs", " Type:", nullptr));
#if QT_CONFIG(tooltip)
        type_box->setToolTip(QCoreApplication::translate("ControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Select the column type</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        format_label->setText(QCoreApplication::translate("ControlTabs", " For&mat:", nullptr));
#if QT_CONFIG(tooltip)
        format_box->setToolTip(QCoreApplication::translate("ControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Choose the display format</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        format_label2->setText(QCoreApplication::translate("ControlTabs", " Format:", nullptr));
        digits_label->setText(QCoreApplication::translate("ControlTabs", "& Decimal Digits:", nullptr));
#if QT_CONFIG(tooltip)
        digits_box->setToolTip(QCoreApplication::translate("ControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter the number of displayed decimal digits</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        date_time_interval_label->setText(QCoreApplication::translate("ControlTabs", " Numbers are", nullptr));
        date_time_0_label->setText(QCoreApplication::translate("ControlTabs", "since", nullptr));
#if QT_CONFIG(tooltip)
        type_info->setToolTip(QCoreApplication::translate("ControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Information about the selected type and format</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tab_widget->setTabText(tab_widget->indexOf(format_tab), QCoreApplication::translate("ControlTabs", "Type", nullptr));
#if QT_CONFIG(tooltip)
        add_function_combobox->setToolTip(QCoreApplication::translate("ControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Select a function to insert into the formula</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        formula_label->setText(QString());
#if QT_CONFIG(tooltip)
        add_reference_button->setToolTip(QCoreApplication::translate("ControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Insert the column reference into the formula</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        add_reference_button->setText(QCoreApplication::translate("ControlTabs", "Add", nullptr));
#if QT_CONFIG(tooltip)
        set_formula_button->setToolTip(QCoreApplication::translate("ControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Apply the formula to all selected cells</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        set_formula_button->setText(QCoreApplication::translate("ControlTabs", "Appl&y", nullptr));
#if QT_CONFIG(tooltip)
        add_reference_combobox->setToolTip(QCoreApplication::translate("ControlTabs", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Select a column reference to insert into the formula</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        add_function_button->setToolTip(QCoreApplication::translate("ControlTabs", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bitstream Vera Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif';\">Insert the function into the formula</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        add_function_button->setText(QCoreApplication::translate("ControlTabs", "Add", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(formula_tab), QCoreApplication::translate("ControlTabs", "Formula", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlTabs: public Ui_ControlTabs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLTABS_H
