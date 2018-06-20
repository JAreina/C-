#include <iostream>
#include <string>
using namespace std ;

const char DELIMITADOR = '.' ;
int main()
{
	string nombre ;
	cout << "Introduzca el nombre: " ;
	getline(cin, nombre, DELIMITADOR) ;
	cout << "Nombre: " << nombre << endl ;
	// recoge solo la entrada hasta que se escribe un punto
	// el resto, a partir del punto lo ignora.
}
