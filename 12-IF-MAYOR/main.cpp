#include <iostream>
using namespace std ;
int main ()
{
int a, b, c ;
cin >> a >> b >> c ;
int mayor = a ;
if (b > mayor) {
mayor = b ;
}
if (c > mayor) {
mayor = c ;
}
cout << mayor << endl ;
}