#include "example.h"
#include <QApplication>


//comentario desde el main
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Example w;
    w.show();

    return a.exec();
}
