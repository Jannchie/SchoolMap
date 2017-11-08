#include "mainwindow.h"
#include <QApplication>
#include <QFont>
#include <QDebug>
#include <QPixmap>
#include <QSplashScreen>
#include <QTextCodec>

int main(int argc, char *argv[])
{

    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);
    QApplication a(argc, argv);

    QPixmap pixmap(":/welcome.png");
    QSplashScreen splash(pixmap);
    splash.show ();
    MainWindow w;
    w.show();

    splash.finish (&w);
    return a.exec();
}
