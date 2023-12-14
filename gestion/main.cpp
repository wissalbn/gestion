#include "db.h"
#include "commandes.h"
#include <QDebug>
#include <QtSql>
#include <QApplication>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Db w; w.getDatabase(); w.show();



    return a.exec();

}
