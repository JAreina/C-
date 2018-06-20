#include <iostream>
using namespace std ;

void ordenar(int& menor, int& mayor)
{
	if (mayor < menor) {
		int aux = menor ;
		menor = mayor ;
		mayor = aux ;
	}
}
bool es_primo(unsigned int x)
{
	unsigned i = 2;
	while ((i <= x/2) && ( x % i != 0)) {
		i++;
	}
	return (i == x/2+1) ;
}
void primos(int min, int max)
{
	cout << "Números primos entre " << min << " y " << max << endl ;
	for (int i = min ; i <= max ; ++i) {
		if (es_primo(i)) {
			cout << i << " " ;
		}
	}
	cout << endl ;
}
int main()
{
	int min, max ;
	cout << "Introduzca el rango de valores " ;
	cin >> min >> max ;
	ordenar(min, max) ;
	primos(min, max) ;
}
