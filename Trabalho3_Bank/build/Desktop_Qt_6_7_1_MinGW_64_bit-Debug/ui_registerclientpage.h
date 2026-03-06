/********************************************************************************
** Form generated from reading UI file 'registerclientpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERCLIENTPAGE_H
#define UI_REGISTERCLIENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterClientPage
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *RegisterClientPage)
    {
        if (RegisterClientPage->objectName().isEmpty())
            RegisterClientPage->setObjectName("RegisterClientPage");
        RegisterClientPage->resize(400, 300);
        label = new QLabel(RegisterClientPage);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 211, 121));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 41, 255);"));
        pushButton = new QPushButton(RegisterClientPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 200, 83, 29));

        retranslateUi(RegisterClientPage);

        QMetaObject::connectSlotsByName(RegisterClientPage);
    } // setupUi

    void retranslateUi(QDialog *RegisterClientPage)
    {
        RegisterClientPage->setWindowTitle(QCoreApplication::translate("RegisterClientPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegisterClientPage", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterClientPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterClientPage: public Ui_RegisterClientPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERCLIENTPAGE_H
