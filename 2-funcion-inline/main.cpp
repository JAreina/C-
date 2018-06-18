#include <iostream>
using namespace std;

inline float cubo( const float s ) { 
	return s * s * s; 
	}
int main( )
{
cout << "Introduce la longitud del lado de tu cubo: ";
float lado;
cin >> lado;
cout << "El volumen del cubo de lado "
<< lado << " es " << cubo( lado ) << "\n";
return 0;
}