#include "secondwin.h"
#include "ui_secondwin.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QObject>
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFile>
#include <QDate>
#include <QDebug>

SecondWin::SecondWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWin)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./testDB5.db");
    if(db.open())
    {
        qDebug("open");
    }
    else
    {
        qDebug("no open");
    }

    model = new QSqlTableModel(this, db);
    model->setTable("Jornal");
    model->select();

    // Populate subjects in the combo box
    QSqlQuery subjectQuery("SELECT DISTINCT Предмет FROM Jornal", db);
    while (subjectQuery.next()) {
        QString subject = subjectQuery.value(0).toString();
        ui->comboBox->addItem(subject);
    }
    ui->comboBox->setEditable(true);
    ui->comboBox->setInsertPolicy(QComboBox::NoInsert);
}

SecondWin::~SecondWin()
{
    delete ui;
}

void SecondWin::setModel(QAbstractItemModel* /*model*/)
{
    //mapper->setModel(model);
    //mapper->addMapping(ui->comboBox,1);
}

void SecondWin::on_pushButton_clicked()
{
    QSqlQuery query;
    QString subject = ui->comboBox->currentText(); // Получаем выбранный предмет из комбо-бокса
    QString taskDescription = ui->plainTextEdit->toPlainText();
    QString date = ui->dateEdit->text();

    // Проверяем, существует ли выбранный предмет в базе данных
    int subjectIndex = ui->comboBox->findText(subject);
    if (subjectIndex == -1) {
        // Если предмет не найден, добавляем его в базу данных
        query.prepare("INSERT INTO Subjects (SubjectName) VALUES (:Subject)");
        query.bindValue(":Subject", subject);
        if (!query.exec()) {
            qDebug() << "error adding subject";
        }

        // Теперь обновим список предметов в комбо-боксе
        ui->comboBox->addItem(subject);
    }

    // Далее ваш код для добавления задачи...
    // Например, ваш код добавления задачи может быть примерно таким:
    query.prepare("INSERT INTO Jornal (Предмет, Задание, Дата) VALUES (:FName, :Class, :Date)");
    query.bindValue(":Class", taskDescription);
    query.bindValue(":FName", subject);
    query.bindValue(":Date", date);

    if (!query.exec()) {
        qDebug() << "error adding task";
    }

    emit UT();

    model->setTable("Jornal");
    model->select();

    QMessageBox::information(this, "Сохранение", "Сохранено.", "Ок");
    ui->plainTextEdit->clear();

    close();
}


void SecondWin::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Внимание", "Вернуться в меню?",
                                  QMessageBox::Yes |QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        ui->plainTextEdit->clear();
        this->close();
    }
}

void SecondWin::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Внимание", "Вы действительно хотите сбросить значения?",
                                  QMessageBox::Yes |QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        ui->plainTextEdit->clear();
    }
    QMessageBox::information(this, "Сброс", "Поля сброшены.", "Принял");
}
