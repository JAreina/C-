#include <iostream>
using namespace std ;
const double EUR_PTS = 166.386 ;
const double EUR_FRC = 6.55957 ;
const double EUR_MRC = 1.95583 ;
const double EUR_LIR = 1936.27 ;
int main()
{
char resp ;
cout << "Teclee P para convertir de Pesetas a Euros" <<endl;
cout << "Teclee F para convertir de Francos a Euros"<<endl;
cout << "Teclee M para convertir de Marcos a Euros" <<endl;
cout << "Teclee L para convertir de Liras a Euros" <<endl;
cout << "Opcion: " ;
cin >> resp ;



cout << "Introduce la cantidad : " <<endl;
double cantidad, result ;
cin >> cantidad ;


switch (resp){
case 'P':
result = cantidad * EUR_PTS ;
break ;
case 'F':
result = cantidad * EUR_FRC ;
break ;
case 'M':
result = cantidad * EUR_MRC ;
break ;
case 'L':
result = cantidad * EUR_LIR ;
break ;
}

/*
if (resp == 'P'){
result = cantidad * EUR_PTS ;
}else if (resp == 'F'){
result = cantidad * EUR_FRC ;
}else if (resp == 'M'){
result = cantidad * EUR_MRC ;
}else { // Si no es ninguna de las anteriores es a Liras
result = cantidad * EUR_LIR ;
}*/
cout << cantidad << " equivale a " << result << endl ;
}