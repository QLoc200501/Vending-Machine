/********************************************************************************
** Form generated from reading UI file 'bill.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILL_H
#define UI_BILL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bill
{
public:
    QLabel *label;
    QPushButton *btn_QRcode_Barcode;
    QPushButton *btn_Staffcard;
    QPushButton *btn_MoMo;
    QPushButton *btn_Cancel;

    void setupUi(QWidget *Bill)
    {
        if (Bill->objectName().isEmpty())
            Bill->setObjectName(QString::fromUtf8("Bill"));
        Bill->resize(420, 94);
        label = new QLabel(Bill);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 0, 331, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Cascadia Mono Light"));
        font.setPointSize(13);
        font.setBold(true);
        label->setFont(font);
        btn_QRcode_Barcode = new QPushButton(Bill);
        btn_QRcode_Barcode->setObjectName(QString::fromUtf8("btn_QRcode_Barcode"));
        btn_QRcode_Barcode->setGeometry(QRect(10, 50, 101, 29));
        QFont font1;
        font1.setBold(true);
        btn_QRcode_Barcode->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../icon/QRcode_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_QRcode_Barcode->setIcon(icon);
        btn_Staffcard = new QPushButton(Bill);
        btn_Staffcard->setObjectName(QString::fromUtf8("btn_Staffcard"));
        btn_Staffcard->setGeometry(QRect(130, 50, 91, 29));
        btn_Staffcard->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../icon/Staff_Card_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Staffcard->setIcon(icon1);
        btn_MoMo = new QPushButton(Bill);
        btn_MoMo->setObjectName(QString::fromUtf8("btn_MoMo"));
        btn_MoMo->setGeometry(QRect(240, 50, 81, 29));
        btn_MoMo->setFont(font1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../icon/momo_icon_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_MoMo->setIcon(icon2);
        btn_MoMo->setIconSize(QSize(30, 25));
        btn_Cancel = new QPushButton(Bill);
        btn_Cancel->setObjectName(QString::fromUtf8("btn_Cancel"));
        btn_Cancel->setGeometry(QRect(340, 50, 71, 29));
        btn_Cancel->setFont(font1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../icon/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Cancel->setIcon(icon3);
        btn_Cancel->setIconSize(QSize(18, 18));

        retranslateUi(Bill);

        QMetaObject::connectSlotsByName(Bill);
    } // setupUi

    void retranslateUi(QWidget *Bill)
    {
        Bill->setWindowTitle(QApplication::translate("Bill", "Form", nullptr));
        label->setText(QApplication::translate("Bill", "Please select payment method!", nullptr));
        btn_QRcode_Barcode->setText(QApplication::translate("Bill", "QR/Barcode", nullptr));
        btn_Staffcard->setText(QApplication::translate("Bill", "Staff Card", nullptr));
        btn_MoMo->setText(QApplication::translate("Bill", "MoMo", nullptr));
        btn_Cancel->setText(QApplication::translate("Bill", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bill: public Ui_Bill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILL_H
