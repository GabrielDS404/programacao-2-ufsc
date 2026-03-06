#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "client.h"
#include "accounts.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    // Page Register New Client
    void on_RegisterClient_triggered();
    void on_cadastrar_button_register_clicked();


    // Page List Clients
    void on_ListClient_triggered();
    void on_search_clientlist_Button_clicked();
    void on_deleteButton_clicked();
    void on_all_clients_Button_clicked();


    //

    void on_actionCreate_New_Account_triggered();

    void on_checking_account_radio_clicked();

    void on_special_account_radio_clicked();

    void on_searchAccountButton_clicked();

    void on_create_account_button_clicked();

    void on_actionList_Accounts_triggered();

    void on_serachListaccountButton_clicked();

    void on_clearButton_clicked();







    void on_operations_button_clicked();

    void on_all_accounts_button_clicked();

    void on_deposit_button_clicked();

    void on_withdraw_button_clicked();

    void on_transfer_button_clicked();

    void on_pushButton_clicked();

    void on_deposit_button_2_clicked();

    void on_withdraw_button_2_clicked();

    void on_transfer_button_4_clicked();

private:
    Ui::MainWindow *ui;
    QVector<Client *> AllClient;
    QVector<Account *> AllAccounts;
    QString setAccountID;
};
#endif // MAINWINDOW_H
