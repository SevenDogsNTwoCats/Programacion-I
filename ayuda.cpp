#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<cmath>

using std::setw;
using namespace std;

//Haga el prototipo de las funciones
int  c;
int crearB(int *);
void calculopolinomio(int *, int n);

int main(){

int A[8], i;

//Llame a la función que llena el arreglo A
    A[8]=crearB(A);
    for ( i = 0; i < 8; i++)
    {
    cout<<setw(5)<<A[i];
    }

    cout<<" "<<endl;

    for ( i = 0; i < 7; i++)
    {
        cout<<A[i]<<"x^"<<i<<" + ";
    }
    cout<<A[7]<<"x^"<<7<<endl;
    
    cout<<"\n Ingrese el valor de x \n";
    cin>>c;
    calculopolinomio(A, c);

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

void calculopolinomio(int *B, int n){
    
    int i, r=0;
    for (i = 0; i < 8; i++)
    {
        r +=B[i]*pow(n,i);
    }
    cout<<"La respuesta es "<<r<<endl;
}

