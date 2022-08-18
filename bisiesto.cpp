#include<iostream>
using namespace std;

bool Bisiesto(int x);//Escriba el prototipo de la función

int main(){

    int a;
    cin>>a;

    Bisiesto(a);//Haga el llamado a la función y valide que si la función retorna true

 if (Bisiesto(a))
    cout<<"Es bisiesto"<<endl;//muestre en pantalla ES BISIESTO y si retorna false muestre en pantalla
 else
    cout<<"NO es bisiesto"<<endl;//NO ES BISIESTO

 
    return 0;
}

bool Bisiesto(int x) //Haga la definición de la función
{
    if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
    {
        return true;
    }
    else{
        return false;
    }
}