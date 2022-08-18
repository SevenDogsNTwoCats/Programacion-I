#include<iostream>
using namespace std;
#include<iomanip>
using std::setw;
#include<cmath>
//#include<ctime >
int sumaRC (int[10][10],int,int);
void SUMARENGLORES(int[10][10],unsigned int,unsigned int,int[]);

int main() { 
int A[10][10],sum3=0, sr[10];
unsigned int n,m,i,j,c;
 do{
    cout<<"escriba el numero e renglones";  
    cin>>n;  
    cout<<"Escriba el numero de columnas";
    cin>>m;} while ( (n<=0 ||n>=10)||(m<=0||m>=10));
//srand(time(NULL)); 
for(i=1;i<=n;i++)    
 for(j=1;j<=m;j++)
 do{{
A[i][j]= pow(-1,rand()%10)*( rand()%76); }}
while(A[i][j]<-35);
 for(i=1;i<=n;i++){        
        for(j=1;j<=m;j++)       
          cout<<setw(5)<<A[i][j];
        cout<<endl;     }                                                    
//Suma de los elementos de la columna 3
for(i=1;i<=n;i++)
    sum3+=A[i][3];
cout<<"La suma de los elementos de la coluna 3 es:  "<<sum3<<endl;    
//Suma de los elementos del renglon c
do{
    cout <<"escriba el numero de renglon que desea sumar"<<endl;
    cin>>c;
}
while(c<=0||c>n);
cout<<"La suma del renglon "<<c<<" es "<<sumaRC(A,m,c)<<endl;

SUMARENGLORES(A,n,m,sr);

    return 0;
}

int sumaRC (int B[10][10],int C,int a ){
    int sumrc=0;
    unsigned int i;
    for(i=1;i<=C;i++)
        sumrc+=B[a][i];
        
return sumrc;}
    
void SUMARENGLORES(int A[10][10],unsigned int n ,unsigned int m,int sr[]){
    int i,j,sum;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
    sr[i]+= A[i][j];
    }
    cout<<"La suma de los renglones es"<<endl;
    for (i=1; i<=n; i++){  
    cout<<setw(5)<<sr[i];
    }


}