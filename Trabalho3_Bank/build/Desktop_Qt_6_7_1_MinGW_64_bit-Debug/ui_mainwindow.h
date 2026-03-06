/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *RegisterClient;
    QAction *ListClient;
    QAction *actionCreate_New_Account;
    QAction *actionList_Accounts;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_17;
    QStackedWidget *stackedWidget;
    QWidget *MainPage;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer_34;
    QHBoxLayout *horizontalLayout_111;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label;
    QSpacerItem *horizontalSpacer_46;
    QSpacerItem *verticalSpacer_35;
    QWidget *RegisterClientPage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *in_name_register;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *in_last_register;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLineEdit *in_cpf_register;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLineEdit *in_job_register;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_3;
    QDoubleSpinBox *in_salary_register;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *cadastrar_button_register;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_10;
    QWidget *ListClientPage;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLineEdit *in_search;
    QPushButton *search_clientlist_Button;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *all_clients_Button;
    QTableWidget *tableWidget_Clients;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QWidget *NewAccountPage;
    QHBoxLayout *horizontalLayout_24;
    QHBoxLayout *horizontalLayout_25;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_7;
    QLineEdit *In_search_CPF_account;
    QPushButton *searchAccountButton;
    QPushButton *clearButton;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_19;
    QLineEdit *in_name_account;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_20;
    QLineEdit *in_lastName_account;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_40;
    QLineEdit *in_cpf_account;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_39;
    QLineEdit *in_profession_account;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_15;
    QDoubleSpinBox *in_salary_account;
    QHBoxLayout *horizontalLayout_20;
    QRadioButton *checking_account_radio;
    QRadioButton *special_account_radio;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_10;
    QDoubleSpinBox *in_balance_account;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_11;
    QDoubleSpinBox *in_limit_account;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *create_account_button;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_3;
    QWidget *ListAccountPage;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_9;
    QLineEdit *in_CPF_listaccount;
    QPushButton *serachListaccountButton;
    QPushButton *all_accounts_button;
    QTableWidget *tableWidget_Accounts;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *operations_button;
    QSpacerItem *horizontalSpacer_4;
    QWidget *OperationsPage;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_35;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_72;
    QSpacerItem *horizontalSpacer_45;
    QSpacerItem *verticalSpacer_33;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_14;
    QLineEdit *in_name_operations;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_16;
    QLineEdit *in_accountID_operations;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_21;
    QLineEdit *in_cpf_operations;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_17;
    QDoubleSpinBox *in_balance_operations;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_18;
    QDoubleSpinBox *in_limit_operations;
    QSpacerItem *verticalSpacer_32;
    QPushButton *withdraw_button;
    QPushButton *transfer_button;
    QPushButton *deposit_button;
    QSpacerItem *horizontalSpacer_6;
    QWidget *DepositPage;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_36;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout_15;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_14;
    QDoubleSpinBox *deposit_value;
    QSpacerItem *verticalSpacer_4;
    QPushButton *deposit_button_2;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QWidget *WithDrawPage;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_37;
    QSpacerItem *horizontalSpacer_13;
    QVBoxLayout *verticalLayout_18;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_19;
    QDoubleSpinBox *withdraw_value;
    QSpacerItem *verticalSpacer_8;
    QPushButton *withdraw_button_2;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *horizontalSpacer_14;
    QWidget *TransferPage;
    QVBoxLayout *verticalLayout_58;
    QHBoxLayout *horizontalLayout_110;
    QSpacerItem *horizontalSpacer_43;
    QVBoxLayout *verticalLayout_57;
    QSpacerItem *verticalSpacer_28;
    QVBoxLayout *verticalLayout_56;
    QDoubleSpinBox *transfer_value;
    QSpacerItem *verticalSpacer_29;
    QHBoxLayout *horizontalLayout_109;
    QLabel *label_70;
    QLineEdit *in_accountID_transfer;
    QSpacerItem *verticalSpacer_30;
    QPushButton *transfer_button_4;
    QSpacerItem *verticalSpacer_31;
    QSpacerItem *horizontalSpacer_44;
    QMenuBar *menubar;
    QMenu *ClientMenu;
    QMenu *AccountMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(958, 632);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(20);
        sizePolicy.setVerticalStretch(20);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        RegisterClient = new QAction(MainWindow);
        RegisterClient->setObjectName("RegisterClient");
        ListClient = new QAction(MainWindow);
        ListClient->setObjectName("ListClient");
        ListClient->setCheckable(false);
        actionCreate_New_Account = new QAction(MainWindow);
        actionCreate_New_Account->setObjectName("actionCreate_New_Account");
        actionList_Accounts = new QAction(MainWindow);
        actionList_Accounts->setObjectName("actionList_Accounts");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setTabletTracking(false);
        centralwidget->setAcceptDrops(false);
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_17 = new QVBoxLayout(centralwidget);
        verticalLayout_17->setObjectName("verticalLayout_17");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setLayoutDirection(Qt::LeftToRight);
        stackedWidget->setAutoFillBackground(true);
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        MainPage = new QWidget();
        MainPage->setObjectName("MainPage");
        verticalLayout_13 = new QVBoxLayout(MainPage);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalSpacer_34 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_34);

        horizontalLayout_111 = new QHBoxLayout();
        horizontalLayout_111->setObjectName("horizontalLayout_111");
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_111->addItem(horizontalSpacer_12);

        label = new QLabel(MainPage);
        label->setObjectName("label");
        label->setMinimumSize(QSize(200, 200));

        horizontalLayout_111->addWidget(label);

        horizontalSpacer_46 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_111->addItem(horizontalSpacer_46);


        verticalLayout_12->addLayout(horizontalLayout_111);

        verticalSpacer_35 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_35);


        verticalLayout_13->addLayout(verticalLayout_12);

        stackedWidget->addWidget(MainPage);
        RegisterClientPage = new QWidget();
        RegisterClientPage->setObjectName("RegisterClientPage");
        verticalLayout_3 = new QVBoxLayout(RegisterClientPage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_12 = new QLabel(RegisterClientPage);
        label_12->setObjectName("label_12");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semilight")});
        font.setPointSize(20);
        font.setBold(false);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_12->setMargin(0);

        horizontalLayout_12->addWidget(label_12);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_12);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(-1, 10, -1, 10);
        label_5 = new QLabel(RegisterClientPage);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setMaximumSize(QSize(100, 16777215));
        label_5->setBaseSize(QSize(100, 200));
        QFont font1;
        font1.setStyleStrategy(QFont::PreferDefault);
        label_5->setFont(font1);
        label_5->setScaledContents(false);
        label_5->setMargin(2);

        horizontalLayout_7->addWidget(label_5);

        in_name_register = new QLineEdit(RegisterClientPage);
        in_name_register->setObjectName("in_name_register");

        horizontalLayout_7->addWidget(in_name_register);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 10);
        label_6 = new QLabel(RegisterClientPage);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setMaximumSize(QSize(100, 16777215));
        label_6->setMargin(2);

        horizontalLayout_2->addWidget(label_6);

        in_last_register = new QLineEdit(RegisterClientPage);
        in_last_register->setObjectName("in_last_register");

        horizontalLayout_2->addWidget(in_last_register);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(-1, -1, -1, 10);
        label_2 = new QLabel(RegisterClientPage);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setMaximumSize(QSize(100, 16777215));
        label_2->setMargin(2);

        horizontalLayout_8->addWidget(label_2);

        in_cpf_register = new QLineEdit(RegisterClientPage);
        in_cpf_register->setObjectName("in_cpf_register");
        in_cpf_register->setMaxLength(11);

        horizontalLayout_8->addWidget(in_cpf_register);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(-1, -1, -1, 10);
        label_4 = new QLabel(RegisterClientPage);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setMargin(2);

        horizontalLayout_9->addWidget(label_4);

        in_job_register = new QLineEdit(RegisterClientPage);
        in_job_register->setObjectName("in_job_register");

        horizontalLayout_9->addWidget(in_job_register);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(-1, -1, -1, 0);
        label_3 = new QLabel(RegisterClientPage);
        label_3->setObjectName("label_3");
        label_3->setEnabled(true);
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setMargin(2);

        horizontalLayout_10->addWidget(label_3);

        in_salary_register = new QDoubleSpinBox(RegisterClientPage);
        in_salary_register->setObjectName("in_salary_register");
        in_salary_register->setEnabled(true);
        in_salary_register->setBaseSize(QSize(100, 100));
        in_salary_register->setAutoFillBackground(false);
        in_salary_register->setButtonSymbols(QAbstractSpinBox::NoButtons);
        in_salary_register->setMaximum(999999999999999.000000000000000);

        horizontalLayout_10->addWidget(in_salary_register);


        verticalLayout->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        cadastrar_button_register = new QPushButton(RegisterClientPage);
        cadastrar_button_register->setObjectName("cadastrar_button_register");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(cadastrar_button_register->sizePolicy().hasHeightForWidth());
        cadastrar_button_register->setSizePolicy(sizePolicy1);
        cadastrar_button_register->setMinimumSize(QSize(150, 50));
        cadastrar_button_register->setMaximumSize(QSize(100, 50));
        cadastrar_button_register->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_11->addWidget(cadastrar_button_register);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_11);


        horizontalLayout_13->addLayout(verticalLayout);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout_13);

        stackedWidget->addWidget(RegisterClientPage);
        ListClientPage = new QWidget();
        ListClientPage->setObjectName("ListClientPage");
        verticalLayout_5 = new QVBoxLayout(ListClientPage);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_8 = new QLabel(ListClientPage);
        label_8->setObjectName("label_8");

        horizontalLayout_3->addWidget(label_8);

        in_search = new QLineEdit(ListClientPage);
        in_search->setObjectName("in_search");
        in_search->setMaxLength(11);

        horizontalLayout_3->addWidget(in_search);

        search_clientlist_Button = new QPushButton(ListClientPage);
        search_clientlist_Button->setObjectName("search_clientlist_Button");

        horizontalLayout_3->addWidget(search_clientlist_Button);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        all_clients_Button = new QPushButton(ListClientPage);
        all_clients_Button->setObjectName("all_clients_Button");

        horizontalLayout_4->addWidget(all_clients_Button);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(horizontalLayout_5);

        tableWidget_Clients = new QTableWidget(ListClientPage);
        if (tableWidget_Clients->columnCount() < 4)
            tableWidget_Clients->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Clients->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Clients->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Clients->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_Clients->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_Clients->setObjectName("tableWidget_Clients");
        tableWidget_Clients->setEnabled(true);
        tableWidget_Clients->setMouseTracking(false);
        tableWidget_Clients->setTabletTracking(false);
        tableWidget_Clients->setAcceptDrops(false);
        tableWidget_Clients->setAutoFillBackground(false);
        tableWidget_Clients->setAutoScroll(true);
        tableWidget_Clients->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Clients->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_Clients->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableWidget_Clients->setGridStyle(Qt::SolidLine);
        tableWidget_Clients->setSortingEnabled(false);
        tableWidget_Clients->setRowCount(0);
        tableWidget_Clients->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_Clients->horizontalHeader()->setMinimumSectionSize(200);
        tableWidget_Clients->horizontalHeader()->setDefaultSectionSize(220);
        tableWidget_Clients->horizontalHeader()->setStretchLastSection(true);
        tableWidget_Clients->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_Clients->verticalHeader()->setStretchLastSection(false);

        verticalLayout_4->addWidget(tableWidget_Clients);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        deleteButton = new QPushButton(ListClientPage);
        deleteButton->setObjectName("deleteButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy2);
        deleteButton->setMinimumSize(QSize(0, 29));

        horizontalLayout_6->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(52, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_6);

        stackedWidget->addWidget(ListClientPage);
        NewAccountPage = new QWidget();
        NewAccountPage->setObjectName("NewAccountPage");
        horizontalLayout_24 = new QHBoxLayout(NewAccountPage);
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        label_13 = new QLabel(NewAccountPage);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(0, 50));
        label_13->setMaximumSize(QSize(16777215, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Semilight")});
        font2.setPointSize(20);
        label_13->setFont(font2);
        label_13->setLineWidth(1);

        horizontalLayout_28->addWidget(label_13);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_5);


        verticalLayout_7->addLayout(horizontalLayout_28);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_7->addItem(verticalSpacer_3);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(-1, -1, -1, 10);
        label_7 = new QLabel(NewAccountPage);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(100, 0));

        horizontalLayout_14->addWidget(label_7);

        In_search_CPF_account = new QLineEdit(NewAccountPage);
        In_search_CPF_account->setObjectName("In_search_CPF_account");
        In_search_CPF_account->setMaxLength(11);

        horizontalLayout_14->addWidget(In_search_CPF_account);

        searchAccountButton = new QPushButton(NewAccountPage);
        searchAccountButton->setObjectName("searchAccountButton");
        searchAccountButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_14->addWidget(searchAccountButton);

        clearButton = new QPushButton(NewAccountPage);
        clearButton->setObjectName("clearButton");
        clearButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_14->addWidget(clearButton);


        verticalLayout_7->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(-1, -1, -1, 10);
        label_19 = new QLabel(NewAccountPage);
        label_19->setObjectName("label_19");
        label_19->setMinimumSize(QSize(100, 0));

        horizontalLayout_15->addWidget(label_19);

        in_name_account = new QLineEdit(NewAccountPage);
        in_name_account->setObjectName("in_name_account");
        in_name_account->setReadOnly(true);

        horizontalLayout_15->addWidget(in_name_account);


        verticalLayout_7->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(-1, -1, -1, 10);
        label_20 = new QLabel(NewAccountPage);
        label_20->setObjectName("label_20");
        label_20->setMinimumSize(QSize(100, 0));

        horizontalLayout_16->addWidget(label_20);

        in_lastName_account = new QLineEdit(NewAccountPage);
        in_lastName_account->setObjectName("in_lastName_account");
        in_lastName_account->setReadOnly(true);

        horizontalLayout_16->addWidget(in_lastName_account);


        verticalLayout_7->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(-1, -1, -1, 10);
        label_40 = new QLabel(NewAccountPage);
        label_40->setObjectName("label_40");
        label_40->setMinimumSize(QSize(100, 0));

        horizontalLayout_17->addWidget(label_40);

        in_cpf_account = new QLineEdit(NewAccountPage);
        in_cpf_account->setObjectName("in_cpf_account");
        in_cpf_account->setMaxLength(11);
        in_cpf_account->setReadOnly(true);

        horizontalLayout_17->addWidget(in_cpf_account);


        verticalLayout_7->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_18->setContentsMargins(-1, -1, -1, 10);
        label_39 = new QLabel(NewAccountPage);
        label_39->setObjectName("label_39");
        label_39->setMinimumSize(QSize(100, 0));

        horizontalLayout_18->addWidget(label_39);

        in_profession_account = new QLineEdit(NewAccountPage);
        in_profession_account->setObjectName("in_profession_account");
        in_profession_account->setMaxLength(11);
        in_profession_account->setReadOnly(true);

        horizontalLayout_18->addWidget(in_profession_account);


        verticalLayout_7->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_19->setContentsMargins(-1, -1, -1, 10);
        label_15 = new QLabel(NewAccountPage);
        label_15->setObjectName("label_15");
        label_15->setMinimumSize(QSize(100, 0));

        horizontalLayout_19->addWidget(label_15);

        in_salary_account = new QDoubleSpinBox(NewAccountPage);
        in_salary_account->setObjectName("in_salary_account");
        in_salary_account->setEnabled(true);
        in_salary_account->setAutoFillBackground(false);
        in_salary_account->setReadOnly(true);
        in_salary_account->setButtonSymbols(QAbstractSpinBox::NoButtons);
        in_salary_account->setMaximum(999999999999999.000000000000000);

        horizontalLayout_19->addWidget(in_salary_account);


        verticalLayout_7->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        horizontalLayout_20->setContentsMargins(-1, -1, -1, 10);
        checking_account_radio = new QRadioButton(NewAccountPage);
        checking_account_radio->setObjectName("checking_account_radio");
        checking_account_radio->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_20->addWidget(checking_account_radio);

        special_account_radio = new QRadioButton(NewAccountPage);
        special_account_radio->setObjectName("special_account_radio");
        special_account_radio->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_20->addWidget(special_account_radio);


        verticalLayout_7->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalLayout_21->setContentsMargins(-1, -1, -1, 10);
        label_10 = new QLabel(NewAccountPage);
        label_10->setObjectName("label_10");

        horizontalLayout_21->addWidget(label_10);

        in_balance_account = new QDoubleSpinBox(NewAccountPage);
        in_balance_account->setObjectName("in_balance_account");
        in_balance_account->setEnabled(true);
        in_balance_account->setAutoFillBackground(false);
        in_balance_account->setButtonSymbols(QAbstractSpinBox::NoButtons);
        in_balance_account->setMaximum(999999999999999.000000000000000);

        horizontalLayout_21->addWidget(in_balance_account);


        verticalLayout_7->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalLayout_22->setContentsMargins(-1, -1, -1, 10);
        label_11 = new QLabel(NewAccountPage);
        label_11->setObjectName("label_11");

        horizontalLayout_22->addWidget(label_11);

        in_limit_account = new QDoubleSpinBox(NewAccountPage);
        in_limit_account->setObjectName("in_limit_account");
        in_limit_account->setEnabled(true);
        in_limit_account->setAutoFillBackground(false);
        in_limit_account->setWrapping(false);
        in_limit_account->setReadOnly(false);
        in_limit_account->setButtonSymbols(QAbstractSpinBox::NoButtons);
        in_limit_account->setMaximum(999999999999999.000000000000000);

        horizontalLayout_22->addWidget(in_limit_account);


        verticalLayout_7->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        create_account_button = new QPushButton(NewAccountPage);
        create_account_button->setObjectName("create_account_button");
        create_account_button->setMinimumSize(QSize(150, 50));
        create_account_button->setMaximumSize(QSize(100, 50));
        create_account_button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_23->addWidget(create_account_button);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_9);


        verticalLayout_7->addLayout(horizontalLayout_23);


        horizontalLayout_25->addLayout(verticalLayout_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_3);


        horizontalLayout_24->addLayout(horizontalLayout_25);

        stackedWidget->addWidget(NewAccountPage);
        ListAccountPage = new QWidget();
        ListAccountPage->setObjectName("ListAccountPage");
        verticalLayout_11 = new QVBoxLayout(ListAccountPage);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        label_9 = new QLabel(ListAccountPage);
        label_9->setObjectName("label_9");

        horizontalLayout_26->addWidget(label_9);

        in_CPF_listaccount = new QLineEdit(ListAccountPage);
        in_CPF_listaccount->setObjectName("in_CPF_listaccount");
        in_CPF_listaccount->setMaxLength(11);

        horizontalLayout_26->addWidget(in_CPF_listaccount);

        serachListaccountButton = new QPushButton(ListAccountPage);
        serachListaccountButton->setObjectName("serachListaccountButton");
        serachListaccountButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_26->addWidget(serachListaccountButton);

        all_accounts_button = new QPushButton(ListAccountPage);
        all_accounts_button->setObjectName("all_accounts_button");
        all_accounts_button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_26->addWidget(all_accounts_button);


        verticalLayout_9->addLayout(horizontalLayout_26);

        tableWidget_Accounts = new QTableWidget(ListAccountPage);
        if (tableWidget_Accounts->columnCount() < 4)
            tableWidget_Accounts->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_Accounts->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_Accounts->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_Accounts->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_Accounts->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        tableWidget_Accounts->setObjectName("tableWidget_Accounts");
        tableWidget_Accounts->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Accounts->horizontalHeader()->setMinimumSectionSize(200);
        tableWidget_Accounts->horizontalHeader()->setDefaultSectionSize(220);
        tableWidget_Accounts->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_9->addWidget(tableWidget_Accounts);


        verticalLayout_10->addLayout(verticalLayout_9);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        operations_button = new QPushButton(ListAccountPage);
        operations_button->setObjectName("operations_button");
        operations_button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_27->addWidget(operations_button);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_4);


        verticalLayout_10->addLayout(horizontalLayout_27);


        verticalLayout_11->addLayout(verticalLayout_10);

        stackedWidget->addWidget(ListAccountPage);
        OperationsPage = new QWidget();
        OperationsPage->setObjectName("OperationsPage");
        verticalLayout_8 = new QVBoxLayout(OperationsPage);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName("horizontalLayout_35");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName("horizontalLayout_34");
        label_72 = new QLabel(OperationsPage);
        label_72->setObjectName("label_72");
        label_72->setMinimumSize(QSize(0, 50));
        label_72->setMaximumSize(QSize(16777215, 50));
        label_72->setFont(font2);
        label_72->setLineWidth(1);

        horizontalLayout_34->addWidget(label_72);

        horizontalSpacer_45 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_45);


        verticalLayout_6->addLayout(horizontalLayout_34);

        verticalSpacer_33 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_33);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, -1, -1, 10);
        label_14 = new QLabel(OperationsPage);
        label_14->setObjectName("label_14");
        label_14->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(label_14);

        in_name_operations = new QLineEdit(OperationsPage);
        in_name_operations->setObjectName("in_name_operations");
        in_name_operations->setReadOnly(true);

        horizontalLayout->addWidget(in_name_operations);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName("horizontalLayout_30");
        horizontalLayout_30->setContentsMargins(-1, -1, -1, 10);
        label_16 = new QLabel(OperationsPage);
        label_16->setObjectName("label_16");
        label_16->setMinimumSize(QSize(100, 0));

        horizontalLayout_30->addWidget(label_16);

        in_accountID_operations = new QLineEdit(OperationsPage);
        in_accountID_operations->setObjectName("in_accountID_operations");
        in_accountID_operations->setReadOnly(true);

        horizontalLayout_30->addWidget(in_accountID_operations);


        verticalLayout_2->addLayout(horizontalLayout_30);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName("horizontalLayout_31");
        horizontalLayout_31->setContentsMargins(-1, -1, -1, 10);
        label_21 = new QLabel(OperationsPage);
        label_21->setObjectName("label_21");
        label_21->setMinimumSize(QSize(100, 0));

        horizontalLayout_31->addWidget(label_21);

        in_cpf_operations = new QLineEdit(OperationsPage);
        in_cpf_operations->setObjectName("in_cpf_operations");
        in_cpf_operations->setReadOnly(true);

        horizontalLayout_31->addWidget(in_cpf_operations);


        verticalLayout_2->addLayout(horizontalLayout_31);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName("horizontalLayout_32");
        horizontalLayout_32->setContentsMargins(-1, -1, -1, 10);
        label_17 = new QLabel(OperationsPage);
        label_17->setObjectName("label_17");

        horizontalLayout_32->addWidget(label_17);

        in_balance_operations = new QDoubleSpinBox(OperationsPage);
        in_balance_operations->setObjectName("in_balance_operations");
        in_balance_operations->setEnabled(true);
        in_balance_operations->setReadOnly(true);
        in_balance_operations->setButtonSymbols(QAbstractSpinBox::NoButtons);
        in_balance_operations->setMinimum(-10000000000000000303786028427003666890752.000000000000000);
        in_balance_operations->setMaximum(999999999999999945575230987042816.000000000000000);

        horizontalLayout_32->addWidget(in_balance_operations);


        verticalLayout_2->addLayout(horizontalLayout_32);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName("horizontalLayout_33");
        horizontalLayout_33->setContentsMargins(-1, -1, -1, 10);
        label_18 = new QLabel(OperationsPage);
        label_18->setObjectName("label_18");

        horizontalLayout_33->addWidget(label_18);

        in_limit_operations = new QDoubleSpinBox(OperationsPage);
        in_limit_operations->setObjectName("in_limit_operations");
        in_limit_operations->setReadOnly(true);
        in_limit_operations->setButtonSymbols(QAbstractSpinBox::NoButtons);
        in_limit_operations->setMinimum(-100000000000000008821361405306422640701865984.000000000000000);
        in_limit_operations->setMaximum(10000000000000000000000.000000000000000);

        horizontalLayout_33->addWidget(in_limit_operations);


        verticalLayout_2->addLayout(horizontalLayout_33);


        verticalLayout_6->addLayout(verticalLayout_2);

        verticalSpacer_32 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_32);

        withdraw_button = new QPushButton(OperationsPage);
        withdraw_button->setObjectName("withdraw_button");
        withdraw_button->setMinimumSize(QSize(150, 50));
        withdraw_button->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_6->addWidget(withdraw_button);

        transfer_button = new QPushButton(OperationsPage);
        transfer_button->setObjectName("transfer_button");
        transfer_button->setMinimumSize(QSize(0, 50));
        transfer_button->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_6->addWidget(transfer_button);

        deposit_button = new QPushButton(OperationsPage);
        deposit_button->setObjectName("deposit_button");
        deposit_button->setMinimumSize(QSize(0, 50));
        deposit_button->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_6->addWidget(deposit_button);


        horizontalLayout_35->addLayout(verticalLayout_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_6);


        verticalLayout_8->addLayout(horizontalLayout_35);

        stackedWidget->addWidget(OperationsPage);
        DepositPage = new QWidget();
        DepositPage->setObjectName("DepositPage");
        verticalLayout_16 = new QVBoxLayout(DepositPage);
        verticalLayout_16->setObjectName("verticalLayout_16");
        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName("horizontalLayout_36");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_36->addItem(horizontalSpacer_11);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_5);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        deposit_value = new QDoubleSpinBox(DepositPage);
        deposit_value->setObjectName("deposit_value");
        deposit_value->setMinimumSize(QSize(0, 80));
        QFont font3;
        font3.setPointSize(20);
        deposit_value->setFont(font3);
        deposit_value->setMaximum(10000000000000000303786028427003666890752.000000000000000);

        verticalLayout_14->addWidget(deposit_value);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_4);

        deposit_button_2 = new QPushButton(DepositPage);
        deposit_button_2->setObjectName("deposit_button_2");
        deposit_button_2->setMinimumSize(QSize(200, 80));
        QFont font4;
        font4.setPointSize(15);
        deposit_button_2->setFont(font4);
        deposit_button_2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_14->addWidget(deposit_button_2);


        verticalLayout_15->addLayout(verticalLayout_14);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_6);


        horizontalLayout_36->addLayout(verticalLayout_15);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_36->addItem(horizontalSpacer_7);


        verticalLayout_16->addLayout(horizontalLayout_36);

        stackedWidget->addWidget(DepositPage);
        WithDrawPage = new QWidget();
        WithDrawPage->setObjectName("WithDrawPage");
        layoutWidget = new QWidget(WithDrawPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 20, 914, 538));
        horizontalLayout_37 = new QHBoxLayout(layoutWidget);
        horizontalLayout_37->setObjectName("horizontalLayout_37");
        horizontalLayout_37->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_13);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_7);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName("verticalLayout_19");
        withdraw_value = new QDoubleSpinBox(layoutWidget);
        withdraw_value->setObjectName("withdraw_value");
        withdraw_value->setMinimumSize(QSize(0, 80));
        withdraw_value->setFont(font3);
        withdraw_value->setMaximum(10000000000000000303786028427003666890752.000000000000000);

        verticalLayout_19->addWidget(withdraw_value);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_19->addItem(verticalSpacer_8);

        withdraw_button_2 = new QPushButton(layoutWidget);
        withdraw_button_2->setObjectName("withdraw_button_2");
        withdraw_button_2->setMinimumSize(QSize(200, 80));
        withdraw_button_2->setFont(font4);
        withdraw_button_2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_19->addWidget(withdraw_button_2);


        verticalLayout_18->addLayout(verticalLayout_19);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_9);


        horizontalLayout_37->addLayout(verticalLayout_18);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_14);

        stackedWidget->addWidget(WithDrawPage);
        TransferPage = new QWidget();
        TransferPage->setObjectName("TransferPage");
        verticalLayout_58 = new QVBoxLayout(TransferPage);
        verticalLayout_58->setObjectName("verticalLayout_58");
        horizontalLayout_110 = new QHBoxLayout();
        horizontalLayout_110->setObjectName("horizontalLayout_110");
        horizontalSpacer_43 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_110->addItem(horizontalSpacer_43);

        verticalLayout_57 = new QVBoxLayout();
        verticalLayout_57->setObjectName("verticalLayout_57");
        verticalSpacer_28 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_57->addItem(verticalSpacer_28);

        verticalLayout_56 = new QVBoxLayout();
        verticalLayout_56->setObjectName("verticalLayout_56");
        transfer_value = new QDoubleSpinBox(TransferPage);
        transfer_value->setObjectName("transfer_value");
        transfer_value->setMinimumSize(QSize(0, 80));
        transfer_value->setFont(font3);
        transfer_value->setMaximum(10000000000000000303786028427003666890752.000000000000000);

        verticalLayout_56->addWidget(transfer_value);

        verticalSpacer_29 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_56->addItem(verticalSpacer_29);

        horizontalLayout_109 = new QHBoxLayout();
        horizontalLayout_109->setObjectName("horizontalLayout_109");
        label_70 = new QLabel(TransferPage);
        label_70->setObjectName("label_70");

        horizontalLayout_109->addWidget(label_70);

        in_accountID_transfer = new QLineEdit(TransferPage);
        in_accountID_transfer->setObjectName("in_accountID_transfer");
        in_accountID_transfer->setMaxLength(8);

        horizontalLayout_109->addWidget(in_accountID_transfer);


        verticalLayout_56->addLayout(horizontalLayout_109);

        verticalSpacer_30 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_56->addItem(verticalSpacer_30);

        transfer_button_4 = new QPushButton(TransferPage);
        transfer_button_4->setObjectName("transfer_button_4");
        transfer_button_4->setMinimumSize(QSize(200, 80));
        transfer_button_4->setFont(font4);
        transfer_button_4->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_56->addWidget(transfer_button_4);


        verticalLayout_57->addLayout(verticalLayout_56);

        verticalSpacer_31 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_57->addItem(verticalSpacer_31);


        horizontalLayout_110->addLayout(verticalLayout_57);

        horizontalSpacer_44 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_110->addItem(horizontalSpacer_44);


        verticalLayout_58->addLayout(horizontalLayout_110);

        stackedWidget->addWidget(TransferPage);

        verticalLayout_17->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 958, 25));
        ClientMenu = new QMenu(menubar);
        ClientMenu->setObjectName("ClientMenu");
        AccountMenu = new QMenu(menubar);
        AccountMenu->setObjectName("AccountMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(ClientMenu->menuAction());
        menubar->addAction(AccountMenu->menuAction());
        ClientMenu->addAction(RegisterClient);
        ClientMenu->addAction(ListClient);
        AccountMenu->addAction(actionCreate_New_Account);
        AccountMenu->addAction(actionList_Accounts);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        RegisterClient->setText(QCoreApplication::translate("MainWindow", "Register New Client", nullptr));
        ListClient->setText(QCoreApplication::translate("MainWindow", "List All Clients", nullptr));
        actionCreate_New_Account->setText(QCoreApplication::translate("MainWindow", "Create New Account", nullptr));
        actionList_Accounts->setText(QCoreApplication::translate("MainWindow", "List Accounts", nullptr));
        label->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Register Client", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "LastName:", nullptr));
        in_last_register->setInputMask(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "CPF:", nullptr));
        in_cpf_register->setInputMask(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Profession:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Salary: ", nullptr));
        cadastrar_button_register->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Search for CPF:", nullptr));
        search_clientlist_Button->setText(QCoreApplication::translate("MainWindow", "Seach", nullptr));
        all_clients_Button->setText(QCoreApplication::translate("MainWindow", "All Clients", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Clients->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Clients->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "CPF", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Clients->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Profession", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_Clients->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Salary", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "New Account", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Set Client CPF :", nullptr));
        searchAccountButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Name :", nullptr));
        in_name_account->setText(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "LastName :", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "CPF :", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "Profession :", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Salary : ", nullptr));
        checking_account_radio->setText(QCoreApplication::translate("MainWindow", "Checking Account", nullptr));
        special_account_radio->setText(QCoreApplication::translate("MainWindow", "Special Account", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Balance :", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Limit :", nullptr));
        create_account_button->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Serach for CPF :", nullptr));
        serachListaccountButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        all_accounts_button->setText(QCoreApplication::translate("MainWindow", "All Accounts", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_Accounts->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Account ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_Accounts->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_Accounts->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Holder", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_Accounts->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "CPF", nullptr));
        operations_button->setText(QCoreApplication::translate("MainWindow", "Account Operations", nullptr));
        label_72->setText(QCoreApplication::translate("MainWindow", "Operations", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Name : ", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "AccountID : ", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "CPF :", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Balance : ", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Limit :", nullptr));
        withdraw_button->setText(QCoreApplication::translate("MainWindow", "WithDraw", nullptr));
        transfer_button->setText(QCoreApplication::translate("MainWindow", "Tranfer", nullptr));
        deposit_button->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        deposit_button_2->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        withdraw_button_2->setText(QCoreApplication::translate("MainWindow", "WithDraw", nullptr));
        label_70->setText(QCoreApplication::translate("MainWindow", "AccountID to Transfer :", nullptr));
        transfer_button_4->setText(QCoreApplication::translate("MainWindow", "Transfer", nullptr));
        ClientMenu->setTitle(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        AccountMenu->setTitle(QCoreApplication::translate("MainWindow", "Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
