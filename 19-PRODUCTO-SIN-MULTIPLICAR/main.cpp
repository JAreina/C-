#include <iostream>
using namespace std ;
int main ()
{
cout << "Introduzca dos números: " ;
int m, n ;
cin >> m >> n ;
int total = 0 ;

for (int i = 0 ; i < n ; ++i) {
     // Proceso iterativo: acumular el valor de ’m’ al total
      total = total + m ; // total += m ;
}
cout << total << endl ;
}