#include "loadPage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loadPage w;
    w.show();
    return a.exec();
}
