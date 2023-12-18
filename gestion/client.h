#ifndef CLIENT_H
#define CLIENT_H
#include <QSqlDatabase>

class Client
{
public:
    Client(const QSqlDatabase &database);
    void creerTableClient();
};

#endif // CLIENT_H
