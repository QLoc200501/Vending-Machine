#include "detail.h"
#include "ui_detail.h"
#include "G_var.h"
#include "listgoods.h"
detail::detail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::detail)
{

   ui->setupUi(this);
   connect(ui->BTN_OK,SIGNAL(clicked()),this,SLOT(btn_ok_change()));
}

detail::~detail()
{

    delete ui;

}

void detail::btn_ok_change(){
   emit this->btn_oke_status();
}

void detail::Show_Bill()
{
    qDebug() << "detailstart:"<<gID;
    ui->ID_lable->setText(gID);

    sql s;
    s.connect();
    QSqlQuery query;
    QString view = " SELECT * From VM WHERE ID = '"+gID+"' ";
    query.prepare(view);
    query.exec();
    while(query.next())
    {
        ui->name_lable->setText(query.value(1).toString());
        ui->price_lable->setText(query.value(2).toString() + " VND");   
    }

    QString IMG = " SELECT hex(IMG) FROM VM WHERE ID = '"+gID+"' ";
    query.prepare(IMG);
    query.exec();
    while(query.next())
    {
        QByteArray imgview= QByteArray::fromHex(query.value(0).toByteArray());
        QPixmap pix;
        pix.loadFromData(imgview);
        ui->IMG_view->setPixmap(pix);
    }
    s.Disconnect();

}


void detail::on_BTN_OK_clicked()
{
     this->hide();
}

void detail::on_BTN_cancel_clicked()
{
    this->clear();
    this->hide();
    status =0;
}

void detail::clear()
{
    gID = "0";
    qDebug() << "detailreset:"<<gID;
    ui->ID_lable->setText(NULL);
    ui->price_lable->setText(NULL);
    ui->name_lable->setText(NULL);
    QPixmap pix_clear;
    ui->IMG_view->setPixmap(pix_clear);

}

