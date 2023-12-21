
#include "commandes.h"
#include <QSqlQuery>
#include <QDebug>

Commandes::Commandes(const QSqlDatabase& database)
{
    if (database.isOpen()) {
        qDebug() << "Base de données ouverte.";
    } else {
        qDebug() << "La base de données n'est pas ouverte.";
    }
}

void Commandes::creerTableCommandes()
{

    QSqlQuery query;
    if (query.exec("CREATE TABLE IF NOT EXISTS commandes (numCmd INT PRIMARY KEY, datCmd TEXT,Idclient INT,montant REAL,etat TEXT,FOREIGN KEY(Idclient) REFERENCES clients(idClient))"))
    {
        //query.exec("INSERT INTO commandes (numCmd, datCmd, Idclient, montant, etat) VALUES (5, '2023-01-05', 105, 90.0, 'Livré')");
    }
     else {
        qDebug() << "Erreur lors de la création de la table 'commandes':";
    }
    //if (query.exec("CREATE TABLE IF NOT EXISTS commandes (numCmd INT PRIMARY KEY, datCmd TEXT,Idclient INT,montant REAL,etat TEXT,FOREIGN KEY(Idclient) REFERENCES clients(idClient))"))
    //{}
}
