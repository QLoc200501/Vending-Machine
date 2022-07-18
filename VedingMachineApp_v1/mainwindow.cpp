#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "G_var.h"

QString gID;
int status;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_Start_clicked()
{
    list.show();
    this->hide();
}

