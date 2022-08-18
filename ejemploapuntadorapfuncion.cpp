#include<iostream>
using namespace std;
void funcion1( int ); void funcion2( int ); void funcion3( int ); // prototipos de funciones
int main()
{ // inicializa el arreglo de 3 apuntadores a funciones las cuales toman un argumento int y devuelven void
void (*f[ 3 ])( int ) = { funcion1, funcion2, funcion3 };
int seleccion;
cout << "Introduzca un numero entre 0 y 2, 3 para finalizar: ";
cin >> seleccion;
while ( seleccion >= 0 && seleccion < 3 ) 
{ ( *f [ seleccion ] ) ( seleccion ); 
cout << "Introduzca un numero entre 0 y 2, 3 para finalizar: "; cin >> seleccion; }
cout << "Programa terminado." << endl;
return 0; }

void funcion1( int a )
{ cout << "Usted introdujo " << a << " asi que llamo a la funcion1\n\n";}
void funcion2( int b )
{ cout << "Usted introdujo " << b << " asi que llamo a la funcion2\n\n";}
void funcion3( int c )
{ cout << "Usted introdujo " << c << " asi que llamo a la funcion3\n\n";}

