/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QPushButton *pushButton_4;
    QCommandLinkButton *commandLinkButton;
    QLabel *image123;
    QPushButton *pushButton_5;
    QLineEdit *lineEditSearch;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1048, 610);
        MainWindow->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(8);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(970, 10, 61, 41));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 20px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 10, 921, 461));
        tableView->setAutoFillBackground(false);
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(770, 490, 51, 51));
        QFont font2;
        font2.setPointSize(30);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setStyleStrategy(QFont::PreferDefault);
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 25px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(990, 60, 41, 40));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI"));
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(75);
        font3.setKerning(true);
        commandLinkButton->setFont(font3);
        commandLinkButton->setMouseTracking(false);
        commandLinkButton->setAutoFillBackground(false);
        commandLinkButton->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 20px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Downloads/free-icon-question-2476199.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon);
        image123 = new QLabel(centralWidget);
        image123->setObjectName(QString::fromUtf8("image123"));
        image123->setGeometry(QRect(10, 480, 321, 131));
        image123->setStyleSheet(QString::fromUtf8(""));
        image123->setPixmap(QPixmap(QString::fromUtf8("school.png")));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(830, 490, 121, 51));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        font4.setKerning(true);
        pushButton_5->setFont(font4);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 25px;\n"
"border: 2px solid rgb(50, 50, 76);"));
        lineEditSearch = new QLineEdit(centralWidget);
        lineEditSearch->setObjectName(QString::fromUtf8("lineEditSearch"));
        lineEditSearch->setEnabled(true);
        lineEditSearch->setGeometry(QRect(360, 490, 281, 51));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        font5.setWeight(75);
        font5.setStrikeOut(false);
        font5.setKerning(true);
        font5.setStyleStrategy(QFont::PreferDefault);
        lineEditSearch->setFont(font5);
        lineEditSearch->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 25px;\n"
"qproperty-alignment: 'AlignCenter';\n"
"border: 2px solid rgb(50, 50, 76);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 490, 51, 51));
        QFont font6;
        font6.setPointSize(13);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        pushButton->setFont(font6);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 25px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(710, 490, 51, 51));
        QFont font7;
        font7.setPointSize(19);
        font7.setBold(true);
        font7.setWeight(75);
        pushButton_2->setFont(font7);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 25px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        MainWindow->setCentralWidget(centralWidget);
        pushButton_3->raise();
        tableView->raise();
        commandLinkButton->raise();
        image123->raise();
        pushButton_5->raise();
        lineEditSearch->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_4->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1048, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\342\206\272", nullptr));
#ifndef QT_NO_TOOLTIP
        commandLinkButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        commandLinkButton->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_ACCESSIBILITY
        commandLinkButton->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        commandLinkButton->setText(QApplication::translate("MainWindow", " ?", nullptr));
        commandLinkButton->setDescription(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        image123->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditSearch->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEditSearch->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        lineEditSearch->setText(QString());
        lineEditSearch->setPlaceholderText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
