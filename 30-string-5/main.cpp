#include <iostream>
#include <string>
using namespace std ;
int main()
{
	string nombre ;
	int edad ;
	for (int i = 0; i < 5; ++i) {
		
		cout << "Introduzca el nombre: " ;
		cin >> ws ; // elimina los espacios en blanco y fin de línea
		getline(cin, nombre) ;
		cout << "Introduzca edad: " ;
		cin >> edad ;
		cin.ignore(10000, '\n') ; // elimina todos los caracteres del buffer hasta ’\n’
		cout << "Edad: " << edad << " Nombre: [" << nombre << "]" << endl ;
	}
}
