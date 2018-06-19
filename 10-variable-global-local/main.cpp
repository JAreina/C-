#include <iostream>
using namespace std ;
const double EUR_PTS = 166.386 ; // Declaración de constante GLOBAL

int main()
{
   cout << "Introduce la cantidad (en euros): " ;
   double euros ; // Declaración de variable LOCAL
   cin >> euros ;
   double pesetas = euros * EUR_PTS ; // Declaración de variable LOCAL
   cout << euros << " Euros equivalen a " << pesetas << " Pts" << endl ;
}