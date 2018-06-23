#include <stdio.h>

int main(int argc, char **argv)
{
	struct persona {
		int edad;
		char nombre[50];
	} empleado;
	
	struct persona alumno; // declaramos la variable alumno de tipo persona (ANSI C)
	persona profesor; // declaramos la variable profesor de tipo persona
	persona *p; // declaramos un puntero a una variable persona

	persona juan= {21, "Juan"};
	return 0;
}
