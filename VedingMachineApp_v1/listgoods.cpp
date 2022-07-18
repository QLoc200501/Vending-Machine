#include "listgoods.h"
#include "qsqlquery.h"
#include "sql.h"
#include "ui_detail.h"
#include "ui_listgoods.h"
#include "G_var.h"

ListGoods::ListGoods(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListGoods)
{

    QPixmap pix;
    ui->setupUi(this);

    connect(&d,SIGNAL(btn_oke_status()),this,SLOT(setgood()));

    pix = this->show1("1");
    ui->btn_1_1->setIcon(pix);
    ui->btn_1_1->setIconSize(QSize(40,40));

    pix = this->show1("2");
    ui->btn_1_2->setIcon(pix);
    ui->btn_1_2->setIconSize(QSize(40,40));

    pix = this->show1("3");
    ui->btn_1_3->setIcon(pix);
    ui->btn_1_3->setIconSize(QSize(40,40));

    pix = this->show1("4");
    ui->btn_1_4->setIcon(pix);
    ui->btn_1_4->setIconSize(QSize(40,40));

    pix = this->show1("5");
    ui->btn_1_5->setIcon(pix);
    ui->btn_1_5->setIconSize(QSize(40,40));

    pix = this->show1("6");
    ui->btn_1_6->setIcon(pix);
    ui->btn_1_6->setIconSize(QSize(40,40));

    pix = this->show1("7");
    ui->btn_1_7->setIcon(pix);
    ui->btn_1_7->setIconSize(QSize(40,40));

    pix = this->show1("8");
    ui->btn_1_8->setIcon(pix);
    ui->btn_1_8->setIconSize(QSize(40,40));

    pix = this->show1("9");
    ui->btn_1_9->setIcon(pix);
    ui->btn_1_9->setIconSize(QSize(40,40));

    pix = this->show1("10");
    ui->btn_1_10->setIcon(pix);
    ui->btn_1_10->setIconSize(QSize(40,40));

    pix = this->show1("11");
    ui->btn_2_1->setIcon(pix);
    ui->btn_2_1->setIconSize(QSize(40,40));

    pix = this->show1("12");
    ui->btn_2_2->setIcon(pix);
    ui->btn_2_2->setIconSize(QSize(40,40));

    pix = this->show1("13");
    ui->btn_2_3->setIcon(pix);
    ui->btn_2_3->setIconSize(QSize(40,40));

    pix = this->show1("14");
    ui->btn_2_4->setIcon(pix);
    ui->btn_2_4->setIconSize(QSize(40,40));

    pix = this->show1("15");
    ui->btn_2_5->setIcon(pix);
    ui->btn_2_5->setIconSize(QSize(40,40));

    pix = this->show1("16");
    ui->btn_2_6->setIcon(pix);
    ui->btn_2_6->setIconSize(QSize(40,40));

    pix = this->show1("17");
    ui->btn_2_7->setIcon(pix);
    ui->btn_2_7->setIconSize(QSize(40,40));

    pix = this->show1("18");
    ui->btn_2_8->setIcon(pix);
    ui->btn_2_8->setIconSize(QSize(40,40));

    pix = this->show1("19");
    ui->btn_2_9->setIcon(pix);
    ui->btn_2_9->setIconSize(QSize(40,40));

    pix = this->show1("20");
    ui->btn_2_10->setIcon(pix);
    ui->btn_2_10->setIconSize(QSize(40,40));


}
QPixmap ListGoods:: show1(QString gID)
{
   sql s;

   s.connect();
   QSqlQuery query;
   QString IMG = " SELECT hex(IMG) FROM VM WHERE ID = '"+gID+"' ";
   query.prepare(IMG);
   query.exec();
   query.next();
       QByteArray imgview= QByteArray::fromHex(query.value(0).toByteArray());
       QPixmap pix;
       pix.loadFromData(imgview);
   s.Disconnect();
   return pix;

}

ListGoods::~ListGoods()
{
    delete ui;
}

void ListGoods::setgood(){

    sql s;
    s.connect();
    QSqlQuery query;
    QString view = " SELECT * From VM WHERE ID = '"+gID+"' ";
    query.prepare(view);
    query.exec();
    query.next();
    if(ui->lne_Info_1->text() == NULL){
        ui->lne_Info_1->setText(query.value(1).toString());
        ui->spb_count_1->setValue(1);
        ui->lne_Price_1->setText((QString::number(query.value(2).toInt())));
        setTotal();
    }
    else if(ui->lne_Info_2->text() == NULL){
        ui->lne_Info_2->setText(query.value(1).toString());
        ui->spb_count_2->setValue(1);
        ui->lne_Price_2->setText((QString::number(query.value(2).toInt())));
         setTotal();
    }
    else if(ui->lne_Info_3->text() == NULL){
        ui->lne_Info_3->setText(query.value(1).toString());
        ui->spb_count_3->setValue(1);
        ui->lne_Price_3->setText((QString::number(query.value(2).toInt())));
         setTotal();
    }
    else{
            ui->lne_Info_4->setText(query.value(1).toString());
            ui->spb_count_4->setValue(1);
            ui->lne_Price_4->setText((QString::number(query.value(2).toInt())));
             setTotal();
    }
    s.Disconnect();
}

void ListGoods::setTotal(){
    QString price1 = ui->lne_Price_1->text();
    QString price2 = ui->lne_Price_2->text();
    QString price3 = ui->lne_Price_3->text();
    QString price4 = ui->lne_Price_4->text();
    int count1 = ui->spb_count_1->value();
    int count2 = ui->spb_count_2->value();
    int count3 = ui->spb_count_3->value();
    int count4 = ui->spb_count_4->value();
    int TotalPrice = price1.toInt()*count1 +price2.toInt()*count2 + price3.toInt()*count3 + price4.toInt()*count4;
    ui->lne_Total->setText(QString::number(TotalPrice));
}

void ListGoods::on_btn_1_1_clicked()
{
    gID = "1";
    d.Show_Bill();
    d.show();

}


void ListGoods::on_btn_1_2_clicked()
{
    gID = "2";
    d.Show_Bill();
    d.show();
}


void ListGoods::on_btn_1_3_clicked()
{
    gID = "3";
    d.Show_Bill();
    d.show();
}


void ListGoods::on_btn_1_4_clicked()
{
    gID = "4";
    d.Show_Bill();
    d.show();
}


void ListGoods::on_btn_1_5_clicked()
{
    gID = "5";
    d.Show_Bill();
    d.show();
}


void ListGoods::on_btn_1_6_clicked()
{
    gID = "6";
    d.Show_Bill();
    d.show();
}


void ListGoods::on_btn_1_7_clicked()
{
    gID = "7";
    d.Show_Bill();
    d.show();
}


void ListGoods::on_btn_1_8_clicked()
{
    gID = "8";
    d.Show_Bill();
    d.show();
}


void ListGoods::on_btn_1_9_clicked()
{
    gID = "9";
    d.Show_Bill();
    d.show();
}



void ListGoods::on_btn_1_10_clicked()
{
    gID = "10";
    d.Show_Bill();
    d.show();
}


void ListGoods::on_spb_count_1_valueChanged(int arg1)
{
    setTotal();
}


void ListGoods::on_spb_count_2_valueChanged(int arg1)
{
    setTotal();
}


void ListGoods::on_spb_count_3_valueChanged(int arg1)
{
    setTotal();
}


void ListGoods::on_spb_count_4_valueChanged(int arg1)
{
    setTotal();
}


void ListGoods::on_pushButton_62_clicked()
{
    ui->lne_Info_1->clear();
    ui->lne_Info_2->clear();
    ui->lne_Info_3->clear();
    ui->lne_Info_4->clear();
    ui->spb_count_1->clear();
    ui->spb_count_2->clear();
    ui->spb_count_3->clear();
    ui->spb_count_4->clear();
    ui->lne_Price_1->clear();
    ui->lne_Price_2->clear();
    ui->lne_Price_3->clear();
    ui->lne_Price_4->clear();
    ui->lne_Total->clear();
}


void ListGoods::on_pushButton_61_clicked()
{
    bill.show();
}

