#include <iostream>
using namespace std ;
int main ()
{
cout << "Introduzca dos números enteros:  " ;
int dividendo, divisor ;
cin >> dividendo >> divisor ;

		if (divisor == 0) {
     		cout << "El divisor no puede ser cero" << endl ;
		} else {
	    	    int resto = dividendo ;
		        int cociente = 0 ;
			
				while (resto >= divisor) {
					resto -= divisor ;
					++cociente ;
				}
		  cout << "cociente: " <<cociente << " resto: " << resto << endl ;
		}
}