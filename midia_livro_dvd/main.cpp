#include <iostream>

using namespace std;

#include "livro.h"
#include "dvd.h"

int main(int argc, char *argv[])
{
    Livro livro1;
    livro1.setCodigo("1");
    livro1.setAutor("John Kleinberg e Eva Tardos");
    livro1.setISBN("978-0321295354");
    livro1.setTitulo("Algorithm Design");
    livro1.setCategoria("Livro");
    livro1.setAno(2007);
    livro1.imprimir();

		cout<<"\n";
		
		Livro livro2("978-85-9454-078-2", "H. P. Lovecraft", "666", 2017, "H. P. Lovecraft: Medo Clássico", "Terror");
		livro2.imprimir();
		
		
    cout<<"\n";

    Dvd dvd1;
    dvd1.setCodigo("2");
    dvd1.setDiretor("Quentin Tarantino");
    dvd1.setProdutor("Miramax");
    dvd1.setTitulo("Pulp Fiction");
    dvd1.setCategoria("Filme");
    dvd1.setAno(1994);
    dvd1.imprimir();

    cout<<"\n";


    return 0;
}
