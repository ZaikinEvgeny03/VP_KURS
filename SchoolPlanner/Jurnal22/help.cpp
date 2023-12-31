#include "help.h"
#include "ui_help.h"

help::help(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::help)
{
    ui->setupUi(this);

    QString helpText = "<html>"
                       "<b>Руководство пользователя</b><br><br>"
                       "<u>Школьный планер</u><br><br>"
                       "<b>Начало работы:</b><br>"
                       "Чтобы создать запись в школьном планере, "
                       "кликните мышкой по кнопке \"Добавить\". После этого "
                       "откроется окно <br>для заполнения данных. В открывшемся окне:"
                       " можно написать информацию о задаче. После,"
                       "нажать кнопку \"Cохранить\", <br>чтобы сохранить информацию,<br>"
                       "и кнопку \"Ок\", чтобы подтвердить свои действия.<br><br>"
                       "<b>Редактирование записей:</b><br>"
                       "Вы можете изменить каждый из столбцов,"
                       "для этого нужно кликнуть мышкой <br>на нужную вам ячейку, "
                       "вписать значение и нажать кнопку \"Enter\".<br><br>"
                       "<b>Удаление записей:</b><br>"
                       "Для удаления записи в панели меню таблицы,<br>"
                       "кликнуть мышкой по любой ячейке записи, которую вы хотите удалить<br><br>"
                       "<b>Работа с расписанием:</b><br>"
                       "<u>Просмотр расписания:</u><br>"
                       "Чтобы увидеть расписание, кликните по кнопке \"Расписание\".<br><br>"
                       "<u>Добавление урока:</u><br>"
                       "1. В открывшемся окне, дважды кликните по нужной ячейке.<br>"
                       "2. Введите название урока и нажмите Enter.<br><br>"
                       "<u>Переключение недели:</u><br>"
                       "Если расписание меняется по неделям, используйте вторую таблицу.<br>"
                       "Для переключения между таблицами, кликните по кнопке \"1\" или \"2\".<br><br>"
                       "<u>Сохранение изменений:</u><br>"
                       "- Сохраните изменения, кликнув на галочку.<br>"
                       "- Отмените изменения, кликнув по крестику.<br><br>"
                       "<u>Сохранение и загрузка таблиц:</u><br>"
                       "1. Сохраните таблицы в конкретное место, выбрав путь и подтвердив.<br>"
                       "2. Полностью очистите таблицу, кликнув по \"Очистить\" и подтвердив.<br>"
                       "3. Для загрузки файлов таблиц, используйте кнопку \"Загрузить\".<br><br>"
                       "<u>Выход в главное меню:</u><br>"
                       "Для выхода в главное меню, нажмите \"Выйти\".<br></html>";

    ui->label->setText(helpText); // Установка текста в QLabel
}

help::~help()
{
    delete ui;
}
