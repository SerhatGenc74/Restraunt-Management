#ifndef CONNECTION_H
#define CONNECTION_H

#include <QtSql/QSqlDriver>
#include <QtSql/QSqlDatabase>

class Connection
{
public:
    ~Connection();

    static Connection &instance();
    QSqlDatabase getConnection() const;
    bool connection();
private:
    Connection(); // Yapıcı fonksiyon gizli
    Connection(const Connection&) = delete; // Kopyalama engellendi
    Connection& operator=(const Connection&) = delete; // Atama engellendi

    QSqlDatabase db;

};

#endif // CONNECTION_H
