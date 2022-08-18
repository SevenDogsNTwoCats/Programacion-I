#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;
//Haga el prototipo de las funciones
int  c;
int crearB(int *);
void calculopolinomio(int *, int n);

int main(){
int A[8];
//Llame a la función que llena el arreglo A
    A[8]=crearB(A);

    cout<<"Ingrese el valor de c \n";
    cin>>c;
    calculopolinomio(A, c);

system("pause");
return 0;
}
//Haga la definición de las funciones
int crearB(int *B){
    srand(time(NULL));
    int i;
    for (i=0; i<8; i++)
    {
        B[i]=rand()%99;
    }
    return B[8];
}
void calculopolinomio(int *A, int n){
    int i, r;
    for (i = 0; i < 8; i++)
    {
        r= A[i]*pow(n,i);
    }
    cout<<"La respuesta es "<<r<<endl;
}
