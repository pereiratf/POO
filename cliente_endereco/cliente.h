#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>

using namespace std;
#include "endereco.h"

class Cliente
{
private:
    string nome;
    int cpf;
    Endereco endereco;
public:
    Cliente();
    Cliente(string nome, int cpf, Endereco endereco);
    void imprimir();
};

#endif // CLIENTE_H
