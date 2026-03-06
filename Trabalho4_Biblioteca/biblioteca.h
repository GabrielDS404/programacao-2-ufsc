#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "livro.h"
#include <vector>
#include <QString>

using namespace std;

class Biblioteca {
public:
    void adicionarLivro(const Livro &livro);
    void editarLivro(int indice, const Livro &livro);
    void removerLivro(int indice);
    Livro getLivro(int indice) const;
    vector<Livro> getLivros() const;

    vector<Livro> pesquisarLivroPorTitulo(const QString &titulo) const;
    vector<Livro> filtrarLivroPorAutor(const QString &autor) const;
    vector<Livro> filtrarLivroPorGenero(const QString &genero) const;

private:
    vector<Livro> livros;
};

#endif
