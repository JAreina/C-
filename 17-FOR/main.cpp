#include <iostream>
using namespace std ;
int main ()
{
	int n ;
	cin >> n ;
	for (int i = 0 ; i <= n ; ++i) {
	cout << i << " " <<endl ;
	}
// i NO es visible aquí
cout << endl ;
}

/*
int n ;
cin >> n ;
int i = 0;
while (i < n) {
   cout << i << " " ;
   ++i;
}
// i SI es visible aquí
cout << endl ;

*/