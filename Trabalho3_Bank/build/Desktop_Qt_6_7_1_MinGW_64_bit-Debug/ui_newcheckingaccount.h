/********************************************************************************
** Form generated from reading UI file 'newcheckingaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCHECKINGACCOUNT_H
#define UI_NEWCHECKINGACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewCheckingAccount
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QLabel *label_2;
    QWidget *page_3;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QDialog *NewCheckingAccount)
    {
        if (NewCheckingAccount->objectName().isEmpty())
            NewCheckingAccount->setObjectName("NewCheckingAccount");
        NewCheckingAccount->resize(802, 455);
        stackedWidget = new QStackedWidget(NewCheckingAccount);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(140, 50, 421, 261));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 100, 63, 20));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 110, 63, 20));
        stackedWidget->addWidget(page_3);
        pushButton = new QPushButton(NewCheckingAccount);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(650, 70, 83, 29));
        pushButton_2 = new QPushButton(NewCheckingAccount);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(650, 110, 83, 29));
        pushButton_3 = new QPushButton(NewCheckingAccount);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(650, 150, 83, 29));
        label = new QLabel(NewCheckingAccount);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 90, 261, 131));

        retranslateUi(NewCheckingAccount);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NewCheckingAccount);
    } // setupUi

    void retranslateUi(QDialog *NewCheckingAccount)
    {
        NewCheckingAccount->setWindowTitle(QCoreApplication::translate("NewCheckingAccount", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("NewCheckingAccount", "page 2", nullptr));
        label_3->setText(QCoreApplication::translate("NewCheckingAccount", "page 3", nullptr));
        pushButton->setText(QCoreApplication::translate("NewCheckingAccount", "pag1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("NewCheckingAccount", "pag 2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("NewCheckingAccount", "page3", nullptr));
        label->setText(QCoreApplication::translate("NewCheckingAccount", "page 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewCheckingAccount: public Ui_NewCheckingAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCHECKINGACCOUNT_H
