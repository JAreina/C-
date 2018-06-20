#include <iostream>
using namespace std ;
int main ()
{
	int num, divisor ;
	cin >> num ;
	
	if (num <= 1) {
	    divisor = 1 ;
	} else {
	   divisor = 2 ;
	   
	while ((num % divisor) != 0) {
	     ++divisor ;
    }
}
cout << "El primer divisor de " << num << " es " << divisor << endl ;
}