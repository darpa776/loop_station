/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QSplitter *splitter;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QSplitter *splitter_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(830, 499);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 831, 431));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/background2.png")));
        label->setScaledContents(true);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(100, 350, 631, 61));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QPalette palette;
        QBrush brush(QColor(114, 159, 207, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(32, 74, 135, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(190, 190, 190, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_2->setPalette(palette);
        pushButton_2->setStyleSheet(QLatin1String("font: 15pt \"DejaVu Math TeX Gyre\";\n"
""));
        splitter->addWidget(pushButton_2);
        pushButton_3 = new QPushButton(splitter);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_3->setPalette(palette1);
        pushButton_3->setStyleSheet(QStringLiteral("font: 15pt \"DejaVu Math TeX Gyre\";"));
        splitter->addWidget(pushButton_3);
        pushButton_4 = new QPushButton(splitter);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_4->setPalette(palette2);
        pushButton_4->setStyleSheet(QLatin1String("font: 15pt \"DejaVu Math TeX Gyre\";\n"
""));
        splitter->addWidget(pushButton_4);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QPalette palette3;
        QBrush brush3(QColor(46, 52, 54, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton->setPalette(palette3);
        pushButton->setStyleSheet(QLatin1String("font: 15pt \"DejaVu Math TeX Gyre\";\n"
""));
        splitter->addWidget(pushButton);
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(0, -2, 831, 351));
        splitter_2->setOrientation(Qt::Horizontal);
        pushButton_5 = new QPushButton(splitter_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QPalette palette4;
        QBrush brush4(QColor(191, 64, 64, 25));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        pushButton_5->setPalette(palette4);
        pushButton_5->setStyleSheet(QStringLiteral(""));
        pushButton_5->setFlat(true);
        splitter_2->addWidget(pushButton_5);
        pushButton_6 = new QPushButton(splitter_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QPalette palette5;
        QBrush brush5(QColor(199, 246, 9, 25));
        brush5.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        QBrush brush6(QColor(194, 237, 23, 25));
        brush6.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        pushButton_6->setPalette(palette5);
        pushButton_6->setFlat(true);
        splitter_2->addWidget(pushButton_6);
        pushButton_7 = new QPushButton(splitter_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QPalette palette6;
        QBrush brush7(QColor(89, 191, 64, 51));
        brush7.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush7);
        QBrush brush8(QColor(145, 255, 117, 51));
        brush8.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush8);
        QBrush brush9(QColor(117, 223, 90, 51));
        brush9.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(44, 95, 32, 51));
        brush10.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(59, 127, 42, 51));
        brush11.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush7);
        QBrush brush12(QColor(255, 255, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush12);
        QBrush brush13(QColor(0, 0, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush13);
        QBrush brush14(QColor(172, 223, 159, 153));
        brush14.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        QBrush brush15(QColor(255, 255, 220, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush15);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush15);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush15);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush13);
        pushButton_7->setPalette(palette6);
        pushButton_7->setFlat(true);
        splitter_2->addWidget(pushButton_7);
        pushButton_8 = new QPushButton(splitter_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        QPalette palette7;
        QBrush brush16(QColor(64, 115, 191, 76));
        brush16.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush16);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush16);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush16);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush16);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        pushButton_8->setPalette(palette7);
        pushButton_8->setCheckable(false);
        pushButton_8->setFlat(true);
        splitter_2->addWidget(pushButton_8);
        pushButton_10 = new QPushButton(splitter_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        QPalette palette8;
        QBrush brush17(QColor(89, 64, 191, 51));
        brush17.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        pushButton_10->setPalette(palette8);
        pushButton_10->setFlat(true);
        splitter_2->addWidget(pushButton_10);
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(0, 0, 831, 451));
        pushButton_9->setFlat(true);
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        pushButton_9->raise();
        splitter->raise();
        splitter_2->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "guitar", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "drum", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "piano", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "trumpet", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "JU", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "AND", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "NAN", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "SOUND", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "EM", Q_NULLPTR));
        pushButton_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
