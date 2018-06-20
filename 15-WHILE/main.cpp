#include <iostream>
using namespace std ;

const double EUR_PTS = 166.386 ;
int main()
{
char resp ;
cout << "Teclee P (a Pesetas), E (a Euros) o F (Fin): " ;
cin >> resp ;
while (resp != 'F'){
cout << "Introduce la cantidad : " ;
double cantidad, result ;
cin >> cantidad ;
if (resp == 'P'){
result = cantidad * EUR_PTS ;
}else{
result = cantidad / EUR_PTS ;
}
cout << cantidad << " equivale a " << result << endl ;
cout << "Teclee P (a Pesetas), E (a Euros) o F (Fin): " ;
cin >> resp ;
}
}