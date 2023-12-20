#include "categorie.h"
#include <QDebug>
#include <QFile>
#include <QIODevice>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTextStream>

Categorie::Categorie(const QSqlDatabase &database)
{
    if (database.isOpen()) {
        qDebug() << "Base de données ouverte.";
    } else {
        qDebug() << "La base de données n'est pas ouverte.";
    }
}

void Categorie::creerCategorie()
{
    QSqlQuery query;
    if (query.exec("CREATE TABLE IF NOT EXISTS clients (id_categorie INT PRIMARY KEY,nom_categorie "
                   "TEXT)")) {
        qDebug() << "Table 'clients' créée avec succès.";
        query.exec("INSERT INTO commandes VALUES(1,'Sport')");
        query.exec("INSERT INTO commandes VALUES(2,'Beauté')");
        query.exec("INSERT INTO commandes VALUES(3,'Electronique')");
        qDebug() << "valeurs insérés!";
    }

    else {
        qDebug() << "Erreur lors de la création de la table 'Categorie':";
    }
}
