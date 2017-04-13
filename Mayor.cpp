/* TP2:"Numero mayor y menor"  
* Franco Leonel Walach  
* 20170413  
*/

#include <iostream>
using namespace std;


int main()

{
/*Denificion de variable*/	

	int a, b;
/*Funcion principal*/

	cout << "Programa para detectar si un numero es mayor que otro" << endl;
	
	cout << "Por favor ingrese un número natural" << endl;
	
	cin >> a;
	
	cout << "Por favor ingrese nuevamente un número natural para compararlo con el anterior" << endl;
	
	cin >> b;
	
	if ( a > b ) {
		
		cout << "El Numero : " << a << " es mayor que el número " << b <<endl;
		}
	else
	{
		cout << "El Numero : " << b << " es mayor que el número " << a <<endl;
	}
	
return 0;
}
