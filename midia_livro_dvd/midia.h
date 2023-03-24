#ifndef MIDIA_H
#define MIDIA_H

#include <iostream>
using namespace std;

class Midia
{
private:
    string codigo;
    int ano;
    string titulo;
    string categoria;

public:
		Midia();
    Midia(const string &codigo, int ano, const string &titulo, const string &categoria);

//    O const retorna o ponteiro para this, ou seja, para a instância atual, uma constante.
//    Então não se pode alterar nenhum membro deste objeto. É uma forma de garantir que o método não produza efeitos colaterais no objeto*/

    string getTitulo() const;
    void setTitulo(const string &value);
    int getAno() const;
    void setAno(const int &value);
    string getCodigo() const;
    void setCodigo(const string &value);
    string getCategoria() const;
    void setCategoria(const string &value);
    virtual void imprimir();
};

#endif // MIDIA_H
