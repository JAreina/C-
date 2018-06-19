#include <iostream>
using namespace std ;
int main ()
{
double nota ;
cin >> nota ;
if ( ! ((nota >= 0.0) && (nota <= 10.0))) {
cout << "Error: 0 <= n <= 10" << endl ;
} else if (nota >= 9.5) {
cout << "Matrícula de Honor" << endl ;
} else if (nota >= 9.0) {
cout << "Sobresaliente" << endl ;
} else if (nota >= 7.0) {
cout << "Notable" << endl ;
} else if (nota >= 5.0) {
cout << "Aprobado" << endl ;
} else {
cout << "Suspenso" << endl ;
}
}