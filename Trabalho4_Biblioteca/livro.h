#ifndef LIVRO_H
#define LIVRO_H

#include <QString>
#include <QMetaType>

using namespace std;

class Livro {
public:
    Livro(QString titulo = "", QString autor = "", QString isbn = "", QString anoPublicacao = "", int quantidade = 0, QString genero = "");
    QString getTitulo() const;
    QString getAutor() const;
    QString getISBN() const;
    QString getAnoPublicacao() const;
    int getQuantidade() const;
    QString getGenero() const;

    void setTitulo(const QString &titulo);
    void setAutor(const QString &autor);
    void setISBN(const QString &isbn);
    void setAnoPublicacao(const QString &anoPublicacao);
    void setQuantidade(int quantidade);
    void setGenero(const QString &genero);

private:
    QString titulo;
    QString autor;
    QString isbn;
    QString anoPublicacao;
    int quantidade;
    QString genero;
};

Q_DECLARE_METATYPE(Livro)

#endif // LIVRO_H
