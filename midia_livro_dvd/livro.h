#ifndef LIVRO_H
#define LIVRO_H

#include "midia.h"

class Livro: public Midia
{
private:
    string ISBN;
    string autor;
 public:
    Livro();
		Livro(const string &ISBN, const string &autor, const string &codigo, int ano, const string &titulo, const string &categoria);
    string getAutor() const;
    void setAutor(const string &value);
    string getISBN() const;
    void setISBN(const string &value);
    void imprimir();
};

#endif // LIVRO_H
