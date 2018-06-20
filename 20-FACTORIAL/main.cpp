#include <iostream>
using namespace std ;
int main ()
{
cout << "Introduzca un número: " ;
int n ;
cin >> n ;
// Multiplicar: 1 2 3 4 5 6 7 ... n
int fact = 1 ;

		for (int i = 2 ; i <= n ; ++i) {
			// Proceso iterativo: acumular el valor de ’i’ al total
			cout << fact << " X "<< i << " --- " << fact * i << endl ;
			fact = fact * i ; // fact *= i ;
		}
cout << fact << endl ;
}