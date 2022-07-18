#ifndef LISTGOODS_H
#define LISTGOODS_H

#include <QWidget>
#include "detail.h"
#include "bill.h"
namespace Ui {
class ListGoods;
}

class ListGoods : public QWidget
{
    Q_OBJECT

public:
    explicit ListGoods(QWidget *parent = nullptr);
    ~ListGoods();
    QPixmap show1(QString gID);


private slots:
    void on_btn_1_1_clicked();

    void on_btn_1_2_clicked();

    void on_btn_1_3_clicked();

    void on_btn_1_4_clicked();

    void on_btn_1_5_clicked();

    void on_btn_1_6_clicked();

    void on_btn_1_7_clicked();

    void on_btn_1_8_clicked();

    void on_btn_1_9_clicked();

    void on_btn_1_10_clicked();

    void on_spb_count_1_valueChanged(int arg1);

    void on_spb_count_2_valueChanged(int arg1);

    void on_spb_count_3_valueChanged(int arg1);

    void on_spb_count_4_valueChanged(int arg1);

    void on_pushButton_62_clicked();

    void on_pushButton_61_clicked();

public slots:
    void setgood();
    void setTotal();
private:
    Ui::ListGoods *ui;
    detail d;
    Bill bill;
    Ui::detail *detail;
signals:
};

#endif // LISTGOODS_H
