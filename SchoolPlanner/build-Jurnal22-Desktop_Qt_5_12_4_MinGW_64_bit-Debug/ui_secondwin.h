/********************************************************************************
** Form generated from reading UI file 'secondwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWIN_H
#define UI_SECONDWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWin
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QDateEdit *dateEdit;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_9;

    void setupUi(QWidget *SecondWin)
    {
        if (SecondWin->objectName().isEmpty())
            SecondWin->setObjectName(QString::fromUtf8("SecondWin"));
        SecondWin->resize(418, 289);
        SecondWin->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));
        verticalLayoutWidget = new QWidget(SecondWin);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 100, 371, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(plainTextEdit);

        pushButton_3 = new QPushButton(SecondWin);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 230, 41, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 20px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        pushButton_2 = new QPushButton(SecondWin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 240, 81, 31));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 15px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        pushButton = new QPushButton(SecondWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 230, 41, 41));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 20px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        dateEdit = new QDateEdit(SecondWin);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(280, 50, 111, 31));
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 5px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        dateEdit->setDateTime(QDateTime(QDate(2022, 12, 10), QTime(0, 0, 0)));
        dateEdit->setCurrentSection(QDateTimeEdit::DaySection);
        dateEdit->setCalendarPopup(true);
        comboBox = new QComboBox(SecondWin);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 50, 141, 31));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 255);\n"
"border-radius: 5px; \n"
"border: 2px solid rgb(50, 50, 76);"));
        label = new QLabel(SecondWin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 61, 39));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setScaledContents(false);
        label_9 = new QLabel(SecondWin);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(320, 10, 41, 39));
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);

        retranslateUi(SecondWin);

        QMetaObject::connectSlotsByName(SecondWin);
    } // setupUi

    void retranslateUi(QWidget *SecondWin)
    {
        SecondWin->setWindowTitle(QApplication::translate("SecondWin", "Form", nullptr));
        label_2->setText(QApplication::translate("SecondWin", "\320\227\320\260\320\264\320\260\321\207\320\260", nullptr));
        plainTextEdit->setPlainText(QString());
        pushButton_3->setText(QApplication::translate("SecondWin", "\342\234\227", nullptr));
        pushButton_2->setText(QApplication::translate("SecondWin", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214", nullptr));
        pushButton->setText(QApplication::translate("SecondWin", "\342\234\223", nullptr));
        comboBox->setItemText(0, QApplication::translate("SecondWin", "\320\220\320\275\320\263\320\273\320\270\320\271\321\201\320\272\320\270\320\271 \321\217\320\267\321\213\320\272", nullptr));
        comboBox->setItemText(1, QApplication::translate("SecondWin", "\320\221\320\270\320\276\320\273\320\276\320\263\320\270\321\217", nullptr));
        comboBox->setItemText(2, QApplication::translate("SecondWin", "\320\223\320\265\320\276\320\263\321\200\320\260\321\204\320\270\321\217", nullptr));
        comboBox->setItemText(3, QApplication::translate("SecondWin", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\202\320\270\320\272\320\260", nullptr));
        comboBox->setItemText(4, QApplication::translate("SecondWin", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", nullptr));
        comboBox->setItemText(5, QApplication::translate("SecondWin", "\320\233\320\270\321\202\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        comboBox->setItemText(6, QApplication::translate("SecondWin", "\320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\320\272\320\260", nullptr));
        comboBox->setItemText(7, QApplication::translate("SecondWin", "\320\236\320\261\321\211\320\265\321\201\321\202\320\262\320\276\320\267\320\275\320\260\320\275\320\270\320\265", nullptr));
        comboBox->setItemText(8, QApplication::translate("SecondWin", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271 \321\217\320\267\321\213\320\272", nullptr));
        comboBox->setItemText(9, QApplication::translate("SecondWin", "\320\244\320\270\320\267\320\270\320\272\320\260", nullptr));
        comboBox->setItemText(10, QApplication::translate("SecondWin", "\320\244\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\272\321\203\320\273\321\214\321\202\321\203\321\200\320\260", nullptr));
        comboBox->setItemText(11, QApplication::translate("SecondWin", "\320\245\320\270\320\274\320\270\321\217", nullptr));

        label->setText(QApplication::translate("SecondWin", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        label_9->setText(QApplication::translate("SecondWin", "\320\224\320\260\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWin: public Ui_SecondWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWIN_H
