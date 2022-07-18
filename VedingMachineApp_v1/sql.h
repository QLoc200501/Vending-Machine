#ifndef SQL_H
#define SQL_H
#include<QString>
#include <QSqlDatabase>
#include <qdebug.h>
#include<QSqlQuery>
#define link_to_database "C:/Users/A C E R/Desktop/vendingmachine/VendingMachine_QtCreater/DATA.db"
class sql
{
public:
    sql();
    ~sql();

    bool connect ();
    void Disconnect ();
    QSqlDatabase getdata();


private:
    QSqlDatabase data;
};

#endif // SQL_H
