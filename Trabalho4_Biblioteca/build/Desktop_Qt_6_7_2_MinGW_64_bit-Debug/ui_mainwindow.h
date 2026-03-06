/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *labelTitulo;
    QLineEdit *inputTitulo;
    QLabel *labelAutor;
    QLineEdit *inputAutor;
    QLabel *labelISBN;
    QLineEdit *inputISBN;
    QLabel *labelAnoPublicacao;
    QLineEdit *inputAnoPublicacao;
    QLabel *labelQuantidade;
    QSpinBox *inputQuantidade;
    QLabel *labelGenero;
    QLineEdit *inputGenero;
    QListWidget *listaLivros;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdicionar;
    QPushButton *btnEditar;
    QPushButton *btnRemover;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPesquisa;
    QLineEdit *inputPesquisa;
    QPushButton *btnPesquisar;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelFiltroGenero;
    QLineEdit *inputFiltroGenero;
    QPushButton *btnFiltrarGenero;
    QPushButton *btnMostrarTodos;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        labelTitulo = new QLabel(groupBox);
        labelTitulo->setObjectName("labelTitulo");

        formLayout->setWidget(0, QFormLayout::LabelRole, labelTitulo);

        inputTitulo = new QLineEdit(groupBox);
        inputTitulo->setObjectName("inputTitulo");

        formLayout->setWidget(0, QFormLayout::FieldRole, inputTitulo);

        labelAutor = new QLabel(groupBox);
        labelAutor->setObjectName("labelAutor");

        formLayout->setWidget(1, QFormLayout::LabelRole, labelAutor);

        inputAutor = new QLineEdit(groupBox);
        inputAutor->setObjectName("inputAutor");

        formLayout->setWidget(1, QFormLayout::FieldRole, inputAutor);

        labelISBN = new QLabel(groupBox);
        labelISBN->setObjectName("labelISBN");

        formLayout->setWidget(2, QFormLayout::LabelRole, labelISBN);

        inputISBN = new QLineEdit(groupBox);
        inputISBN->setObjectName("inputISBN");

        formLayout->setWidget(2, QFormLayout::FieldRole, inputISBN);

        labelAnoPublicacao = new QLabel(groupBox);
        labelAnoPublicacao->setObjectName("labelAnoPublicacao");

        formLayout->setWidget(3, QFormLayout::LabelRole, labelAnoPublicacao);

        inputAnoPublicacao = new QLineEdit(groupBox);
        inputAnoPublicacao->setObjectName("inputAnoPublicacao");

        formLayout->setWidget(3, QFormLayout::FieldRole, inputAnoPublicacao);

        labelQuantidade = new QLabel(groupBox);
        labelQuantidade->setObjectName("labelQuantidade");

        formLayout->setWidget(4, QFormLayout::LabelRole, labelQuantidade);

        inputQuantidade = new QSpinBox(groupBox);
        inputQuantidade->setObjectName("inputQuantidade");

        formLayout->setWidget(4, QFormLayout::FieldRole, inputQuantidade);

        labelGenero = new QLabel(groupBox);
        labelGenero->setObjectName("labelGenero");

        formLayout->setWidget(5, QFormLayout::LabelRole, labelGenero);

        inputGenero = new QLineEdit(groupBox);
        inputGenero->setObjectName("inputGenero");

        formLayout->setWidget(5, QFormLayout::FieldRole, inputGenero);


        verticalLayout->addWidget(groupBox);

        listaLivros = new QListWidget(centralwidget);
        listaLivros->setObjectName("listaLivros");

        verticalLayout->addWidget(listaLivros);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnAdicionar = new QPushButton(centralwidget);
        btnAdicionar->setObjectName("btnAdicionar");

        horizontalLayout->addWidget(btnAdicionar);

        btnEditar = new QPushButton(centralwidget);
        btnEditar->setObjectName("btnEditar");

        horizontalLayout->addWidget(btnEditar);

        btnRemover = new QPushButton(centralwidget);
        btnRemover->setObjectName("btnRemover");

        horizontalLayout->addWidget(btnRemover);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelPesquisa = new QLabel(centralwidget);
        labelPesquisa->setObjectName("labelPesquisa");

        horizontalLayout_2->addWidget(labelPesquisa);

        inputPesquisa = new QLineEdit(centralwidget);
        inputPesquisa->setObjectName("inputPesquisa");

        horizontalLayout_2->addWidget(inputPesquisa);

        btnPesquisar = new QPushButton(centralwidget);
        btnPesquisar->setObjectName("btnPesquisar");

        horizontalLayout_2->addWidget(btnPesquisar);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelFiltroGenero = new QLabel(centralwidget);
        labelFiltroGenero->setObjectName("labelFiltroGenero");

        horizontalLayout_3->addWidget(labelFiltroGenero);

        inputFiltroGenero = new QLineEdit(centralwidget);
        inputFiltroGenero->setObjectName("inputFiltroGenero");

        horizontalLayout_3->addWidget(inputFiltroGenero);

        btnFiltrarGenero = new QPushButton(centralwidget);
        btnFiltrarGenero->setObjectName("btnFiltrarGenero");

        horizontalLayout_3->addWidget(btnFiltrarGenero);

        btnMostrarTodos = new QPushButton(centralwidget);
        btnMostrarTodos->setObjectName("btnMostrarTodos");

        horizontalLayout_3->addWidget(btnMostrarTodos);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sistema de Invent\303\241rio de Biblioteca", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Informa\303\247\303\265es do Livro", nullptr));
        labelTitulo->setText(QCoreApplication::translate("MainWindow", "T\303\255tulo:", nullptr));
        labelAutor->setText(QCoreApplication::translate("MainWindow", "Autor:", nullptr));
        labelISBN->setText(QCoreApplication::translate("MainWindow", "ISBN:", nullptr));
        labelAnoPublicacao->setText(QCoreApplication::translate("MainWindow", "Ano de Publica\303\247\303\243o:", nullptr));
        labelQuantidade->setText(QCoreApplication::translate("MainWindow", "Quantidade:", nullptr));
        labelGenero->setText(QCoreApplication::translate("MainWindow", "G\303\252nero:", nullptr));
        btnAdicionar->setText(QCoreApplication::translate("MainWindow", "Adicionar", nullptr));
        btnEditar->setText(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        btnRemover->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        labelPesquisa->setText(QCoreApplication::translate("MainWindow", "Pesquisar:", nullptr));
        btnPesquisar->setText(QCoreApplication::translate("MainWindow", "Pesquisar", nullptr));
        labelFiltroGenero->setText(QCoreApplication::translate("MainWindow", "Filtrar por G\303\252nero:", nullptr));
        btnFiltrarGenero->setText(QCoreApplication::translate("MainWindow", "Filtrar", nullptr));
        btnMostrarTodos->setText(QCoreApplication::translate("MainWindow", "Mostrar Todos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
