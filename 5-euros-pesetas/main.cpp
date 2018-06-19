#include <iostream>
using namespace std ;

const double EUR_PTS = 166.386 ;

int main()
{
	cout << "Introduce la cantidad (en euros): " ;
	double euros ;
	cin >> euros ; // entrada al programa
	double pesetas = euros * EUR_PTS ;
	cout << euros << " Euros equivalen a " << pesetas << " Pts" << endl ; // salida 
 return 0 ;
}