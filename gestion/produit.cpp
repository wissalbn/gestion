#include "produit.h"
#include <QSqlQuery>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QSqlDatabase>
#include <QIODevice>
#include <QSqlError>

Produit::Produit(const QSqlDatabase& database) {
    if (database.isOpen()) {
        qDebug() << "Base de données ouverte.";
    } else {
        qDebug() << "La base de données n'est pas ouverte.";
    }
}
void Produit::creerTableProduit()
{

    QSqlQuery query;
    if (query.exec("CREATE TABLE IF NOT EXISTS produit (reference_produit INT PRIMARY KEY,libelle TEXT, prix_HT REAL, description TEXT , id_categorie INT, quantite INT, FOREIGN KEY(id_categorie) REFERENCES categories(id_categorie))")) {
        qDebug() << "Table 'produit' créée avec succès.";
           query.exec("INSERT INTO produit (reference_produit, libelle, prix_HT, description, id_categorie, quantite) VALUES(1023, 'Caméra d action 4K', 199.99, 'Caméra pour enregistrements haute résolution', 3, 12)");

            qDebug()<<"valeurs insérés!"<< query.lastError().text();


    } else {
        qDebug() << "Erreur lors de la création de la table 'produit':"<< query.lastError().text();
    }
}

