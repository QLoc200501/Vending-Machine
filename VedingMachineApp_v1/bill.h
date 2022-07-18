#ifndef BILL_H
#define BILL_H

#include <QWidget>
#include <QWidget>
#include "qdebug.h"
#include <QMessageBox>
#include "sql.h"
#include <QString>
#include<QSqlQuery>


namespace Ui {
class Bill;
}

class Bill : public QWidget
{
    Q_OBJECT

public:
    explicit Bill(QWidget *parent = nullptr);
    ~Bill();

private slots:


    void on_btn_Cancel_clicked();

private:
    Ui::Bill *ui;
};

#endif // BILL_H
