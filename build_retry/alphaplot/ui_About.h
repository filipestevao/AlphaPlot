/********************************************************************************
** Form generated from reading UI file 'About.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *logoLabel;
    QVBoxLayout *verticalLayout;
    QLabel *versionLabelCaption;
    QLabel *buildLabelCaption;
    QLabel *releaseDateLabelCaption;
    QLabel *osLabelCaption;
    QLabel *originalAuthorLabelCaption;
    QVBoxLayout *verticalLayout_2;
    QLabel *versionLabel;
    QLabel *buildLabel;
    QLabel *releaseDateLabel;
    QLabel *osLabel;
    QLabel *originalAuthorLabel;
    QSpacerItem *horizontalSpacer;
    QTextEdit *creditsBox;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName("About");
        About->resize(500, 450);
        About->setMinimumSize(QSize(500, 450));
        About->setMaximumSize(QSize(500, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/appicon-16"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        About->setWindowIcon(icon);
        About->setSizeGripEnabled(false);
        gridLayout = new QGridLayout(About);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        logoLabel = new QLabel(About);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setMinimumSize(QSize(0, 0));
        logoLabel->setMaximumSize(QSize(96, 96));
        logoLabel->setPixmap(QPixmap(QString::fromUtf8(":/appicon-96")));

        horizontalLayout->addWidget(logoLabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        versionLabelCaption = new QLabel(About);
        versionLabelCaption->setObjectName("versionLabelCaption");

        verticalLayout->addWidget(versionLabelCaption);

        buildLabelCaption = new QLabel(About);
        buildLabelCaption->setObjectName("buildLabelCaption");

        verticalLayout->addWidget(buildLabelCaption);

        releaseDateLabelCaption = new QLabel(About);
        releaseDateLabelCaption->setObjectName("releaseDateLabelCaption");

        verticalLayout->addWidget(releaseDateLabelCaption);

        osLabelCaption = new QLabel(About);
        osLabelCaption->setObjectName("osLabelCaption");

        verticalLayout->addWidget(osLabelCaption);

        originalAuthorLabelCaption = new QLabel(About);
        originalAuthorLabelCaption->setObjectName("originalAuthorLabelCaption");

        verticalLayout->addWidget(originalAuthorLabelCaption);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        versionLabel = new QLabel(About);
        versionLabel->setObjectName("versionLabel");

        verticalLayout_2->addWidget(versionLabel);

        buildLabel = new QLabel(About);
        buildLabel->setObjectName("buildLabel");

        verticalLayout_2->addWidget(buildLabel);

        releaseDateLabel = new QLabel(About);
        releaseDateLabel->setObjectName("releaseDateLabel");

        verticalLayout_2->addWidget(releaseDateLabel);

        osLabel = new QLabel(About);
        osLabel->setObjectName("osLabel");

        verticalLayout_2->addWidget(osLabel);

        originalAuthorLabel = new QLabel(About);
        originalAuthorLabel->setObjectName("originalAuthorLabel");

        verticalLayout_2->addWidget(originalAuthorLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        creditsBox = new QTextEdit(About);
        creditsBox->setObjectName("creditsBox");
        creditsBox->setReadOnly(true);

        gridLayout->addWidget(creditsBox, 1, 0, 1, 1);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "About AlphaPlot", nullptr));
        logoLabel->setText(QString());
        versionLabelCaption->setText(QCoreApplication::translate("About", "AlphaPlot :", nullptr));
        buildLabelCaption->setText(QCoreApplication::translate("About", "Build :", nullptr));
        releaseDateLabelCaption->setText(QCoreApplication::translate("About", "Released :", nullptr));
        osLabelCaption->setText(QCoreApplication::translate("About", "Operating System :", nullptr));
        originalAuthorLabelCaption->setText(QCoreApplication::translate("About", "Original Author :", nullptr));
        versionLabel->setText(QCoreApplication::translate("About", "XX.XX.XX-alphaXX", nullptr));
        buildLabel->setText(QCoreApplication::translate("About", "XX-bit", nullptr));
        releaseDateLabel->setText(QCoreApplication::translate("About", "xxxx-xx-xx", nullptr));
        osLabel->setText(QCoreApplication::translate("About", "os", nullptr));
        originalAuthorLabel->setText(QCoreApplication::translate("About", "Author", nullptr));
        creditsBox->setHtml(QCoreApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Credits </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Developers</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:"
                        "10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The following people have significatly contributed to the AlphaPlot source code (in alphabetical order).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Arun Narayanankutty: &lt;n.arun.lifescience@gmail.com&gt;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:1"
                        "2pt;\">QtiPlot/SciDAVis</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">AlphaPlot is a fork of SciDAVis(at the time of the fork, i.e. SciDAVis 1.D009) which in turn is a fork of QtiPlot(at the time of the fork, i.e. QtiPlot 0.9-rc2). The following people have written parts of the SciDAVis &amp; QtiPlot source code, ranging from a few lines to large chunks(in alphabetical order).</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-size:10pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Tilman Benkert,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-"
                        "top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Shen Chen,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Borries Demeler,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Jos\303\251 Antonio Lorenzo Fern\303\241ndez,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Knut Franke,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Miquel Garriga,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Vasileios Gkanis,</li>\n"
"<li"
                        " style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Gudjon Gudjonsson,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Alex Kargovsky,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Michael Mac-Vicar,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Arun Narayanankutty,</span></li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Tomomasa Ohkubo,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:"
                        "0px; -qt-block-indent:0; text-indent:0px;\">Russell Standish,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Aaron Van Tassle,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Branimir Vasilic,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ion Vasilief,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Vincent Wagelaar</li></ul>\n"
"<p style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The AlphaPlot manual is based on the QtiPlot and SciDAVis manual, written by(in alphabetical o"
                        "rder):</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-size:10pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Knut Franke,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Roger Gadiou,</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ion Vasilief</li></ul>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Special Thanks</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" m"
                        "argin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">We also want to acknowledge the people having helped us indirectly by contributing to the following</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">fine pieces of software. In no particular order.</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\"\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Qt (<a href=\"https://www.qt.io/\"><span style=\" text-decoration: underline; color:#007af4;\">https://www.qt.io/</span></a>),</li>\n"
"<li style=\"\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Qt Creator (<a href=\"https://www.qt.io/"
                        "product/development-tools\"><span style=\" text-decoration: underline; color:#007af4;\">https://www.qt.io/product/development-tools</span></a>),</li>\n"
"<li style=\"\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">QCustomPlot (<a href=\"https://www.qcustomplot.com/\"><span style=\" text-decoration: underline; color:#007af4;\">https://www.qcustomplot.com/</span></a>),</li>\n"
"<li style=\"\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">muParser (<a href=\"https://beltoforion.de/en/muparser/\"><span style=\" text-decoration: underline; color:#007af4;\">https://beltoforion.de/en/muparser/</span></a>),</li>\n"
"<li style=\"\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sublime Text editor (<a href=\"https://www.sublimetext.com/\"><span style=\" text-decoration: underline; color:#007af4;\">https://w"
                        "ww.sublimetext.com/</span></a>),</li>\n"
"<li style=\"\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">GSL (<a href=\"http://www.gnu.org/software/gsl/\"><span style=\" text-decoration: underline; color:#007af4;\">http://www.gnu.org/software/gsl/</span></a>),</li>\n"
"<li style=\"\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Git (<a href=\"https://git-scm.com/\"><span style=\" text-decoration: underline; color:#007af4;\">https://git-scm.com/</span></a>),</li>\n"
"<li style=\"\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Breeze Icons (<a href=\"https://github.com/KDE/breeze-icons\"><span style=\" text-decoration: underline; color:#007af4;\">https://github.com/KDE/breeze-icons</span></a>),</li>\n"
"<li style=\"\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-"
                        "block-indent:0; text-indent:0px;\">Inno Setup (<a href=\"https://jrsoftware.org/isinfo.php\"><span style=\" text-decoration: underline; color:#007af4;\">https://jrsoftware.org/isinfo.php</span></a>),</li>\n"
"<li style=\"\" style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AppImage (<a href=\"https://appimage.org/\"><span style=\" text-decoration: underline; color:#007af4;\">https://appimage.org/</span></a>)</li></ul>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">... and many more we just forgot to mention.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
