/********************************************************************************
** Form generated from reading UI file 'patienteditview.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTEDITVIEW_H
#define UI_PATIENTEDITVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientEditView
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_2;
    QLabel *label_8;
    QLineEdit *dbEditID;
    QLabel *label_10;
    QLineEdit *dbEditName;
    QLabel *label_11;
    QLineEdit *dbEditIDCard;
    QLabel *label_12;
    QComboBox *dbComboxSex;
    QLabel *label_13;
    QDateEdit *dbDataEditDOB;
    QLabel *label_14;
    QSpinBox *dbSpinHeight;
    QLabel *label_15;
    QSpinBox *dbSpinWeight;
    QLabel *label_16;
    QLineEdit *dbEditMobile;
    QLineEdit *dbCreateTimeStamp;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *btSave;
    QPushButton *btCancel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *PatientEditView)
    {
        if (PatientEditView->objectName().isEmpty())
            PatientEditView->setObjectName("PatientEditView");
        PatientEditView->resize(714, 535);
        verticalLayout_2 = new QVBoxLayout(PatientEditView);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_3 = new QSpacerItem(20, 110, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(123, 17, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_8 = new QLabel(PatientEditView);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_8);

        dbEditID = new QLineEdit(PatientEditView);
        dbEditID->setObjectName("dbEditID");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, dbEditID);

        label_10 = new QLabel(PatientEditView);
        label_10->setObjectName("label_10");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        dbEditName = new QLineEdit(PatientEditView);
        dbEditName->setObjectName("dbEditName");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, dbEditName);

        label_11 = new QLabel(PatientEditView);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_11);

        dbEditIDCard = new QLineEdit(PatientEditView);
        dbEditIDCard->setObjectName("dbEditIDCard");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, dbEditIDCard);

        label_12 = new QLabel(PatientEditView);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_12);

        dbComboxSex = new QComboBox(PatientEditView);
        dbComboxSex->setObjectName("dbComboxSex");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, dbComboxSex);

        label_13 = new QLabel(PatientEditView);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_13);

        dbDataEditDOB = new QDateEdit(PatientEditView);
        dbDataEditDOB->setObjectName("dbDataEditDOB");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, dbDataEditDOB);

        label_14 = new QLabel(PatientEditView);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_14);

        dbSpinHeight = new QSpinBox(PatientEditView);
        dbSpinHeight->setObjectName("dbSpinHeight");

        formLayout_2->setWidget(5, QFormLayout::FieldRole, dbSpinHeight);

        label_15 = new QLabel(PatientEditView);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_15);

        dbSpinWeight = new QSpinBox(PatientEditView);
        dbSpinWeight->setObjectName("dbSpinWeight");

        formLayout_2->setWidget(6, QFormLayout::FieldRole, dbSpinWeight);

        label_16 = new QLabel(PatientEditView);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_16);

        dbEditMobile = new QLineEdit(PatientEditView);
        dbEditMobile->setObjectName("dbEditMobile");

        formLayout_2->setWidget(7, QFormLayout::FieldRole, dbEditMobile);

        dbCreateTimeStamp = new QLineEdit(PatientEditView);
        dbCreateTimeStamp->setObjectName("dbCreateTimeStamp");

        formLayout_2->setWidget(8, QFormLayout::FieldRole, dbCreateTimeStamp);

        label = new QLabel(PatientEditView);
        label->setObjectName("label");

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label);


        horizontalLayout->addLayout(formLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        btSave = new QPushButton(PatientEditView);
        btSave->setObjectName("btSave");

        verticalLayout->addWidget(btSave);

        btCancel = new QPushButton(PatientEditView);
        btCancel->setObjectName("btCancel");

        verticalLayout->addWidget(btCancel);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(433, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 109, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(PatientEditView);

        QMetaObject::connectSlotsByName(PatientEditView);
    } // setupUi

    void retranslateUi(QWidget *PatientEditView)
    {
        PatientEditView->setWindowTitle(QCoreApplication::translate("PatientEditView", "\347\274\226\350\276\221\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        label_8->setText(QCoreApplication::translate("PatientEditView", "ID:", nullptr));
        label_10->setText(QCoreApplication::translate("PatientEditView", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("PatientEditView", "\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("PatientEditView", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("PatientEditView", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("PatientEditView", "\350\272\253\351\253\230\357\274\232", nullptr));
        label_15->setText(QCoreApplication::translate("PatientEditView", "\344\275\223\351\207\215\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("PatientEditView", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("PatientEditView", "\345\210\233\345\273\272\346\227\266\351\227\264\357\274\232", nullptr));
        btSave->setText(QCoreApplication::translate("PatientEditView", "\344\277\235\345\255\230", nullptr));
        btCancel->setText(QCoreApplication::translate("PatientEditView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientEditView: public Ui_PatientEditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTEDITVIEW_H
