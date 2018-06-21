#include <stdio.h>
#include <string>
#include <iostream>
using namespace std ;
bool es_palindromo(const string & palabra);

int main(int argc, char **argv)
{
	bool resultado;
	string palabra;
	cout << "escribe una palabra palindromo"<<endl;
	cin >> palabra;
	resultado = es_palindromo(palabra);
	(resultado) ? cout << "es palindroma": cout << "no es palindromo";
	return 0;
}


bool es_palindromo (const string& palabra)
{
	bool ok = false ;
	if (palabra.size() > 0) {
		unsigned i = 0 ;
		unsigned j = palabra.size() - 1 ;
		while ((i < j) && (palabra[i] == palabra[j])) {
			++i ;
			--j ;
		}
		ok = i >= j ;
	}
	return ok ;
}
