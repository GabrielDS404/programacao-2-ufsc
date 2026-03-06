#include "livro.h"

Livro::Livro(QString titulo, QString autor, QString isbn, QString anoPublicacao, int quantidade, QString genero)
    : titulo(titulo), autor(autor), isbn(isbn), anoPublicacao(anoPublicacao), quantidade(quantidade), genero(genero) {}

QString Livro::getTitulo() const {
    return titulo;
}

QString Livro::getAutor() const {
    return autor;
}

QString Livro::getISBN() const {
    return isbn;
}

QString Livro::getAnoPublicacao() const {
    return anoPublicacao;
}

int Livro::getQuantidade() const {
    return quantidade;
}

QString Livro::getGenero() const {
    return genero;
}

void Livro::setTitulo(const QString &titulo) {
    this->titulo = titulo;
}

void Livro::setAutor(const QString &autor) {
    this->autor = autor;
}

void Livro::setISBN(const QString &isbn) {
    this->isbn = isbn;
}

void Livro::setAnoPublicacao(const QString &anoPublicacao) {
    this->anoPublicacao = anoPublicacao;
}

void Livro::setQuantidade(int quantidade) {
    this->quantidade = quantidade;
}

void Livro::setGenero(const QString &genero) {
    this->genero = genero;
}
