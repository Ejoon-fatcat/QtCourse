/********************************************************************************
** Form generated from reading UI file 'welcomeview.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEVIEW_H
#define UI_WELCOMEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeView
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btDepartment;
    QPushButton *btDoctor;
    QPushButton *btPatient;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WelcomeView)
    {
        if (WelcomeView->objectName().isEmpty())
            WelcomeView->setObjectName("WelcomeView");
        WelcomeView->resize(708, 544);
        verticalLayout = new QVBoxLayout(WelcomeView);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 210, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btDepartment = new QPushButton(WelcomeView);
        btDepartment->setObjectName("btDepartment");
        btDepartment->setMinimumSize(QSize(80, 80));
        btDepartment->setMaximumSize(QSize(80, 80));

        horizontalLayout->addWidget(btDepartment);

        btDoctor = new QPushButton(WelcomeView);
        btDoctor->setObjectName("btDoctor");
        btDoctor->setMinimumSize(QSize(80, 80));
        btDoctor->setMaximumSize(QSize(80, 80));

        horizontalLayout->addWidget(btDoctor);

        btPatient = new QPushButton(WelcomeView);
        btPatient->setObjectName("btPatient");
        btPatient->setMinimumSize(QSize(80, 80));
        btPatient->setMaximumSize(QSize(80, 80));

        horizontalLayout->addWidget(btPatient);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 210, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(WelcomeView);

        QMetaObject::connectSlotsByName(WelcomeView);
    } // setupUi

    void retranslateUi(QWidget *WelcomeView)
    {
        WelcomeView->setWindowTitle(QCoreApplication::translate("WelcomeView", "\346\254\242\350\277\216", nullptr));
        btDepartment->setText(QCoreApplication::translate("WelcomeView", "\347\247\221\345\256\244\347\256\241\347\220\206", nullptr));
        btDoctor->setText(QCoreApplication::translate("WelcomeView", "\345\214\273\347\224\237\347\256\241\347\220\206", nullptr));
        btPatient->setText(QCoreApplication::translate("WelcomeView", "\346\202\243\350\200\205\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeView: public Ui_WelcomeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEVIEW_H
