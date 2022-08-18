#include<iostream>
using namespace std;
//clase
class EcuacionLineal{
    //atributos
    private:
    float a,b,c,d;
    //metodos
    public:
    void resolver();
    void ComoInecuacionM();
    //constructor
    EcuacionLineal(int a1,int b1, int c1, int d1);
    //destructor
    ~EcuacionLineal();
};
//inicializacion
EcuacionLineal::EcuacionLineal(int a1,int b1, int c1, int d1){
    a=a1;
    b=b1;
    c=c1;
    d=d1;
}
EcuacionLineal::~EcuacionLineal(){};
void EcuacionLineal::resolver(){
    if(a-c!=0){cout<<"La solucion de "<<a<<"x+"<<b<<"="<<c<<"x+"<<d<<" es x="<<(d-b)/(a-c)<<endl;}
    else{
        if(b==d){cout<<"x = R para "<<a<<"x+"<<b<<"="<<c<<"x+"<<d<<endl;}
        else{cout<<"No hay solcion para x para "<<a<<"x+"<<b<<"="<<c<<"x+"<<d<<endl;}
        }
}
void EcuacionLineal::ComoInecuacionM(){
    if(a-c>0){cout<<"La solucion de "<<a<<"x+"<<b<<">"<<c<<"x+"<<d<<" es x>"<<(d-b)/(a-c)<<endl;}
    if(a-c<0){cout<<"La solucion de "<<a<<"x+"<<b<<">"<<c<<"x+"<<d<<" es x<"<<(d-b)/(a-c)<<endl;}
    if (a-c==0){
        if(b==d){cout<<"x = R para "<<a<<"x+"<<b<<"<"<<c<<"x+"<<d<<endl;}
        else{cout<<"No hay solcion para x para "<<a<<"x+"<<b<<"<"<<c<<"x+"<<d<<endl;}
        }
}
int main(){
    int a,b,c,d;
    cout<<"Ingrese a: ";
    cin>> a;
    cout<<"Ingrese b: ";
    cin>> b;
    cout<<"Ingrese c: ";
    cin>> c;
    cout<<"Ingrese d: ";
    cin>> d;

    EcuacionLineal ecuacion1(a,b,c,d);
    ecuacion1.resolver();
    ecuacion1.ComoInecuacionM();

    return 0;
}