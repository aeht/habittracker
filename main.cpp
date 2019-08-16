#include "habittracker.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HabitTracker w;
    w.show();

    return a.exec();
}
