#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


const string NOMBRE = "JAreina";
void leer_nombre(string& nm); // parametro de salida
void escribir_nombre(const string& nm); // parametro de entrada por referencia constante

int main(int argc, char **argv)
{

	
	string cadena = "esto es una cadena"; // asignación
	
	// comparación
	if ( NOMBRE < cadena){
		string concatenacion = cadena + " " + NOMBRE;
		concatenacion += " otra cadena sumada";
		cout << "CONCATENA " << concatenacion <<endl;
	}
	unsigned ncar = NOMBRE.size();
	   cout << "longitud de constante NOMBRE " << ncar << endl;
	   
     if (cadena.size() != 0) { 
	 /*...*/ 
	    cout << "longitud cadena "<< cadena.size()<< endl;
	 }
	 
	 /* ACCEDER A UN CARACTER DE UNA CADENA */
	 cout << "caracter en la posicion 2 : "<< NOMBRE[1] <<endl;
	 
	 /*resize()*/
	 string nombre = "pepe luis"; //nombre contiene pepe luis.
	 cout << nombre <<endl;
     nombre.resize(4); //ahora nombre contiene pepe.
	  cout << nombre <<endl;
     nombre.resize(7, 'x'); //ahora nombre contiene pepexxx.
       cout << nombre <<endl;
	   
	   
	   /* substring*/
	   int i = 2;
	   string sb = NOMBRE.substr(i); 
	   cout << sb << endl;
         sb = NOMBRE.substr(i, 4);
		cout << sb << endl;
	return 0;
}
