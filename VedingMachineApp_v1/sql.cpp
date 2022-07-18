#include "sql.h"

sql::sql()
{
    data = QSqlDatabase ::addDatabase("QSQLITE");
    data.setDatabaseName(link_to_database);
    qDebug()     << "Constructor";
    if (!data.open())  qDebug()     << "can not connect to database" ;
    else qDebug()     << "connect to database" ;
}

sql::~sql()
{

}

bool sql::connect (){
     qDebug() << "connected..." ;
    return data.open();
}

void sql::Disconnect (){
    qDebug() << "Disconnected..." ;
    data.close();
}

QSqlDatabase sql::getdata(){
    return data;
}
