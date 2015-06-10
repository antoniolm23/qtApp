#include "balance.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Balance w;
    w.show();

    return a.exec();
}
