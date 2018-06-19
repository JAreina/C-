#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{
int num_1, num_2 ;
char numero;
cout << "Introduce el primer número: " <<endl;


num_1 = cin.get() ;// lee un carácter sin eliminar espacios en blanco iniciales
                   // devuelve el numero ascii  de 4   ---> 52
cin.clear();
cout << "primer numero codigo ascii" << num_1 <<endl;
cout << "Introduce el segundo número: " <<endl;
cin >>  num_2 ; // entrada segundo numero
cout <<  "num2 " << num_2 <<endl;
numero = char(num_1);  //casting  convertir a char el numero ascii
cout << "num1 convertido a char " << numero <<endl;
cout << "Multiplicación: " << (int(num_1) * num_2) << endl ;
cout << "Fin" << endl ;

return 0;
}