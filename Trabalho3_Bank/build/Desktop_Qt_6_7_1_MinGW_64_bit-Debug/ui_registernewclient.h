/********************************************************************************
** Form generated from reading UI file 'registernewclient.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERNEWCLIENT_H
#define UI_REGISTERNEWCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QScrollArea>

QT_BEGIN_NAMESPACE

class Ui_RegisterNewClient
{
public:

    void setupUi(QScrollArea *RegisterNewClient)
    {
        if (RegisterNewClient->objectName().isEmpty())
            RegisterNewClient->setObjectName("RegisterNewClient");
        RegisterNewClient->resize(400, 300);

        retranslateUi(RegisterNewClient);

        QMetaObject::connectSlotsByName(RegisterNewClient);
    } // setupUi

    void retranslateUi(QScrollArea *RegisterNewClient)
    {
        RegisterNewClient->setWindowTitle(QCoreApplication::translate("RegisterNewClient", "ScrollArea", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterNewClient: public Ui_RegisterNewClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERNEWCLIENT_H
