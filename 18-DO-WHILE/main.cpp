#include <iostream>
using namespace std;

int main ()
{
int num ;

	do {
		cout << "Tecle un número par: " ;
		cin >> num ;
	} while ((num % 2) != 0) ;


cout << "El número par es " << num << endl ;
}