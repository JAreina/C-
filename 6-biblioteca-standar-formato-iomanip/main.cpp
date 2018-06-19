#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{
bool x = true ;
cout << boolalpha << x <<endl; // escribe los booleanos como ’false’ o ’true’
cout << dec << 27 <<endl; // escribe 27 (decimal)
cout << hex << 27 <<endl; // escribe 1b (hexadecimal)
cout << oct << 27 <<endl; // escribe 33 (octal)
cout << setprecision(2) << 4.567 <<endl; // escribe 4.6
cout << setw(5) << 234 <<endl; // escribe " 234"
cout << setfill('#') << setw(5) << 234 <<endl; // escribe "##234"
}