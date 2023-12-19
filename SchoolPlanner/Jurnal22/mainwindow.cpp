#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwin.h"
#include "help.h"
#include <QMessageBox>
#include <QLineEdit>
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFile>
#include <QDate>
#include <QDebug>
#include <QPixmap>
#include <QStyledItemDelegate>
#include <QTextDocument>
#include <QPainter>
#include <QAbstractItemView>
#include <QTextEdit>

// Класс для обработки многострочного текста в ячейке таблицы
class MultiLineDelegate : public QStyledItemDelegate {
public:
    MultiLineDelegate(QObject* parent = nullptr) : QStyledItemDelegate(parent) {}

    // Создание редактора для ячейки с многострочным текстом
    QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (index.column() == 2) {  // Задание
            QTextEdit* editor = new QTextEdit(parent);
            editor->setWordWrapMode(QTextOption::WordWrap);
            return editor;
        }
        return QStyledItemDelegate::createEditor(parent, option, index);
    }

    // Установка данных редактора при открытии
    void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (index.column() == 2) {  // Задание
            QTextEdit* textEdit = qobject_cast<QTextEdit*>(editor);
            if (textEdit)
                textEdit->setPlainText(index.model()->data(index, Qt::EditRole).toString());
        } else {
            QStyledItemDelegate::setEditorData(editor, index);
        }
    }

    // Установка данных в модель при сохранении изменений
    void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (index.column() == 2) {  // Задание
            QTextEdit* textEdit = qobject_cast<QTextEdit*>(editor);
            if (textEdit)
                model->setData(index, textEdit->toPlainText(), Qt::EditRole);
        } else {
            QStyledItemDelegate::setModelData(editor, model, index);
        }
    }
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Загрузка изображения
    QPixmap pix(":/resource/school.png");
    ui->image123->setPixmap(pix);
    ui->image123->setFixedSize(pix.size());

    ui->image123->setPixmap(pix);




    // Инициализация базы данных
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./testDB5.db");
    if (db.open()) {
        qDebug("Database opened successfully");
    } else {
        qDebug("Failed to open the database");
    }

    // Создание таблицы в базе данных
    query = new QSqlQuery(db);
    query->exec("PRAGMA foreign_keys = ON;");
    query->exec("CREATE TABLE Jornal( Id INTEGER PRIMARY KEY AUTOINCREMENT, Предмет TEXT, Задача TEXT, Дата DATA);");

    // Создание модели таблицы и настройка ее параметров
    model = new QSqlTableModel(this, db);
    model->setTable("Jornal");
    model->select();
    model->setHeaderData(257, Qt::Horizontal, Qt::UserRole + 1);
    model->setHeaderData(258, Qt::Horizontal, Qt::UserRole + 2);
    model->setHeaderData(261, Qt::Horizontal, Qt::UserRole + 5);

    // Установка обработчика сортировки
    connect(ui->tableView->horizontalHeader(), &QHeaderView::sectionClicked, this, &MainWindow::onTableHeaderClicked);

    // Создание форм для редактирования и отображения справки
    editForm = new SecondWin();
    editForm->setParent(this, Qt::Window);
    editForm->setModel(model);

    connect(editForm, &SecondWin::UT, this, &MainWindow::UpdateTable);
    editForm2 = new help();
    editForm2->setParent(this, Qt::Window);

    // Установка модели в таблицу
    ui->tableView->setModel(model);

    // Установка стилей для таблицы и заголовков
    ui->tableView->setStyleSheet("QTableView { background-color: rgb(245, 245, 255); color: black; }");
    ui->tableView->horizontalHeader()->setStyleSheet("QHeaderView::section:all { background-color: rgb(200, 200, 255); color: black; }");

    // Устанавливаем делегат для многострочного текста в ячейке
    MultiLineDelegate *multiLineDelegate = new MultiLineDelegate();
    ui->tableView->setItemDelegateForColumn(2, multiLineDelegate); // 2 - индекс столбца "Задание"

    // Разрешаем выделение по строкам
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setItemDelegateForColumn(2, new MultiLineDelegate(this));

    // Автоматически подстраиваем высоту строк под содержимое
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    // Ограничение по ширине для столбца "Задание"
    ui->tableView->setColumnWidth(2, 350);

    // Установка обработчика изменения текста в строке поиска
    connect(ui->lineEditSearch, &QLineEdit::textChanged, this, &MainWindow::onSearchTextChangedCustom);

    setWindowIcon(QIcon());
}

void MainWindow::onSearchTextChangedCustom(const QString &text)
{
    // Вызываем метод фильтрации при изменении текста в строке поиска
    filterTable(text);
}

void MainWindow::filterTable(const QString &filter)
{
    // Фильтруем данные в модели по введенному тексту
    model->setFilter(QString("Предмет LIKE '%%1%' OR Задание LIKE '%%1%' OR Дата LIKE '%%1%'").arg(filter));
    model->select();
}

void MainWindow::onTableHeaderClicked(int logicalIndex)
{
    if (logicalIndex >= 0)
    {
        // Определение направления сортировки (по возрастанию или убыванию)
        Qt::SortOrder sortOrder = ui->tableView->horizontalHeader()->sortIndicatorOrder();

        // Установка параметров сортировки в модели
        model->sort(logicalIndex, sortOrder);

        // Вызов select() для применения сортировки к данным
        model->select();
    }
}

void MainWindow::on_pushButton_3_clicked() // кнопка выхода
{
    close();
}

void MainWindow::on_pushButton_2_clicked() // кнопка удаления
{
    model->removeRow(row); // Удаление записи из модели (только из окна вывода)
}

void MainWindow::on_pushButton_4_clicked() // кнопка "Обновить"
{
    model->submitAll(); // Фиксация изменений в базе данных
    model->select(); // Обновление отображения данных
}

void MainWindow::on_pushButton_clicked()
{
    editForm->show();
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}

void MainWindow::on_commandLinkButton_clicked()
{
    editForm2->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::UpdateTable()
{
    model->select();
}

void MainWindow::on_pushButton_5_clicked()
{
    editForm3.show();
}
