#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
using std::setw;

int i,j,n;
float pd=1,s1=0,s2=0,cs;

int main(){
//tamano de la matriz
    cout<<"Escriba el tamano de la matriz cuadrada: "<<endl;
    cin>>n;

    int A[n][n];
//leer los elementos de la matriz
    for (i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            cout<<"Escriba el elemento "<<i<<" "<<j<<endl;
            cin>>A[i][j];
        }
        
    }
//calcular el producto de la diagonal
    for (i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
    if (i=j)
    {
                pd= pd*A[i][j];
    }
    
        }
        }
//calcular la suma cuando i<j
    for (i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
    if (i<j)
    {
                s1= s1+A[i][j];
    }
    
        }
        }
//calcular la suma cuando i>j
    for (i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
    if (i>j)
    {
                s2= s2+A[i][j];
    }
    
        }
        }
//calcular el cuadrado de la suma cuando i>j
        cs= pow(s2,2);
//escritura
    cout<<"El producto de los elementos de la diagonal es: "<<pd<<endl;
    cout<<"La suma de los elementos donde i<j es: "<<s1<<endl;
    cout<<"El cuadrado de la suma donde los elemntos i>j es: "<<cs<<endl;

    return 0;
}
