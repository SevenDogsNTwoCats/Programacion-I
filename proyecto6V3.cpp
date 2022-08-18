//alhanis.espinal@unah.hn
//Calculadora de funciones: dominio, rango, vertice, ejes, interceptos...
#include <iostream>
#include<cmath>
using namespace std;
//prtototipos delas funciones
void flineal();
void fcuadratica();
void fvalorabsoluto();
void fradical();
void flogaritmo();
void fexponencial();
void fracional();

int main(){
    int a;
    do
    {
        cout<<"Seleciones el numero de la funcion que quiere analizar:"<<endl;
        cout<<"1. Funcion Lineal f(x)=ax+b"<<endl;
        cout<<"2. Funcion Cuadratica f(x)=ax^2+bx+c"<<endl;
        cout<<"3. Funcion Valor Absoluto f(x)=|ax+b|+c"<<endl;
        cout<<"4. Funcion Radical f(x)=raiz(ax+b)+c"<<endl;
        cout<<"5. Funcion Logaritmica f(x)=Log_a(bx+c)"<<endl;
        cout<<"6. Funcion Exponencial f(x)=a^(bx+c)+d"<<endl;
        cout<<"7. Funcion Racional f(x)=p(x)/q(x), donde p(x)=ax+b y q(x)=cx+d"<<endl;
        cin>>a;
    } while (a<=0 || a>7);

    switch (a)
    {
    case 1:
        flineal();
        break;
        case 2:
        fcuadratica();
        break;
        case 3:
        fvalorabsoluto();
        break;
        case 4:
        fradical();
        break;
        case 5:
        flogaritmo();
        break;
        case 6:
        fexponencial();
        break;
        case 7:
        fracional();
        break;
    }

    return 0;
}
//funciones
void flineal(){
    float a,b;
    cout<<"\nFuncion Lineal f(x)=ax+b"<<endl;
    //pedir variables y mostrar funcion
    cout<<"Ingrese a: ";
    cin>>a;
    cout<<"Ingrese b: ";
    cin>>b;
    if (a!=0)
    {
        if(a!=1){
        if(b>0){cout<<"\nLa funcion ingresada es f(x)="<<a<<"x+"<<b<<endl;}
        if(b<0){cout<<"\nLa funcion ingresada es f(x)="<<a<<"x"<<b<<endl;}
        if (b==0){cout<<"\nLa funcion ingresada es f(x)="<<a<<"x"<<endl;}
        }
        else{
        if(b>0){cout<<"\nLa funcion ingresada es f(x)="<<"x+"<<b<<endl;}
        if(b<0){cout<<"\nLa funcion ingresada es f(x)="<<"x"<<b<<endl;}
        if (b==0){cout<<"\nLa funcion ingresada es f(x)="<<"x"<<endl;}
        }
    }
    else{
        cout<<"\nLa Funcion ingresada es f(x)="<<b<<endl;
    }
    //Dominio
    cout<<"Dominio: R"<<endl;
    //Rango
    if (a!=0)
    {
        cout<<"Rango: R"<<endl;
    }
    else{
        cout<<"Rango: "<<b<<endl;
    }
    //Interceptos
    if (a!=0)
    {
    cout<<"Intercepto en x: "<<b/a<<endl;
    cout<<"Intercepto en y: "<<a*(b/a)+b<<endl;
    }
    else{
    cout<<"No hay intercepto en x"<<endl;
    cout<<"Intercepto en y: "<<b<<endl;
    }

    //crecimiento
    if (a==0)
    {
        cout<<"Recta paralela a el eje x"<<endl;
    }
    if (a>0)
    {
        cout<<"Funcion creciente"<<endl;
    }
    if (a<0)
    {
        cout<<"Funcion decreciente"<<endl;
    }
}

void fcuadratica(){
    cout<<"\nFuncion Cuadratica f(x)=ax^2+bx+c"<<endl;
}

void fvalorabsoluto(){
    cout<<"\nFuncion Valor Absoluto f(x)=|ax+b|+c"<<endl;
    //dominio
    //rango
    //vertice
    //eje de simetria
    //interceptos
    //crecimiento
}

void fradical(){
    float a,b,c,domRadical,k;
    cout<<"\nFuncion Radical f(x)=kraiz(ax+b)+c"<<endl;
    do{
       cout<<"ingrese un k ";
       cin>>k;
       if(k==0){
        cout<<"ingrese un valor de k distinto de cero"<<endl;}
    }
    while(k==0);
    do
    {
    cout<<"ingrese a ";
    cin>>a;
    if (a==0)
    {
        cout<<"ingrese un valor de a distinto de cero"<<endl;
    }
    
    } while (a==0);
    cout<<"ingrese b ";
    cin>>b;
    cout<<"ingrese c ";
    cin>>c;
    cout<<"\n\tLa funcion ingresada es f(x)="<<k<<"raiz"<<"("<<"x+"<<b<<")"<<"+("<<c<<")"<<endl;
    //dominio
    if (a!=0){
       if (a>0){
          if(b>0 || b<0){
            domRadical= -b/a;
            cout<<"el dominio es: "<<"["<<domRadical<<","<<"+infinito"<<"["<<endl;}
          else{
            cout<<"el dominio es:"<<"["<<"0"<<","<<"+infinito"<<"["<<endl;}}
       else{
          domRadical= -b/a;
            cout<<"el dominio es: "<<"]"<<"-infinito"<<","<<domRadical<<"]"<<endl;}
            }
    else{
       if(b>=0){
        cout<<"el dominio es: "<<"]"<<"-infinito"<<","<<"+infinito"<<"["<<endl;}

    }
    //rango
    if(k>0){
    if(a!=0){
    cout<<"el rango es: "<<"["<<c<<","<<"+infinito"<<"["<<endl;}
    else{
        if(c>0){
            cout<<"el rango es: "<<k*sqrt(b)+c<<endl;}
        if(c!=0 && b<0){
            cout<<"no hay rango debido al termino b negativo"<<endl;}
        if(c<=0 && b>0){
            cout<<"el rango es: "<<k*sqrt(b)+c<<endl;}
        }
    }
    if(k<0){
    if(a!=0){
    cout<<"el rango es: "<<"]"<<"-infinito"<<","<<c<<"]"<<endl;}
    else{
        if(c>0 && b>0){
            cout<<"el rango es: "<<k*sqrt(b)+c<<endl;}
        if(c!=0 && b<0){
            cout<<"no hay rango debido al termino b negativo"<<endl;}
        if(c<=0 && b>0){
            cout<<"el rango es: "<<k*sqrt(b)+c<<endl;}
        }
    }

    //interceptos
    if(k>0){
      if(a!=0){
      if(a>0 && b>0 && c>0){
          cout<<"el intercepto en x es: "<<"no hay intercepto en x "<<endl;
          cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;}
      if(a>0 && b>0 && c<0){
          cout<<"el intercepto en x es: "<<(pow((c)/(k),2)-b)/(a)<<endl;
          cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;}
      if(a>0 && b<0 && c>0){
          cout<<"el intercepto en x es: "<<"no hay interceptos en x"<<endl;
          cout<<"el intercepto en y es: "<<"no hay interceptos en y"<<endl;}
      if(a>0 && b<0 && c<0){
          cout<<"el intercepto en x es: "<<(pow((c)/(k),2)-b)/(a)<<endl;
          cout<<"el intercepto en y es: "<<"no hay interceptos en y"<<endl;}
      if(a<0 && b>0 && c>0){
          cout<<"el intercepto en x es: "<<"no hay interceptos en x"<<endl;
          cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;}
      if(a<0 && b>0 && c<0){
          cout<<"el intercepto en x es: "<<(pow((c)/(k),2)-b)/(a)<<endl;
          cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;}
      if(a<0 && b<0 && c>0){
          cout<<"el intercepto en x es: "<<"no hay interceptos en x"<<endl;
          cout<<"el intercepto en y es: "<<"no hay intercepto en y"<<endl;}
      if(a<0 && b<0 && c<0){
          cout<<"el intercepto en x es: "<<(pow((c)/(k),2)-b)/(a)<<endl;
          cout<<"el intercepto en y es: "<<"no hay intercepto en y"<<endl;}
      if(a!=0 && b==0 && c==0){
          cout<<"el intercepto en x es: "<<0<<endl;
          cout<<"el intercepto en y es: "<<0<<endl;}
      if(a!=0 && b!=0 && c==0){
          cout<<"el intercepto en x es: "<<(pow((c)/(k),2)-b)/(a)<<endl;
          cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;}
      if(a!=0 && b==0 && c!=0){
          cout<<"el intercepto en x es: "<<"no hay interceptos en x"<<endl;
          cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;}
    }
     else{
        if(b>=0 && c>0){
          cout<<"el intercepto en x es: "<<"no hay interceptos en x"<<endl;
          cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;
        }
        if(b>=0 && c<0){
          cout<<"el intercepto en x es: "<<"no hay interceptos en x"<<endl;
          cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;
        }
        else{
          cout<<"el intercepto en x es: "<<"no hay interceptos en x "<<endl;
          cout<<"el intercepto en y es: "<<"no hay interceptos en y "<<endl;}
     }
    }
    if(k<0){
    if(a!=0){
    if(a>0 && b>0 && c>0){
        cout<<"el intercepto en x es: "<<(pow((c)/(k),2)-b)/(a)<<endl;
        cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;}
    if(a>0 && b>0 && c<0){
        cout<<"el intercepto en x es: "<<"no hay interceptos en x"<<endl;
        cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;}
    if(a>0 && b<0 && c>0){
        cout<<"el intercepto en x es: "<<(pow((c)/(k),2)-b)/(a)<<endl;
        cout<<"el intercepto en y es: "<<"no hay interceptos en y"<<endl;}
    if(a>0 && b<0 && c<0){
        cout<<"el intercepto en x es: "<<"no hay interceptos en x"<<endl;
        cout<<"el intercepto en y es: "<<"no hay interceptos en y"<<endl;}
    if(a<0 && b>0 && c>0){
        cout<<"el intercepto en x es: "<<(pow((c)/(k),2)-b)/(a)<<endl;
        cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;}
    if(a<0 && b>0 && c<0){
        cout<<"el intercepto en x es: "<<"no hay intercepto en x"<<endl;
        cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;}
    if(a<0 && b<0 && c>0){
        cout<<"el intercepto en x es: "<<(pow((c)/(k),2)-b)/(a)<<endl;
        cout<<"el intercepto en y es: "<<"no hay intercepto en y"<<endl;}
    if(a<0 && b<0 && c<0){
        cout<<"el intercepto en x es: "<<"no hay intercepto en x"<<endl;
        cout<<"el intercepto en y es: "<<"no hay intercepto en y"<<endl;}
    if(a!=0 && b==0 && c==0){
        cout<<"el intercepto en x es: "<<0<<endl;
        cout<<"el intercepto en y es: "<<0<<endl;}
    if(a!=0 && b!=0 && c==0){
        cout<<"el intercepto en x es: "<<(pow((c)/(k),2)-b)/(a)<<endl;
        cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;}
    if(a!=0 && b==0 && c!=0){
        cout<<"el intercepto en x es: "<<(pow((c)/(k),2)-b)/(a)<<endl;
        cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;}
    }
     else{
        if(b>=0 && c>0){
        cout<<"el intercepto en x es: "<<"no hay interceptos en x"<<endl;
        cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;
        }
        if(b>=0 && c<0){
        cout<<"el intercepto en x es: "<<"no hay interceptos en x"<<endl;
        cout<<"el intercepto en y es: "<<k*sqrt(b)+c<<endl;
        }
        if(b<0 && c!=0){
        cout<<"el intercepto en x es: "<<"no hay interceptos en x "<<endl;
        cout<<"el intercepto en y es: "<<"no hay interceptos en y "<<endl;
        }
     }
    }

    //crecimiento
    if(k>0){
    if(a!=0){
        if(a>0){
           cout<<"la funcion crece de: ";
           cout<<"]"<<domRadical<<","<<"+infinito"<<"["<<endl;}
        else{
           cout<<"la funcion decrece de: ";
           cout<<"]"<<"-infinito"<<","<<domRadical<<"]"<<endl;}
      }
    if(a==0 && b>=0){
        cout<<"la funcion es constante"<<endl;}
    if(a==0 && b<0){
        cout<<"la funcion no existe"<<endl;}

 }
 if(k<0){
    if(a!=0){
        if(a>0){
           cout<<"la funcion decrece de: ";
           cout<<"]"<<domRadical<<","<<"+infinito"<<"["<<endl;}
        else{
           cout<<"la funcion crece de: ";
           cout<<"]"<<"-infinito"<<","<<domRadical<<"]"<<endl;}
      }
    if(a==0 && b>=0){
        cout<<"la funcion es constante"<<endl;}
    if(a==0 && b<0){
        cout<<"la funcion no existe"<<endl;}
            }

}

void flogaritmo(){
    cout<<"\nFuncion Logaritmica f(x)=Log_a(bx+c)"<<endl;
    //dominio
    //rango
    //asintota ertical
    //interceptos
    //crecimiento
}

void fexponencial(){
    cout<<"\nFuncion Exponencial f(x)=a^(bx+c)+d"<<endl;
    //dominio
    //rango
    //vertice
    //asintota horizontal
    //interceptos
    //crecimiento
}

void fracional(){
    cout<<"\nFuncion Racional f(x)=p(x)/q(x), donde p(x)=ax+b y q(x)=cx+d"<<endl;
    //dominio
    //rango
    //asintota horizontal
    //asintota vertical
    //interceptos
    //crecimiento
}
