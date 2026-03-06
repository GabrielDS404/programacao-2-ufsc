#ifndef REGISTERCLIENT_H
#define REGISTERCLIENT_H

#include <QDialog>

namespace Ui {
class RegisterClient;
}

class RegisterClient : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterClient(QWidget *parent = nullptr);
    ~RegisterClient();

private:
    Ui::RegisterClient *ui;
};

#endif // REGISTERCLIENT_H
