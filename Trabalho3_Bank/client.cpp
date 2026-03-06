#include "client.h"
#include <QDebug>

Client::Client(QString name, QString lastName, QString cpf, QString job, double salary)
    : m_name(name), m_lastName(lastName), m_cpf(cpf), m_job(job), m_salary(salary) {

}

QString Client::getName() const {
    return m_name;
}

QString Client::getLastName() const {
    return m_lastName;
}

QString Client::getCPF() const {
    return m_cpf;
}

QString Client::getJob() const {
    return m_job;
}

double Client::getSalary() const {
    return m_salary;
}

void Client::UpdateData(QString name, QString lastName, QString cpf, QString job, double salary) {
    m_name = name;
    m_lastName = lastName;
    m_cpf = cpf;
    m_job = job;
    m_salary = salary;
}

void Client::UpdateName(QString name) {
    m_name = name;
}

void Client::UpdateLastName(QString lastName) {
    m_lastName = lastName;
}

void Client::UpdateAddress(QString cpf) {
    m_cpf = cpf;
}

void Client::UpdateJob(QString job) {
    m_job = job;
}

void Client::UpdateSalary(double salary) {
    m_salary = salary;
}
