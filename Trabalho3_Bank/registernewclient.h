#ifndef REGISTERNEWCLIENT_H
#define REGISTERNEWCLIENT_H

#include <QScrollArea>

namespace Ui {
class RegisterNewClient;
}

class RegisterNewClient : public QScrollArea
{
    Q_OBJECT

public:
    explicit RegisterNewClient(QWidget *parent = nullptr);
    ~RegisterNewClient();

private:
    Ui::RegisterNewClient *ui;
};

#endif // REGISTERNEWCLIENT_H
