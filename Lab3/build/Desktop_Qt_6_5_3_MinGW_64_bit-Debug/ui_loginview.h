/********************************************************************************
** Form generated from reading UI file 'loginview.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINVIEW_H
#define UI_LOGINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginView
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *inputUserName;
    QLabel *label_5;
    QLineEdit *inputUserPassword;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btRegister;
    QPushButton *btLogin;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *LoginView)
    {
        if (LoginView->objectName().isEmpty())
            LoginView->setObjectName("LoginView");
        LoginView->resize(696, 560);
        verticalLayout = new QVBoxLayout(LoginView);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(LoginView);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_4 = new QLabel(LoginView);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(60, 0));
        label_4->setMaximumSize(QSize(100, 16777215));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        inputUserName = new QLineEdit(LoginView);
        inputUserName->setObjectName("inputUserName");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, inputUserName);

        label_5 = new QLabel(LoginView);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(60, 0));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        inputUserPassword = new QLineEdit(LoginView);
        inputUserPassword->setObjectName("inputUserPassword");
        inputUserPassword->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, inputUserPassword);


        horizontalLayout_6->addLayout(formLayout_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        btRegister = new QPushButton(LoginView);
        btRegister->setObjectName("btRegister");

        horizontalLayout_5->addWidget(btRegister);

        btLogin = new QPushButton(LoginView);
        btLogin->setObjectName("btLogin");

        horizontalLayout_5->addWidget(btLogin);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(LoginView);

        QMetaObject::connectSlotsByName(LoginView);
    } // setupUi

    void retranslateUi(QWidget *LoginView)
    {
        LoginView->setWindowTitle(QCoreApplication::translate("LoginView", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("LoginView", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\346\254\242\350\277\216\344\275\277\347\224\250\350\257\212\346\226\255\346\265\213\350\257\225\347\263\273\347\273\237</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("LoginView", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("LoginView", "\345\257\206\347\240\201\357\274\232", nullptr));
        btRegister->setText(QCoreApplication::translate("LoginView", "\346\263\250\345\206\214", nullptr));
        btLogin->setText(QCoreApplication::translate("LoginView", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginView: public Ui_LoginView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINVIEW_H
