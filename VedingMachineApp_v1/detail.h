#ifndef DETAIL_H
#define DETAIL_H

#include <QWidget>
#include "qdebug.h"
#include <QMessageBox>
#include "sql.h"
#include <QString>
#include<QSqlQuery>
#include "bill.h"


namespace Ui {
class detail;
}

class detail : public QWidget
{
    Q_OBJECT

public:
    explicit detail(QWidget *parent = nullptr);
    ~detail();
    void Show_Bill();

private slots:
    void on_BTN_OK_clicked();
    void on_BTN_cancel_clicked();
    void btn_ok_change();
private:
    Ui::detail *ui;
    void clear();
    Bill bill;
signals:
    void btn_oke_status();

};

#endif // DETAIL_H
