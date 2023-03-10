#include <QCoreApplication>


#include "cliente.h"
#include "endereco.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Endereco e("Alameda dos Anjos", 123);

    Cliente c("Julios", 785493482, e);



    c.imprimir();


    return a.exec();
}
