/********************************************************************************
** Form generated from reading UI file 'departmentview.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPARTMENTVIEW_H
#define UI_DEPARTMENTVIEW_H

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

class Ui_DepartmentView
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

    void setupUi(QWidget *DepartmentView)
    {
        if (DepartmentView->objectName().isEmpty())
            DepartmentView->setObjectName("DepartmentView");
        DepartmentView->resize(909, 621);
        verticalLayout = new QVBoxLayout(DepartmentView);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        txtSearch = new QLineEdit(DepartmentView);
        txtSearch->setObjectName("txtSearch");

        horizontalLayout->addWidget(txtSearch);

        btSearch = new QPushButton(DepartmentView);
        btSearch->setObjectName("btSearch");

        horizontalLayout->addWidget(btSearch);

        btAdd = new QPushButton(DepartmentView);
        btAdd->setObjectName("btAdd");

        horizontalLayout->addWidget(btAdd);

        btDelete = new QPushButton(DepartmentView);
        btDelete->setObjectName("btDelete");

        horizontalLayout->addWidget(btDelete);

        btEdit = new QPushButton(DepartmentView);
        btEdit->setObjectName("btEdit");

        horizontalLayout->addWidget(btEdit);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(DepartmentView);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        retranslateUi(DepartmentView);

        QMetaObject::connectSlotsByName(DepartmentView);
    } // setupUi

    void retranslateUi(QWidget *DepartmentView)
    {
        DepartmentView->setWindowTitle(QCoreApplication::translate("DepartmentView", "\347\247\221\345\256\244\347\256\241\347\220\206", nullptr));
        txtSearch->setPlaceholderText(QCoreApplication::translate("DepartmentView", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215\350\277\233\350\241\214\346\237\245\346\211\276", nullptr));
        btSearch->setText(QCoreApplication::translate("DepartmentView", "\346\237\245\346\211\276", nullptr));
        btAdd->setText(QCoreApplication::translate("DepartmentView", "\346\267\273\345\212\240", nullptr));
        btDelete->setText(QCoreApplication::translate("DepartmentView", "\345\210\240\351\231\244", nullptr));
        btEdit->setText(QCoreApplication::translate("DepartmentView", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DepartmentView: public Ui_DepartmentView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPARTMENTVIEW_H
