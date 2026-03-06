#include "registerclient.h"
#include "ui_registerclient.h"

RegisterClient::RegisterClient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterClient)
{
    ui->setupUi(this);
}

RegisterClient::~RegisterClient()
{
    delete ui;
}
