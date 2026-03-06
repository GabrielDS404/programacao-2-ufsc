#include "biblioteca.h"

void Biblioteca::adicionarLivro(const Livro &livro) {
    livros.push_back(livro);
}

void Biblioteca::editarLivro(int indice, const Livro &livro) {
    if (indice >= 0 && indice < livros.size()) {
        livros[indice] = livro;
    }
}

void Biblioteca::removerLivro(int indice) {
    if (indice >= 0 && indice < livros.size()) {
        livros.erase(livros.begin() + indice);
    }
}

Livro Biblioteca::getLivro(int indice) const {
    if (indice >= 0 && indice < livros.size()) {
        return livros[indice];
    }
    return Livro();
}

vector<Livro> Biblioteca::getLivros() const {
    return livros;
}

vector<Livro> Biblioteca::pesquisarLivroPorTitulo(const QString &titulo) const {
    vector<Livro> resultado;
    for (const Livro &livro : livros) {
        if (livro.getTitulo().contains(titulo, Qt::CaseInsensitive)) {
            resultado.push_back(livro);
        }
    }
    return resultado;
}

vector<Livro> Biblioteca::filtrarLivroPorAutor(const QString &autor) const {
    vector<Livro> resultado;
    for (const Livro &livro : livros) {
        if (livro.getAutor().contains(autor, Qt::CaseInsensitive)) {
            resultado.push_back(livro);
        }
    }
    return resultado;
}

vector<Livro> Biblioteca::filtrarLivroPorGenero(const QString &genero) const {
    vector<Livro> resultado;
    for (const Livro &livro : livros) {
        if (livro.getGenero().contains(genero, Qt::CaseInsensitive)) {
            resultado.push_back(livro);
        }
    }
    return resultado;
}
