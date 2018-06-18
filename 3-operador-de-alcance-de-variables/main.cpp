#include <iostream>
using namespace std;

float v =100;
int main( )
{
int v = 7;
//::v = 10.5; // Utilizar la variable global v
cout << "variable local v = " << v << endl;
cout << "variable global v = " << ::v << endl;
return 0;
}