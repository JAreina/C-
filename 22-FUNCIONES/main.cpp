#include <iostream>
using namespace std ;
int calcular_menor(int a, int b)
{
	int menor ;
	if (a < b) {
		menor = a ;
	} else {
		menor = b ;
	}
	return menor ;
}
void ordenar(int& a, int& b)
{
	if (a > b) {
		int aux = a ;
		a = b ;
		b = aux ;
	}
}
int main()
{
	int x = 8 ;
	int y = 4 ;
	int z = calcular_menor(x, y) ;
	cout << "Menor: " << z << endl ;
	ordenar(x, y) ;
	cout << x << " " << y << endl ;
}
