#include "cliente.h"


void Cliente::imprimir(){
    cout << "Nome:" << this->nome << endl;
    cout << "CPF:" << this->cpf << endl;
    this->endereco.imprimir();
}


Cliente::Cliente()
{

}

Cliente::Cliente(string nome, int cpf, Endereco endereco)
{
    this->nome = nome;
    this->cpf = cpf;
    this->endereco = endereco;
}

