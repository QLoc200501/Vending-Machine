#include "bill.h"
#include "ui_bill.h"
#include "G_var.h"
Bill::Bill(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Bill)
{
    ui->setupUi(this);
}

Bill::~Bill()
{
    delete ui;
}




void Bill::on_btn_Cancel_clicked()
{
    this->hide();
}

