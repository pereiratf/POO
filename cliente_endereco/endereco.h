#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>

using namespace std;

class Endereco
{
private:
    string rua;
    int numero;

public:
    Endereco();
    Endereco(string nome, int cpf);
    void imprimir();
};

#endif // ENDERECO_H
