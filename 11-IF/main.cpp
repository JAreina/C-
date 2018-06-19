#include <iostream>
using namespace std ;
const double EUR_PTS = 166.386 ;
int main()
{
	char resp ;
	cout << "Teclee p para convertir a Pesetas y e para convertir a Euros: " ;
	cin >> resp ;
	cout << "Introduce la cantidad : " ;
	double cantidad, result ;
	cin >> cantidad ;
	
		if (resp == 'p') {
			result = cantidad * EUR_PTS ;
			cout << cantidad << " euros equivale a " << result << " pesetas" <<endl ;
		} else {
			result = cantidad / EUR_PTS ;
			cout << cantidad << " pesetas equivale a " << result << " euros "<< endl ;
		}
	
	
}