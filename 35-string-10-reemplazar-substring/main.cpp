#include <stdio.h>
#include <string>
#include <iostream>
using namespace std ;


void reemplazar (string& str, unsigned desde, unsigned hasta, const string& nueva);

int main(int argc, char **argv)
{
	string palabra;
	string nueva;
	unsigned desde;
	unsigned hasta;
	cout << "introduce una palabra"<<endl;
	cin >> palabra;
	cout << "introduce la cadena nueva"<<endl;
	cin >> nueva;
	cout << "Indica  posicióon DESDE la que cortar cadena "<<endl;
	cin >> desde;
	cout << "Indica posición HASTA LA QUE CORTAR "<<endl;
	cin >> hasta;
	reemplazar(palabra,desde, hasta, nueva);
	return 0;
}

void reemplazar (string& str,
                 unsigned desde,
                 unsigned hasta,
                 const string& nueva)
{
	cout << "CADENA INICIAL "<< str << endl;
	
	if (desde + hasta < str.size()) {
		str = str.substr(0, desde) + nueva + 
		      str.substr(desde + hasta, str.size() - (desde + hasta)) ;
			  cout << "CADENA FINAL "<< str <<endl;
	} else if (desde <= str.size()) {
		str = str.substr(0, desde) + nueva ;
		 cout << "CADENA FINAL "<< str <<endl;
	}
}

/* de la biblioteca string  funcion replace
 
 * str.replace(desde, hasta, nueva)
 * */