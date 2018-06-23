#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	struct empleado {
		string nombre;
		int hijos;
		float sueldo;
	};
	
	
	empleado *obj1 = new empleado;
	obj1->nombre="Olga";
	obj1->hijos=1;
	obj1->sueldo=1200;
	delete  obj1;
	
	empleado *obj2 = new empleado;
	obj2->nombre="Yola";
	obj2->hijos=1;
	obj1->sueldo=1200;
	delete obj2;
	return 0;
}
