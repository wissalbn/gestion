#ifndef CATEGORIE_H
#define CATEGORIE_H
#include <QSqlDatabase>


class Categorie
{
public:
    Categorie(const QSqlDatabase& database);
    void creerCategorie();
};

#endif // CATEGORIE_H
