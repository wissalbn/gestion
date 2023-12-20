#include "db.h"
#include "commandes.h"
#include <QDebug>
#include <QtSql>
#include <QApplication>
#include <QSqlDatabase>
#include "commande.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Db w; w.getDatabase(); w.show();
    commande c; c.show();



    return a.exec();

}
