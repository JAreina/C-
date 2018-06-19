#include <iostream>
using namespace std ;
const double EUR_PTS = 166.386 ; // Declaración de constante GLOBAL
void ambito();

int main()
{
   cout << "Introduce la cantidad (en euros): " ;
   double euros ; // Declaración de variable LOCAL
   cin >> euros ;
   double pesetas = euros * EUR_PTS ; // Declaración de variable LOCAL
   cout << euros << " Euros equivalen a " << pesetas << " Pts" << endl ;
   
   ambito();
}


void ambito(){
	

int x = 3 ;
int z = x * 2 ; // x es vble de tipo int con valor 3
			{// BLOQUE
			double x = 5.0 ;
			double n = x * 5 ; // x es vble de tipo double con valor 5.0
			 cout << "local : " << n << endl;
			}
int y = z + 4 ; // z es vble de tipo int con valor 6
cout << "GLOBAL " << y <<endl;
}