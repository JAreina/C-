int calcular_menor(int a, int b) ; // prototipo de ’calcular_menor’

int main()
{
	int x = 8 ;
	int y = 4 ;
	int z = calcular_menor(x, y) ;
}
int calcular_menor(int a, int b) // definición de ’calcular_menor’
{
	int menor ;
	if (a < b) {
	menor = a ;
	} else {
	menor = b ;
	}
	return menor ;
}