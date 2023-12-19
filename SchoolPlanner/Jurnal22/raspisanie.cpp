#include "raspisanie.h"
#include "ui_raspisanie.h"
#include <QStandardItemModel>
#include <QMessageBox>
#include <QSettings>
#include <QFile>
#include <QFileDialog> // Добавляем заголовочный файл для QFileDialog
#include <QHeaderView>

raspisanie::raspisanie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::raspisanie),
    saveDialogShown(false)  // Инициализация переменной
{
    ui->setupUi(this);
    model = new QStandardItemModel(8, 6, this);
    setupTable();

    // По умолчанию начнем с файлом raspisanie.ini
    currentFileName = "raspisanie.ini";
    loadTableData();

    connect(ui->pushButton_6, &QPushButton::clicked, this, &raspisanie::on_pushButton_clicked);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &raspisanie::on_pushButton_2_clicked);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &raspisanie::on_pushButton_3_clicked);
    //connect(ui->pushButton_4, &QPushButton::clicked, this, &raspisanie::on_pushButton_4_clicked); // Подключаем кнопку сохранения
    //connect(ui->pushButton_7, &QPushButton::clicked, this, &raspisanie::on_pushButton_7_clicked);
    //connect(ui->pushButton_8, &QPushButton::clicked, this, &raspisanie::on_pushButton_8_clicked);
    connect(ui->pushButton_0, &QPushButton::clicked, this, &raspisanie::on_pushButton_9_clicked);
    ui->tableView->setStyleSheet("QTableView { background-color: rgb(245, 245, 255); color: black; }");
    ui->tableView->horizontalHeader()->setStyleSheet("QHeaderView::section:all { background-color: rgb(200, 200, 255); color: black; }");
}

raspisanie::~raspisanie()
{
    delete ui;
}

void raspisanie::setupTable()
{
    QStringList daysOfWeek = {"Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота"};
    QStringList times = {"8:00", "8:55", "9:50", "10:55", "12:00", "12:55", "14:00", "14:50"};

    model->setHorizontalHeaderLabels(daysOfWeek);
    model->setVerticalHeaderLabels(times);

    ui->tableView->setModel(model); // Привязываем модель к таблице

    int columnCount = model->columnCount();
        int desiredWidth = 120;  // Задайте желаемую ширину

        // Установите одинаковую ширину для всех столбцов
        for (int column = 0; column < columnCount; ++column) {
            ui->tableView->setColumnWidth(column, desiredWidth);
        }
}

void raspisanie::on_pushButton_clicked()
{
    saveTableData();
    QMessageBox::information(this, "Запись данных", "Данные записаны в файл", "Ок");

}

void raspisanie::loadTableData()
{
    // Создаем объект QSettings для чтения данных из файла
    QSettings settings(currentFileName, QSettings::IniFormat);

    // Восстанавливаем значения ячеек таблицы из файла
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int column = 0; column < model->columnCount(); ++column) {
            QString key = QString("Cell_%1_%2").arg(row).arg(column);
            QString cellValue = settings.value(key).toString();
            QModelIndex index = model->index(row, column);
            model->setData(index, cellValue, Qt::DisplayRole);
        }
    }
}

void raspisanie::saveTableData()
{
    // Создаем объект QSettings для сохранения данных в файл
    QSettings settings(currentFileName, QSettings::IniFormat);

    // Перебираем ячейки таблицы и сохраняем их значения в файл
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int column = 0; column < model->columnCount(); ++column) {
            QModelIndex index = model->index(row, column);
            QString cellValue = model->data(index, Qt::DisplayRole).toString();
            QString key = QString("Cell_%1_%2").arg(row).arg(column);
            settings.setValue(key, cellValue);
        }
    }

    // Сохранение данных в файл
    settings.sync();
}

void raspisanie::on_pushButton_2_clicked()
{
    currentFileName = "raspisanie.ini";
    loadTableData();
}

void raspisanie::on_pushButton_3_clicked()
{
    currentFileName = "raspisanie1.ini";
    loadTableData();
}

void raspisanie::on_pushButton_4_clicked()
{
    QString selectedFileName;
    QString previousFileName = currentFileName;

    QSettings settings("myapp", "raspisanie");

    if (settings.contains("previousFileName")) {
        previousFileName = settings.value("previousFileName").toString();
    }

    // Выводим вопрос пользователю о сохранении по предыдущему пути
    if (!previousFileName.isEmpty()) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Подтверждение", "Хотите сохранить по предыдущему пути?\n\n" + previousFileName,
                                      QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            // Если пользователь выбрал "Да", используем предыдущий путь
            selectedFileName = previousFileName;
        }
    }

    // Если не выбран предыдущий путь, или пользователь выбрал "Нет", используем QFileDialog::getSaveFileName
    if (selectedFileName.isEmpty()) {
        selectedFileName = QFileDialog::getSaveFileName(this, "Сохранить файл", previousFileName, "Текстовые файлы (*.txt);;Все файлы (*)");

        // Если пользователь выбрал файл, сохраняем его путь в переменной с предыдущим путем
        if (!selectedFileName.isEmpty()) {
            settings.setValue("previousFileName", selectedFileName);
        }
    }

    // Если выбран какой-то путь, сохраняем данные и выводим сообщение
    if (!selectedFileName.isEmpty()) {
        currentFileName = selectedFileName;
        saveTableData();
        QMessageBox::information(this, "Запись данных", "Данные записаны в файл", "Ок");
        QFileInfo fileInfo(currentFileName);
        QString fullPath = fileInfo.absoluteFilePath();

        QMessageBox::information(this, "Сохранение файла", "Файл успешно сохранен по пути:\n" + fullPath, "Ок");
    }
}

void raspisanie::on_pushButton_7_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Открыть файл", QString(), "Текстовые файлы (*.txt);;Все файлы (*)");

    if (!fileName.isEmpty()) {
        currentFileName = fileName;
        loadTableData();

        QFileInfo fileInfo(currentFileName);
        QString fullPath = fileInfo.absoluteFilePath();

        QMessageBox::information(this, "Загрузка файла", "Файл успешно загружен из пути:\n" + fullPath, "Ок");
    }
}

void raspisanie::on_pushButton_8_clicked()
{
    // Выводим вопрос пользователю
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Подтверждение", "Вы уверены, что хотите очистить таблицу?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        // Если пользователь выбрал "Да", очищаем таблицу
        clearTable();
        QMessageBox::information(this, "Очистка таблицы", "Таблица успешно очищена", "Ок");
    }
    saveTableData();
    // Иначе, пользователь выбрал "Нет" и ничего не происходит
}

void raspisanie::clearTable()
{
    // Очистка данных в модели
    model->clear();

    // Пересоздание модели
    model = new QStandardItemModel(6, 6, this);

    // Повторная настройка таблицы
    setupTable();
}

void raspisanie::on_pushButton_9_clicked()
{
    close();
}
