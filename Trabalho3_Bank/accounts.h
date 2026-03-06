#ifndef ACCOUNTS_HPP
#define ACCOUNTS_HPP

#include <QString>
#include <QDebug>
#include "client.h"

class Account {
protected:
    const Client* m_client;
    double m_balance;
    QString m_typeAccount;
    QString AccountID;
    static int nextID;

public:
    Account(Client *client, double balance);
    virtual ~Account();
    const Client* GetClient() { return m_client; }
    QString GetAccountID() const { return AccountID; }
    double GetBalance() const { return m_balance; }
    QString GetTypeAccount() const { return m_typeAccount; }
    bool Deposit(double value);
    virtual bool WithDraw(double value) = 0;
    virtual bool Transfer(Account *account, double value) = 0;

protected:
    void CreateAccountID();
};

class CheckingAccount : public Account {
public:
    CheckingAccount(Client *client, double balance = 0);
    ~CheckingAccount() {}
    bool WithDraw(double value);
    bool Transfer(Account *account, double value);
    QString GetAccountInformation();
};

class SpecialAccount : public Account {
protected:
    double m_limit;
public:
    SpecialAccount(Client *client, double balance = 0, double limit = 0);
    ~SpecialAccount() {}
    double GetLimit() { return m_limit; }
    bool WithDraw(double value);
    bool Transfer(Account *account, double value);
    QString GetAccountInformation();
};

#endif // ACCOUNTS_HPP
