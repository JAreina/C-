#include <iostream>
using namespace std;

int x=10; //variable global
int main(void)
{
	int x = 20; //variable local
	cout << "LOCAL  x = 20; "<< x <<endl;
	int y = ::x; // asigna a y el valor 10
	cout << "int y = ::x; // x es global "<< y <<endl;
	int t = x; // asigna a t el valor 20

return 0;
}
