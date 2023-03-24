#ifndef DVD_H
#define DVD_H

#include "midia.h"

class Dvd : public Midia
{
private:
    string produtor;
    string diretor;
public:
    Dvd();

    string getProdutor() const;
    void setProdutor(const string &value);
    string getDiretor() const;
    void setDiretor(const string &value);
    void imprimir();
};

#endif // DVD_H
