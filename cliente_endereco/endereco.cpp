#include "endereco.h"

void Endereco::imprimir(){
    cout << "Endereco Rua:" << this->rua << " Numero:" << this->numero << endl;
}

Endereco::Endereco()
{

}
Endereco::Endereco(string rua, int numero)
{
    this->rua = rua;
    this->numero = numero;
}
