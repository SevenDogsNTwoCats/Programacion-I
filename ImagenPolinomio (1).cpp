#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

void coef(int*,int);
void poli(int *, int);
int evalua_poli(int *,int,int);
//Haga el prototipo de las funciones

int main(){
    const int n = 8;
    int A[n], c;
    int *ptrA = A;
    //Llame a la función que llena el arreglo A
    cout<<"Ingrese el valor de c \n";
    cin>>c;
	cout<<"Ingrese los coeficientes \n";
    coef(ptrA, n);//Haga el llamado de la función que evalua el polinomio y muestre el resultado
	cout<<endl<<"el polinomio evaludado da como resultado: "<<evalua_poli(A,n,c);
    return 0;
}

	void coef(int *vec1,int N)
	{
		
		for(int i=0;i<=N;i++)
		{
			cin>>vec1[i];
		}
		
	}
	void poli(int *vec1,int N)
	{
		
		for(int i=0;i<=N;i++)
		{
			cout<<vec1[i]<<"x^"<<N--<<" + ";
		}
	}
	
	int evalua_poli(int *vec1, int N, int X)
	{
		int total;
		int cont=N;
		for(int i=0;i<=N;i++)
		{
			total+=vec1[i]*pow(X,N--);
		}
		return total;
	}//Haga la definición de las funciones
