#ifndef PRODUIT_H
#define PRODUIT_H
#include <QSqlDatabase>

class Produit
{
public:
    Produit(const QSqlDatabase& database);
    void creerTableProduit();
};

#endif // PRODUIT_H
