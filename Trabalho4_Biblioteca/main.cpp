#include "mainwindow.h"
#include <QApplication>
#include <QMetaType>
#include "livro.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qRegisterMetaType<Livro>("Livro");
    MainWindow w;
    w.show();
    return a.exec();
}
