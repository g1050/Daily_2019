//Main.cpp
#include "mainwindow.h"
//#include "mapwidget.h"
#include <QApplication>
#include <QFont>
#include <QDebug>
#include "mydialog.h"
#include "gdialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QFont font("ARPL KaitiM GB", 12);
//    font.setBold (true);
//    a.setFont (font);

//    qDebug() << "Run............";
//    MainWindow w;
//    w.show ();
    GDialog dialog;
    dialog.show();

    return a.exec();
}
