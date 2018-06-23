#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	struct Fecha {
		unsigned dia ;
		unsigned mes ;
		unsigned anyo ;
	} ;
	
	Fecha F_NAC ;
	
	 //F_NAC = { 20,12,2008}; 
	 F_NAC.dia = 23;
	 F_NAC.mes = 12;
	 F_NAC.anyo = 3000;
	 
	cout << F_NAC.anyo;
	return 0;
}
