#ifndef CLIENT_H
#define CLIENT_H

#include <QString>

class Client {
private:
    QString m_name;
    QString m_lastName;
    QString m_cpf;
    QString m_job;
    double m_salary;

public:
    Client(QString name, QString lastName, QString cpf, QString job, double salary);
    QString getName() const;
    QString getLastName() const;
    QString getCPF() const;
    QString getJob() const;
    double getSalary() const;
    void UpdateData(QString name, QString lastName, QString cpf, QString job, double salary);
    void UpdateName(QString name);
    void UpdateLastName(QString lastName);
    void UpdateAddress(QString cpf);
    void UpdateJob(QString job);
    void UpdateSalary(double salary);
};

#endif // CLIENT_H
