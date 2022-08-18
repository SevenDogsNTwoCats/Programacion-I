//Programa que determina la cantidad de numeros positivos en un arreglo unidimensional
#include <iostream>
using namespace std;
int contar(float[]);//prototipo 
void escritura(float[]);

int main() {float A[]={4,2,3.75,-3,-4.55,7,2};
//escribe el arreglo
escritura(A);
//determinar la cantidad de numeros positivos

cout<<"La cantidad de numeros positivos es "<<contar(A);
return 0;
}

int contar(float B[])
{int i,c=0;
	for(i=0;i<=6;i++)
		if(B[i]>0)
		c++;
	return c;
	
}

void escritura(float A[])
{int i;
for(i=0;i<=6;i++)
	cout<<A[i]<<endl;

}