/********************************************************************************
** Form generated from reading UI file 'masterview.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERVIEW_H
#define UI_MASTERVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasterView
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btBack;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btLogout;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *MasterView)
    {
        if (MasterView->objectName().isEmpty())
            MasterView->setObjectName("MasterView");
        MasterView->resize(689, 469);
        verticalLayout_2 = new QVBoxLayout(MasterView);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btBack = new QPushButton(MasterView);
        btBack->setObjectName("btBack");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        btBack->setIcon(icon);

        horizontalLayout->addWidget(btBack);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelTitle = new QLabel(MasterView);
        labelTitle->setObjectName("labelTitle");

        horizontalLayout->addWidget(labelTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btLogout = new QPushButton(MasterView);
        btLogout->setObjectName("btLogout");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        btLogout->setIcon(icon1);

        horizontalLayout->addWidget(btLogout);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(MasterView);
        stackedWidget->setObjectName("stackedWidget");

        verticalLayout->addWidget(stackedWidget);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(MasterView);

        QMetaObject::connectSlotsByName(MasterView);
    } // setupUi

    void retranslateUi(QWidget *MasterView)
    {
        MasterView->setWindowTitle(QCoreApplication::translate("MasterView", "MasterView", nullptr));
        btBack->setText(QString());
        labelTitle->setText(QString());
        btLogout->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MasterView: public Ui_MasterView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERVIEW_H
