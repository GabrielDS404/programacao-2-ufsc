/********************************************************************************
** Form generated from reading UI file 'registerclient.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERCLIENT_H
#define UI_REGISTERCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterClient
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *nameinput;
    QLineEdit *cpfinput;
    QLineEdit *salaryinput;
    QLineEdit *cityinput;
    QLineEdit *professioninput;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *RegisterClient)
    {
        if (RegisterClient->objectName().isEmpty())
            RegisterClient->setObjectName("RegisterClient");
        RegisterClient->resize(677, 457);
        widget = new QWidget(RegisterClient);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 130, 501, 212));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        nameinput = new QLineEdit(widget);
        nameinput->setObjectName("nameinput");

        verticalLayout_2->addWidget(nameinput);

        cpfinput = new QLineEdit(widget);
        cpfinput->setObjectName("cpfinput");

        verticalLayout_2->addWidget(cpfinput);

        salaryinput = new QLineEdit(widget);
        salaryinput->setObjectName("salaryinput");

        verticalLayout_2->addWidget(salaryinput);

        cityinput = new QLineEdit(widget);
        cityinput->setObjectName("cityinput");

        verticalLayout_2->addWidget(cityinput);

        professioninput = new QLineEdit(widget);
        professioninput->setObjectName("professioninput");

        verticalLayout_2->addWidget(professioninput);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(RegisterClient);

        QMetaObject::connectSlotsByName(RegisterClient);
    } // setupUi

    void retranslateUi(QDialog *RegisterClient)
    {
        RegisterClient->setWindowTitle(QCoreApplication::translate("RegisterClient", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegisterClient", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterClient", "CPF:", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterClient", "City:", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterClient", "Profession:", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterClient", "Salary:", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterClient", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterClient: public Ui_RegisterClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERCLIENT_H
