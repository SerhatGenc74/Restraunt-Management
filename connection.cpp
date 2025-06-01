#include "connection.h"

Connection::Connection() {
    db = QSqlDatabase::addDatabase("QPSQL");
}

Connection::~Connection(){}

Connection &Connection::instance()
{
    static Connection conn;
    return conn;
}


bool Connection::connection()
{
    db.setHostName("localhost");
    db.setDatabaseName("RestrauntDB");
    db.setUserName("serhat");
    db.setPassword("1475");
    db.setPort(5432);
    bool ok = db.open();
    return ok;
}

QSqlDatabase Connection::getConnection() const
{
    return db;
}
