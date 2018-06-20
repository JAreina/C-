#include <iostream>
#include <cassert>
using namespace std ;
//---------------------------
void dividir (int,int);

int main(){
	dividir(20,2);
 return 0;
}

void dividir(int dividendo, int divisor)
{
	assert(divisor != 0) ; // PRE-CONDICION
	int cociente = dividendo / divisor ;
	int resto = dividendo % divisor ;
	cout << "resto: " <<resto << " cociente: "<< cociente << endl;
	assert(dividendo == (divisor * cociente + resto)) ; // POST-CONDICION
}



