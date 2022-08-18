#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
using std::setw;

int crearA(int *, int n);
void fmostrarA(int *,int n);
void fmenor(int *, int n);
void fmayor(int *, int n);

int main(){
//Cree el arreglo, el puntero y las variables necesarias
    srand(time(NULL));
    int a;
//Pida al usuario que ingrese el tamaño del arreglo
    cout<<"Ingrese el tamano del arreglo: "<<endl;
    cin>>a;
    int B[a];
//Haga los llamados a las funciones
    B[a]=crearA(B,a);
    fmostrarA(B,a);
    fmenor(B,a);
    fmayor(B,a);

    system("pause");
    return 0;
}
//Haga las definiciones de las funciones
int crearA(int *A,int n){
    int i;
    for (i=0; i<n; i++)
    {
        A[i]=rand() % 199+1;
    }
    return A[n];
}

void fmostrarA(int *A, int n){
    int i;
    cout<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<setw(5)<<A[i];
    }
    
}

void fmenor(int *A, int n){
    int i, m, a;
    int *b;
    for (i = 0; i < n; i++)
    {
        if (m>A[i])
        {
            m=A[i];
            a=i+1;
            b= &A[i];
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<"El numero menor es "<<m<<endl;
    cout<<"La posicion del numero menor es "<<a<<endl;
    cout<<"La direccion del numero menor es "<<b<<endl;
}

void fmayor(int *A, int n){
    int i, m, a;
    int *b;
    for (i = 0; i < n; i++)
    {
        if (m<A[i])
        {
            m=A[i];
            a=i+1;
            b= &A[i];
        }
    }
    cout<<endl;
    cout<<"El numero mayor es "<<m<<endl;
    cout<<"La posicion del numero mayor es "<<a<<endl;
    cout<<"La direccion del numero mayor es "<<b<<endl;
}