#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->listaLivros, &QListWidget::itemClicked, this, &MainWindow::on_listaLivros_itemClicked);
    connect(ui->btnFiltrarGenero, &QPushButton::clicked, this, &MainWindow::on_btnFiltrarGenero_clicked);
    connect(ui->btnMostrarTodos, &QPushButton::clicked, this, &MainWindow::on_btnMostrarTodos_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAdicionar_clicked() {
    QString titulo = ui->inputTitulo->text();
    QString autor = ui->inputAutor->text();
    QString isbn = ui->inputISBN->text();
    QString anoPublicacao = ui->inputAnoPublicacao->text();
    int quantidade = ui->inputQuantidade->value();
    QString genero = ui->inputGenero->text();

    Livro livro(titulo, autor, isbn, anoPublicacao, quantidade, genero);
    biblioteca.adicionarLivro(livro);

    atualizarListaLivros(biblioteca.getLivros());
    limparCampos();
}

void MainWindow::on_btnEditar_clicked() {
    int indice = ui->listaLivros->currentRow();
    if (indice >= 0) {
        QString titulo = ui->inputTitulo->text();
        QString autor = ui->inputAutor->text();
        QString isbn = ui->inputISBN->text();
        QString anoPublicacao = ui->inputAnoPublicacao->text();
        int quantidade = ui->inputQuantidade->value();
        QString genero = ui->inputGenero->text();

        Livro livro(titulo, autor, isbn, anoPublicacao, quantidade, genero);
        biblioteca.editarLivro(indice, livro);

        atualizarListaLivros(biblioteca.getLivros());
        limparCampos();
    }
}

void MainWindow::on_btnRemover_clicked() {
    int indice = ui->listaLivros->currentRow();
    if (indice >= 0) {
        int quantidadeARemover = ui->inputQuantidade->value();
        Livro livro = biblioteca.getLivro(indice);
        int novaQuantidade = livro.getQuantidade() - quantidadeARemover;

        if (novaQuantidade > 0) {
            livro.setQuantidade(novaQuantidade);
            biblioteca.editarLivro(indice, livro);
        } else {
            biblioteca.removerLivro(indice);
        }

        atualizarListaLivros(biblioteca.getLivros());
        limparCampos();
    }
}

void MainWindow::on_btnPesquisar_clicked() {
    QString titulo = ui->inputPesquisa->text();
    vector<Livro> resultado = biblioteca.pesquisarLivroPorTitulo(titulo);

    atualizarListaLivros(resultado);
}

void MainWindow::on_listaLivros_itemClicked() {
    int indice = ui->listaLivros->currentRow();
    if (indice >= 0) {
        Livro livro = biblioteca.getLivro(indice);
        ui->inputTitulo->setText(livro.getTitulo());
        ui->inputAutor->setText(livro.getAutor());
        ui->inputISBN->setText(livro.getISBN());
        ui->inputAnoPublicacao->setText(livro.getAnoPublicacao());
        ui->inputQuantidade->setValue(livro.getQuantidade());
        ui->inputGenero->setText(livro.getGenero());
    }
}

void MainWindow::on_btnFiltrarGenero_clicked() {
    QString genero = ui->inputFiltroGenero->text();
    vector<Livro> resultado = biblioteca.filtrarLivroPorGenero(genero);

    atualizarListaLivros(resultado);
}

void MainWindow::on_btnMostrarTodos_clicked() {
    atualizarListaLivros(biblioteca.getLivros());
}

void MainWindow::atualizarListaLivros(const vector<Livro>& livros) {
    ui->listaLivros->clear();
    for (const Livro &livro : livros) {
        QListWidgetItem *item = new QListWidgetItem(livro.getTitulo(), ui->listaLivros);
        item->setData(Qt::UserRole, QVariant::fromValue(livro));
    }
}

void MainWindow::limparCampos() {
    ui->inputTitulo->clear();
    ui->inputAutor->clear();
    ui->inputISBN->clear();
    ui->inputAnoPublicacao->clear();
    ui->inputQuantidade->setValue(0);
    ui->inputGenero->clear();
}
