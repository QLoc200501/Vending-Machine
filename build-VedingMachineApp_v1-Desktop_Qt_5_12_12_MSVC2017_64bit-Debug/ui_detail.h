/********************************************************************************
** Form generated from reading UI file 'detail.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAIL_H
#define UI_DETAIL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_detail
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *ID_lable;
    QLabel *name_lable;
    QLabel *price_lable;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BTN_OK;
    QPushButton *BTN_cancel;
    QPushButton *BTN_OK_2;
    QLabel *IMG_view;

    void setupUi(QWidget *detail)
    {
        if (detail->objectName().isEmpty())
            detail->setObjectName(QString::fromUtf8("detail"));
        detail->resize(268, 347);
        horizontalLayoutWidget = new QWidget(detail);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 190, 231, 108));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Black"));
        font.setPointSize(11);
        font.setBold(true);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ID_lable = new QLabel(horizontalLayoutWidget);
        ID_lable->setObjectName(QString::fromUtf8("ID_lable"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Script"));
        font1.setPointSize(14);
        font1.setBold(true);
        ID_lable->setFont(font1);

        verticalLayout_2->addWidget(ID_lable);

        name_lable = new QLabel(horizontalLayoutWidget);
        name_lable->setObjectName(QString::fromUtf8("name_lable"));
        name_lable->setFont(font1);

        verticalLayout_2->addWidget(name_lable);

        price_lable = new QLabel(horizontalLayoutWidget);
        price_lable->setObjectName(QString::fromUtf8("price_lable"));
        price_lable->setFont(font1);

        verticalLayout_2->addWidget(price_lable);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayoutWidget_2 = new QWidget(detail);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 300, 250, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BTN_OK = new QPushButton(horizontalLayoutWidget_2);
        BTN_OK->setObjectName(QString::fromUtf8("BTN_OK"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        BTN_OK->setFont(font2);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../icon/select-icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        BTN_OK->setIcon(icon);

        horizontalLayout_2->addWidget(BTN_OK);

        BTN_cancel = new QPushButton(horizontalLayoutWidget_2);
        BTN_cancel->setObjectName(QString::fromUtf8("BTN_cancel"));
        BTN_cancel->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../icon/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        BTN_cancel->setIcon(icon1);
        BTN_cancel->setIconSize(QSize(18, 20));

        horizontalLayout_2->addWidget(BTN_cancel);

        BTN_OK_2 = new QPushButton(horizontalLayoutWidget_2);
        BTN_OK_2->setObjectName(QString::fromUtf8("BTN_OK_2"));
        BTN_OK_2->setFont(font2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../icon/pay.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        BTN_OK_2->setIcon(icon2);
        BTN_OK_2->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(BTN_OK_2);

        IMG_view = new QLabel(detail);
        IMG_view->setObjectName(QString::fromUtf8("IMG_view"));
        IMG_view->setGeometry(QRect(20, 10, 231, 181));
        IMG_view->setFrameShape(QFrame::Box);
        IMG_view->setScaledContents(true);

        retranslateUi(detail);

        QMetaObject::connectSlotsByName(detail);
    } // setupUi

    void retranslateUi(QWidget *detail)
    {
        detail->setWindowTitle(QApplication::translate("detail", "Good Detail", nullptr));
        label_2->setText(QApplication::translate("detail", "ID", nullptr));
        label->setText(QApplication::translate("detail", "Name", nullptr));
        label_3->setText(QApplication::translate("detail", "Price", nullptr));
        ID_lable->setText(QString());
        name_lable->setText(QString());
        price_lable->setText(QString());
        BTN_OK->setText(QApplication::translate("detail", "Select", nullptr));
        BTN_cancel->setText(QApplication::translate("detail", "Cancel", nullptr));
        BTN_OK_2->setText(QApplication::translate("detail", "Pay", nullptr));
        IMG_view->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class detail: public Ui_detail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAIL_H
