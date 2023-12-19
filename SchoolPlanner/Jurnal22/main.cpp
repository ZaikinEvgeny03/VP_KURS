#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QtWidgets>

void loadModules(QSplashScreen* psplash){
    QTime time;
    time.start();

    for (int i = 0; i < 100; ) {
        if (time.elapsed() > 60) {
            time.start();
            ++i;
        }

        psplash->showMessage("\n\nЗагрузка...: "
                             + QString::number(i) + "%",
                             Qt::AlignTop | Qt::AlignHCenter, // Установите выравнивание вверх и по центру
                             Qt::black
                             );
        qApp->processEvents();
    }
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen splash(QPixmap("D:\\QTCreator\\Jurnal22\\1234.jpg"));
    splash.show();
    MainWindow w;
    loadModules(&splash);
    splash.finish(&w);
    w.show();

    return a.exec();
}




