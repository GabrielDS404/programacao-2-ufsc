#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentWidget(ui->MainPage);

    QPixmap pix(":/new/prefix1/logo.png");
    int w = ui->label->width();
    int h = ui->label->height();

    ui->label->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}



MainWindow::~MainWindow()
{
    delete ui;

    for(int i = 0; i < AllAccounts.size(); i++)
    {
        delete AllAccounts.at(i);
    }

}



void MainWindow::on_RegisterClient_triggered()
{
    ui->stackedWidget->setCurrentWidget(ui->RegisterClientPage);
    ui->in_name_register->setText("");
    ui->in_last_register->setText("");
    ui->in_cpf_register->setText("");
    ui->in_job_register->setText("");
    ui->in_salary_register->setValue(0);

}


void MainWindow::on_cadastrar_button_register_clicked()
{


    QString name = ui->in_name_register->text();
    QString lastName = ui->in_last_register->text();
    QString cpf = ui->in_cpf_register->text();
    QString job = ui->in_job_register->text();
    double salary = ui->in_salary_register->value();

    if(name == "" || lastName == "" || cpf == "" || job == "" )
    {
        QMessageBox::warning(this, "Warning", "Fill in all fields correctly");
        return;
    }

    if (cpf.size() < 11)
    {
        QMessageBox::warning(this, "Warning", "Fill CPF correctly");
        return;
    }



    for(int i = 0; i < AllClient.size(); i++)
    {
        if (AllClient.at(i)->getCPF() == cpf) {
            QMessageBox::warning(this, "Warning", "CPF already registered");
            return;
        }
    }

    AllClient.push_back(new Client(name, lastName, cpf, job, salary));
    QMessageBox::information(this, "Information", "Registration Completed Successfully");

    ui->in_name_register->setText("");
    ui->in_last_register->setText("");
    ui->in_cpf_register->setText("");
    ui->in_job_register->setText("");
    ui->in_salary_register->setValue(0);

}





void MainWindow::on_ListClient_triggered()
{
    ui->stackedWidget->setCurrentWidget(ui->ListClientPage);

    ui->tableWidget_Clients->setRowCount(AllClient.size());

    for(int i = 0; i < AllClient.size(); i++)
    {
        ui->tableWidget_Clients->setItem(i, 0, new QTableWidgetItem(AllClient.at(i)->getName() + " " + AllClient.at(i)->getLastName()));
        ui->tableWidget_Clients->setItem(i, 1, new QTableWidgetItem(AllClient.at(i)->getCPF()));
        ui->tableWidget_Clients->setItem(i, 2, new QTableWidgetItem(AllClient.at(i)->getJob()));
        ui->tableWidget_Clients->setItem(i, 3, new QTableWidgetItem(QString::number(AllClient.at(i)->getSalary())));
    }

    ui->tableWidget_Clients->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_Clients->verticalHeader()->setVisible(false);

}


void MainWindow::on_search_clientlist_Button_clicked()
{
    qDebug() << "Entrou";

    QString searchCPF = ui->in_search->text();

    bool find = false;

    for(int i = 0; i < AllClient.size(); i++)
    {
        if (searchCPF == AllClient.at(i)->getCPF())
        {
            ui->tableWidget_Clients->setRowCount(1);
            ui->tableWidget_Clients->setItem(0, 0, new QTableWidgetItem(AllClient.at(i)->getName()  +  " "   + AllClient.at(i)->getLastName()));
            ui->tableWidget_Clients->setItem(0, 1, new QTableWidgetItem(AllClient.at(i)->getCPF()));
            ui->tableWidget_Clients->setItem(0, 2, new QTableWidgetItem(AllClient.at(i)->getJob()));
            ui->tableWidget_Clients->setItem(0, 3, new QTableWidgetItem(QString::number(AllClient.at(i)->getSalary())));

            find = true;
        }
    }


    if(!find) {
        QMessageBox::warning(this, "waring", "CPF not found");
    }

    ui->in_search->setText("");
}





void MainWindow::on_deleteButton_clicked()
{
    int line = ui->tableWidget_Clients->currentRow();
    QString currentCPF = ui->tableWidget_Clients->item(line, 1)->text();



    for(int i = 0; i < AllClient.size(); i++)
    {
        if(currentCPF == AllClient.at(i)->getCPF())
        {
            AllClient.erase(AllClient.begin() + i);
            QMessageBox::information(this, "warning", "Client deleted successfully");
            ui->tableWidget_Clients->removeRow(line);
            return;
        }
    }

    qDebug() << "Falha no delete";




}


void MainWindow::on_all_clients_Button_clicked()
{
    ui->tableWidget_Clients->setRowCount(AllClient.size());
    for(int i = 0; i < AllClient.size(); i++)
    {
        ui->tableWidget_Clients->setItem(i, 0, new QTableWidgetItem(AllClient.at(i)->getName()  +  " "   + AllClient.at(i)->getLastName()));
        ui->tableWidget_Clients->setItem(i, 1, new QTableWidgetItem(AllClient.at(i)->getCPF()));
        ui->tableWidget_Clients->setItem(i, 2, new QTableWidgetItem(AllClient.at(i)->getJob()));
        ui->tableWidget_Clients->setItem(i, 3, new QTableWidgetItem(QString::number(AllClient.at(i)->getSalary())));
    }
}


void MainWindow::on_actionCreate_New_Account_triggered()
{
    ui->stackedWidget->setCurrentWidget(ui->NewAccountPage);
}


void MainWindow::on_checking_account_radio_clicked()
{
    ui->in_limit_account->setEnabled(false);
    ui->in_limit_account->setStyleSheet("background-color: gray;");
}


void MainWindow::on_special_account_radio_clicked()
{
    ui->in_limit_account->setEnabled(true);
    ui->in_limit_account->setStyleSheet("background-color: none;");
}


void MainWindow::on_searchAccountButton_clicked()
{
    QString searchCPF = ui->In_search_CPF_account->text();

    bool find = false;

    for(int i = 0; i < AllClient.size(); i++)
    {
        if (searchCPF == AllClient.at(i)->getCPF())
        {
            ui->in_name_account->setText(AllClient.at(i)->getName());
            ui->in_lastName_account->setText(AllClient.at(i)->getLastName());
            ui->in_cpf_account->setText(AllClient.at(i)->getCPF());
            ui->in_profession_account->setText(AllClient.at(i)->getJob());
            ui->in_salary_account->setValue(AllClient.at(i)->getSalary());

            find = true;
        }
    }


    if(!find) {
        QMessageBox::warning(this, "waring", "CPF not found");
        ui->In_search_CPF_account->setText("");
    }


}


void MainWindow::on_create_account_button_clicked()
{
    QString currentCPF = ui->in_cpf_account->text();
    double balance = ui->in_balance_account->value();

    if (ui->in_name_account->text() == "")
    {
        QMessageBox::warning(this, "warning", "Enter the Client CPF");
        return;
    }

    if (!ui->checking_account_radio->isChecked() && !ui->special_account_radio->isChecked())
    {
        QMessageBox::warning(this, "warning", "Select Type Account");
        return;
    }


    for(int i = 0; i < AllClient.size(); i++)
    {
        if (currentCPF == AllClient.at(i)->getCPF())
        {

            if(ui->checking_account_radio->isChecked())
            {
                AllAccounts.push_back(new CheckingAccount(AllClient.at(i), balance));
            }

            if(ui->special_account_radio->isChecked())
            {
                double limit = ui->in_limit_account->value();
                AllAccounts.push_back(new SpecialAccount(AllClient.at(i), balance, limit));
            }
        }
    }



    QMessageBox::information(this, "information", "Account Created Successfully");

    ui->In_search_CPF_account->setText("");
    ui->in_name_account->setText("");
    ui->in_lastName_account->setText("");
    ui->in_cpf_account->setText("");
    ui->in_profession_account->setText("");
    ui->in_salary_account->setValue(0);
    ui->in_balance_account->setValue(0);
    ui->in_limit_account->setValue(0);

}


void MainWindow::on_clearButton_clicked()
{
    ui->In_search_CPF_account->setText("");
    ui->in_name_account->setText("");
    ui->in_lastName_account->setText("");
    ui->in_cpf_account->setText("");
    ui->in_profession_account->setText("");
    ui->in_salary_account->setValue(0);
    ui->in_balance_account->setValue(0);
    ui->in_limit_account->setValue(0);
    ui->checking_account_radio->setChecked(false);
    ui->special_account_radio->setChecked(false);
}


void MainWindow::on_actionList_Accounts_triggered()
{
    setAccountID = "";

    ui->stackedWidget->setCurrentWidget(ui->ListAccountPage);

    ui->in_CPF_listaccount->setText("");

    ui->tableWidget_Accounts->setRowCount(AllAccounts.size());

    for (int i = 0; i < AllAccounts.size(); i++)
    {
        ui->tableWidget_Accounts->setItem(i, 0, new QTableWidgetItem(AllAccounts.at(i)->GetAccountID()));;
        ui->tableWidget_Accounts->setItem(i, 1, new QTableWidgetItem(AllAccounts.at(i)->GetTypeAccount()));;
        ui->tableWidget_Accounts->setItem(i, 2, new QTableWidgetItem(AllAccounts.at(i)->GetClient()->getName() + " " + AllAccounts.at(i)->GetClient()->getLastName()));;
        ui->tableWidget_Accounts->setItem(i, 3, new QTableWidgetItem(AllAccounts.at(i)->GetClient()->getCPF()));;
    }

    ui->tableWidget_Accounts->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_Accounts->verticalHeader()->setVisible(false);
}





void MainWindow::on_serachListaccountButton_clicked()
{
    QString currentCPF = ui->in_CPF_listaccount->text();

    int nAccounts = 0;

    for (int i = 0; i < AllAccounts.size(); i++)
    {
        if(currentCPF == AllAccounts.at(i)->GetClient()->getCPF())
        {
            nAccounts++;
        }
    }

    if(nAccounts == 0 || currentCPF.size() < 11)
    {
        QMessageBox::warning(this,"warning", "CPF invalid");
        on_all_accounts_button_clicked();

    }

    ui->tableWidget_Accounts->clearContents();
    ui->tableWidget_Accounts->setRowCount(nAccounts);

    int nline = 0;

    for (int i = 0; i < AllAccounts.size(); i++)
    {
        if(currentCPF == AllAccounts.at(i)->GetClient()->getCPF())
        {

            ui->tableWidget_Accounts->setItem(nline, 0, new QTableWidgetItem(AllAccounts.at(i)->GetAccountID()));;
            ui->tableWidget_Accounts->setItem(nline, 1, new QTableWidgetItem(AllAccounts.at(i)->GetTypeAccount()));;
            ui->tableWidget_Accounts->setItem(nline, 2, new QTableWidgetItem(AllAccounts.at(i)->GetClient()->getName() + " " + AllAccounts.at(i)->GetClient()->getLastName()));;
            ui->tableWidget_Accounts->setItem(nline, 3, new QTableWidgetItem(AllAccounts.at(i)->GetClient()->getCPF()));;
            nline++;
        }

    }
}

void MainWindow::on_all_accounts_button_clicked()
{
    ui->tableWidget_Accounts->clearContents();

    ui->tableWidget_Accounts->setRowCount(AllAccounts.size());

    for (int i = 0; i < AllAccounts.size(); i++)
    {
        ui->tableWidget_Accounts->setItem(i, 0, new QTableWidgetItem(AllAccounts.at(i)->GetAccountID()));;
        ui->tableWidget_Accounts->setItem(i, 1, new QTableWidgetItem(AllAccounts.at(i)->GetTypeAccount()));;
        ui->tableWidget_Accounts->setItem(i, 2, new QTableWidgetItem(AllAccounts.at(i)->GetClient()->getName() + " " + AllAccounts.at(i)->GetClient()->getLastName()));;
        ui->tableWidget_Accounts->setItem(i, 3, new QTableWidgetItem(AllAccounts.at(i)->GetClient()->getCPF()));;
    }

    ui->tableWidget_Accounts->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_Accounts->verticalHeader()->setVisible(false);

    ui->in_CPF_listaccount->setText("");
}











// Operations

void MainWindow::on_operations_button_clicked()
{

    QList<QTableWidgetItem *> selectedItems = ui->tableWidget_Accounts->selectedItems();

    if (selectedItems.isEmpty()) {
        QMessageBox::warning(this, "Warning", "No row selected");
        return;
    }

    int line = ui->tableWidget_Accounts->currentRow();

    setAccountID = ui->tableWidget_Accounts->item(line, 0)->text();

    ui->stackedWidget->setCurrentWidget(ui->OperationsPage);


    for(int i = 0; i < AllAccounts.size(); i++)
    {
        if(setAccountID == AllAccounts.at(i)->GetAccountID())
        {
            ui->in_name_operations->setText(AllAccounts.at(i)->GetClient()->getName() + " " + AllAccounts.at(i)->GetClient()->getLastName());
            ui->in_accountID_operations->setText(AllAccounts.at(i)->GetAccountID());
            ui->in_cpf_operations->setText(AllAccounts.at(i)->GetClient()->getCPF());
            ui->in_balance_operations->setValue(AllAccounts.at(i)->GetBalance());

            if(AllAccounts.at(i)->GetTypeAccount() == "Special Account")
            {
                SpecialAccount* specialAccount = dynamic_cast<SpecialAccount*>(AllAccounts.at(i));
                if (specialAccount != nullptr) {
                    ui->in_limit_operations->setValue(specialAccount->GetLimit());
                }
            }
        }
    }



}





void MainWindow::on_deposit_button_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->DepositPage);
}


void MainWindow::on_withdraw_button_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->WithDrawPage);
}


void MainWindow::on_transfer_button_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->TransferPage);
}




void MainWindow::on_deposit_button_2_clicked()
{
    for(int i = 0; i < AllAccounts.size(); i++)
    {
        if(AllAccounts.at(i)->GetAccountID() == setAccountID)
        {
            AllAccounts.at(i)->Deposit(ui->deposit_value->value());
            QMessageBox::information(this, "information", "Deposit Made Successfully");
            ui->stackedWidget->setCurrentWidget(ui->OperationsPage);
            ui->in_balance_operations->setValue(AllAccounts.at(i)->GetBalance());

        }
    }
}


void MainWindow::on_withdraw_button_2_clicked()
{
    for(int i = 0; i < AllAccounts.size(); i++)
    {
        if(AllAccounts.at(i)->GetAccountID() == setAccountID)
        {
            if(AllAccounts.at(i)->WithDraw(ui->withdraw_value->value()))
            {
                QMessageBox::information(this, "information", "WithDraw Made Successfully");
                ui->stackedWidget->setCurrentWidget(ui->OperationsPage);
                ui->in_balance_operations->setValue(AllAccounts.at(i)->GetBalance());
            }
            else
            {
                QMessageBox::warning(this, "Warning", "insufficient balance");
            }
        }
    }
}





void MainWindow::on_transfer_button_4_clicked()
{
    QString accountTransfer = ui->in_accountID_transfer->text();
    bool find = false;

    for(int i = 0; i < AllAccounts.size(); i++)
    {
        if(AllAccounts.at(i)->GetAccountID() == accountTransfer)
        {
            find = true;
            for(int j = 0; j < AllAccounts.size(); j++)
            {
                if(AllAccounts.at(j)->GetAccountID() == setAccountID)
                {
                    if(AllAccounts.at(j)->Transfer(AllAccounts.at(i), ui->transfer_value->value()))
                    {
                        QMessageBox::information(this, "information", "Transfer Made Successfully");
                        ui->stackedWidget->setCurrentWidget(ui->OperationsPage);
                        ui->in_balance_operations->setValue(AllAccounts.at(j)->GetBalance());
                        break;
                    }
                    else
                    {
                        QMessageBox::warning(this, "Warning", "insufficient balance");
                        break;
                    }
                }
            }
        }
    }

    if(!find)
    {
        QMessageBox::warning(this, "Warning", "AccountID not found");
    }
}

