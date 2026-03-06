#include "accounts.h"

int Account::nextID = 100;

Account::Account(Client *client, double balance)
    : m_client(client), m_balance(balance) {
    if (m_client) {
        qDebug() << "Account created for client:" << m_client->getName();
        CreateAccountID();
    } else {
        qDebug() << "Error: Account created with null client!";
    }
}

Account::~Account() {
    qDebug() << "Account destroyed for client:" << (m_client ? m_client->getName() : "null");
}

void Account::CreateAccountID() {
    QString lastCPF = m_client->getCPF().right(5);
    QString stringNextID = QString::number(nextID);
    AccountID = lastCPF + stringNextID;
    nextID++;
}

bool Account::Deposit(double value) {
    m_balance += value;
    return true;
}

CheckingAccount::CheckingAccount(Client *client, double balance)
    : Account(client, balance) {
    m_typeAccount = "Checking Account";
    qDebug() << "CheckingAccount created for client:" << (m_client ? m_client->getName() : "null");
}

bool CheckingAccount::WithDraw(double value) {
    if (value > m_balance) {
        qDebug() << "Insufficient balance for withdrawal.";
        return false;
    }
    m_balance -= value;
    return true;
}

bool CheckingAccount::Transfer(Account *account, double value) {
    if (value > m_balance) {
        qDebug() << "Insufficient balance for transfer.";
        return false;
    }
    account->Deposit(value);
    m_balance -= value;
    return true;
}

SpecialAccount::SpecialAccount(Client *client, double balance, double limit)
    : Account(client, balance), m_limit(limit) {
    m_typeAccount = "Special Account";
    qDebug() << "SpecialAccount created for client:" << (m_client ? m_client->getName() : "null");
}

bool SpecialAccount::WithDraw(double value) {
    if (value > m_balance + m_limit) {
        qDebug() << "Insufficient balance for withdrawal.";
        return false;
    }
    m_balance -= value;
    return true;
}

bool SpecialAccount::Transfer(Account *account, double value) {
    if (value > m_balance + m_limit) {
        qDebug() << "Insufficient balance for transfer.";
        return false;
    }
    account->Deposit(value);
    m_balance -= value;
    return true;
}
