#include "newcheckingaccount.h"
#include "ui_newcheckingaccount.h"

NewCheckingAccount::NewCheckingAccount(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NewCheckingAccount)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->page);
}

NewCheckingAccount::~NewCheckingAccount()
{
    delete ui;
}

void NewCheckingAccount::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}


void NewCheckingAccount::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);
}


void NewCheckingAccount::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}

