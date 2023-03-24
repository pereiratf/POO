#include "dvd.h"

string Dvd::getDiretor() const
{
    return diretor;
}

void Dvd::setDiretor(const string &value)
{
    diretor = value;
}

string Dvd::getProdutor() const
{
    return produtor;
}

void Dvd::setProdutor(const string &value)
{
    produtor = value;
}

void Dvd::imprimir()
{
    cout<<"\n Titulo:\t"<<this->getTitulo();
    cout<<"\n Ano:\t"<<this->getAno();
    cout<<"\n Codigo:\t"<<this->getCodigo();
    cout<<"\n Categoria:\t"<<this->getCategoria();
    cout<<"\n Diretor:\t"<<this->getDiretor();
    cout<<"\n Produtor:\t"<<this->getProdutor();
}

Dvd::Dvd()
{

}
