/********************************************************************************
** Form generated from reading UI file 'doctorview.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORVIEW_H
#define UI_DOCTORVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoctorView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtSearch;
    QPushButton *btSearch;
    QPushButton *btAdd;
    QPushButton *btDelete;
    QPushButton *btEdit;
    QTableView *tableView;

    void setupUi(QWidget *DoctorView)
    {
        if (DoctorView->objectName().isEmpty())
            DoctorView->setObjectName("DoctorView");
        DoctorView->resize(843, 578);
        verticalLayout = new QVBoxLayout(DoctorView);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        txtSearch = new QLineEdit(DoctorView);
        txtSearch->setObjectName("txtSearch");

        horizontalLayout->addWidget(txtSearch);

        btSearch = new QPushButton(DoctorView);
        btSearch->setObjectName("btSearch");

        horizontalLayout->addWidget(btSearch);

        btAdd = new QPushButton(DoctorView);
        btAdd->setObjectName("btAdd");

        horizontalLayout->addWidget(btAdd);

        btDelete = new QPushButton(DoctorView);
        btDelete->setObjectName("btDelete");

        horizontalLayout->addWidget(btDelete);

        btEdit = new QPushButton(DoctorView);
        btEdit->setObjectName("btEdit");

        horizontalLayout->addWidget(btEdit);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(DoctorView);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        retranslateUi(DoctorView);

        QMetaObject::connectSlotsByName(DoctorView);
    } // setupUi

    void retranslateUi(QWidget *DoctorView)
    {
        DoctorView->setWindowTitle(QCoreApplication::translate("DoctorView", "\345\214\273\347\224\237\347\256\241\347\220\206", nullptr));
        txtSearch->setPlaceholderText(QCoreApplication::translate("DoctorView", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215\350\277\233\350\241\214\346\237\245\346\211\276", nullptr));
        btSearch->setText(QCoreApplication::translate("DoctorView", "\346\237\245\346\211\276", nullptr));
        btAdd->setText(QCoreApplication::translate("DoctorView", "\346\267\273\345\212\240", nullptr));
        btDelete->setText(QCoreApplication::translate("DoctorView", "\345\210\240\351\231\244", nullptr));
        btEdit->setText(QCoreApplication::translate("DoctorView", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoctorView: public Ui_DoctorView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORVIEW_H
