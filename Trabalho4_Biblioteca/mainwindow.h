#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "livro.h"
#include "biblioteca.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAdicionar_clicked();
    void on_btnEditar_clicked();
    void on_btnRemover_clicked();
    void on_btnPesquisar_clicked();
    void on_listaLivros_itemClicked();
    void on_btnFiltrarGenero_clicked();
    void on_btnMostrarTodos_clicked();

private:
    Ui::MainWindow *ui;
    Biblioteca biblioteca;

    void atualizarListaLivros(const vector<Livro>& livros);
    void limparCampos();
};

#endif // MAINWINDOW_H
