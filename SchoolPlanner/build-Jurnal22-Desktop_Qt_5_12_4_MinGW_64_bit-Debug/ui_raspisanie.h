/********************************************************************************
** Form generated from reading UI file 'raspisanie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RASPISANIE_H
#define UI_RASPISANIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_raspisanie
{
public:
    QTableView *tableView;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_0;

    void setupUi(QDialog *raspisanie)
    {
        if (raspisanie->objectName().isEmpty())
            raspisanie->setObjectName(QString::fromUtf8("raspisanie"));
        raspisanie->resize(807, 448);
        raspisanie->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));
        tableView = new QTableView(raspisanie);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(25, 21, 761, 311));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));
        pushButton_4 = new QPushButton(raspisanie);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(500, 350, 151, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 15px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        pushButton_2 = new QPushButton(raspisanie);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 360, 51, 51));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 25px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        pushButton_3 = new QPushButton(raspisanie);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 360, 51, 51));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 25px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        pushButton_5 = new QPushButton(raspisanie);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(450, 380, 41, 41));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 20px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        pushButton_6 = new QPushButton(raspisanie);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(370, 350, 71, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font3.setPointSize(25);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton_6->setFont(font3);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 35px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        pushButton_7 = new QPushButton(raspisanie);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(660, 350, 131, 31));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 15px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        pushButton_8 = new QPushButton(raspisanie);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(580, 390, 111, 31));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        pushButton_8->setFont(font4);
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 15px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        pushButton_0 = new QPushButton(raspisanie);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(700, 390, 91, 31));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 15px; \n"
"border: 2px solid rgb(50, 50, 76);"));

        retranslateUi(raspisanie);

        QMetaObject::connectSlotsByName(raspisanie);
    } // setupUi

    void retranslateUi(QDialog *raspisanie)
    {
        raspisanie->setWindowTitle(QApplication::translate("raspisanie", "Dialog", nullptr));
        pushButton_4->setText(QApplication::translate("raspisanie", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", nullptr));
        pushButton_2->setText(QApplication::translate("raspisanie", "1", nullptr));
        pushButton_3->setText(QApplication::translate("raspisanie", "2", nullptr));
        pushButton_5->setText(QApplication::translate("raspisanie", "\342\234\227", nullptr));
        pushButton_6->setText(QApplication::translate("raspisanie", "\342\234\223", nullptr));
        pushButton_7->setText(QApplication::translate("raspisanie", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        pushButton_8->setText(QApplication::translate("raspisanie", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        pushButton_0->setText(QApplication::translate("raspisanie", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class raspisanie: public Ui_raspisanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RASPISANIE_H
