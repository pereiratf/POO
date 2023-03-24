#include "livro.h"

string Livro::getAutor() const
{
    return autor;
}

void Livro::setAutor(const string &value){
    autor = value;
}

string Livro::getISBN() const
{
    return ISBN;
}

void Livro::setISBN(const string &value){
    ISBN = value;
}

void Livro::imprimir()
{
    cout<<"\n Titulo:\t"<<this->getTitulo();
    cout<<"\n Ano:\t"<<this->getAno();
    cout<<"\n Codigo:\t"<<this->getCodigo();
    cout<<"\n Categoria:\t"<<this->getCategoria();
    cout<<"\n Autor:\t"<<this->getAutor();
    cout<<"\n ISBN:\t"<<this->getISBN();
}

Livro::Livro()
{

}

Livro::Livro(const string &ISBN, const string &autor, const string &codigo, int ano, const string &titulo, const string &categoria)
	: Midia(codigo, ano, titulo, categoria), ISBN(ISBN), autor(autor)
{
	
}
	
