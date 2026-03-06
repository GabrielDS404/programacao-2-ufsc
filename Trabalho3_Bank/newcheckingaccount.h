#ifndef NEWCHECKINGACCOUNT_H
#define NEWCHECKINGACCOUNT_H

#include <QDialog>

namespace Ui {
class NewCheckingAccount;
}

class NewCheckingAccount : public QDialog
{
    Q_OBJECT

public:
    explicit NewCheckingAccount(QWidget *parent = nullptr);
    ~NewCheckingAccount();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::NewCheckingAccount *ui;
};

#endif // NEWCHECKINGACCOUNT_H
