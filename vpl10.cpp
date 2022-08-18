#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
using std::setw;
//Haga el prototipo de funciones
int crearA(int *, int n);
void fmostrarA(int *,int n);
void sumaA(int *,int n);

int main(){
    //Declare las variables necesarias
    srand(time(NULL));
    int a;
    //Lea la dimension del arreglo
    cout<<"Ingrese el tamano del arreglo: "<<endl;
    cin>>a;
    //Haga el llamado de la funcion que llena el arreglo
    int B[a];
    B[a]=crearA(B,a);
    //HAga el llamdo de la funcion que imprime el arreglo
    fmostrarA(B,a);
    //Haga el llamado de la funcion que hace la suma
    sumaA(B,a);

    return 0;
}
//Haga las definiciones de las funciones
int crearA(int *A,int n){
    int i;
    for (i=0; i<n; i++)
    {
        A[i]=rand() % 199;
        if(A[i]%2!=0){
            A[i]=A[i];
        }
        else{
            A[i]=A[i]+1;
        }
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

void sumaA(int *A, int n){
int i, s=0;
for ( i = 0; i < n; i++)
{
    s+=A[i];
}
cout<<endl;
cout<<"La suma es "<<s<<endl;
}