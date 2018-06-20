#include <iostream>
#include <string>
using namespace std ;
int main()
{
	string nombre ;
	cout << "Introduzca el nombre: " ;
	cin >> nombre ;
	cout << "Nombre: " << nombre << endl ;
	// no recoge lo escrito despues de un espacio en blanco
	// usar getline    28-string-3
}
