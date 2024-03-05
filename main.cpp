#include "transparentwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TransparentWindow w;
    w.show();
    return a.exec();
}
