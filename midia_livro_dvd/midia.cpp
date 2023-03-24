#include "midia.h"


string Midia::getTitulo() const
{
    return titulo;
}

void Midia::setTitulo(const string &value){
    titulo = value;
}

int Midia::getAno() const
{
    return ano;
}

void Midia::setAno(const int &value){
    ano = value;
}

string Midia::getCodigo() const
{
    return codigo;
}

void Midia::setCodigo(const string &value){
    codigo = value;
}

string Midia::getCategoria() const
{
    return categoria;
}

void Midia::setCategoria(const string &value){
    categoria = value;
}

void Midia::imprimir()
{
    cout<<"\n Titulo:\t"<<this->getTitulo();
    cout<<"\n Ano:\t"<<this->getAno();
    cout<<"\n Codigo:\t"<<this->getCodigo();
    cout<<"\n Categoria:\t"<<this->getCategoria();
}

void imprimir();

Midia::Midia()
{
	
}

Midia::Midia(const string &codigo, int ano, const string &titulo, const string &categoria)
	: codigo(codigo), ano(ano), titulo(titulo), categoria(categoria)
{


}
