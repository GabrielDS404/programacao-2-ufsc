#include "registernewclient.h"
#include "ui_registernewclient.h"

RegisterNewClient::RegisterNewClient(QWidget *parent)
    : QScrollArea(parent)
    , ui(new Ui::RegisterNewClient)
{
    ui->setupUi(this);
}

RegisterNewClient::~RegisterNewClient()
{
    delete ui;
}
