#include "pintestermainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PINtesterMainWindow w;
    w.show();

    return a.exec();
}
