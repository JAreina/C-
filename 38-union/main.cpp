#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	union codigo {
		int i;
		float f;
	} cod;
	cod.i = 10; // i vale 10
	cout << cod.i <<endl;
	cout << cod.f <<endl;
	cod.f = 25e3f; // f vale 25 * 1000, i indefinida (ya no vale 10)
	cout << cod.f <<endl;
	cout << cod.i <<endl;

	struct {
		int i;
		char n[20];
	} reg;
	union {
		int i;
		float f;
	}; // i y f son variables, pero se almacenan en la misma memoria
	return 0;
}
