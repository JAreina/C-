#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int n=100;
	int *var_puntero = new int[n];
	delete var_puntero;


	int *obj = new int[n]; //asigna
	delete [] obj; //libera

	int *obj2 = new int;
	*obj2=7.2;
	delete obj2;

	int * i = new int; // reservamos espacio para un entero, i apunta a él
	delete i; // liberamos el espacio reservado para i
	int * v = new int[10]; // reservamos espacio contiguo para 10 enteros, v apunta
// al primero
	delete []v; // Liberamos el espacio reservado para v
	
	
	int *ii = new int (5); // reserva espacio para un entero y le asigna el valor
	return 0;
}
