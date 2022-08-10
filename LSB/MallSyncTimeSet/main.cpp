#include "mallsynctimeset.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MallSyncTimeSet w;
    w.show();
    return a.exec();
}
