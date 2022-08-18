#include <iostream>
#include <cmath>
using namespace std;

float a1,a2,b1,b2,c1,c2;
int continuar;
//prototipo de funciones

bool mismarecta(int x1,int x2,int y1, int y2, int z1, int z2);//calculara si los puntos pertenecen a la misma recta
unsigned long distancia(int x1,int x2,int y1, int y2);// calculara la distancia entre dos puntos
bool P3entrep2yp1(int x1,int x2,int y1, int y2, int z1, int z2);//calcula si el tercer punto esta entre los otros dos

int main(){
    float t;
    //para la repeticion
    do
    {
        //leer los puntos
        cout<<"Escriba el primer punto A:"<<endl;
        cin>>a1>>a2;
        cout<<"Escriba el segundo punto B:"<<endl;
        cin>>b1>>b2;
        cout<<"Escriba el tercer punto C:"<<endl;
        cin>>c1>>c2;
        //por si es recta vertical
        if (a1==b1==c1){
            cout<<"Los puntos estan en la misma recta vertical"<<endl;
        }
        else{
            mismarecta(a1,a2,b1,b2,c1,c2);// llamamiento de funcion para la misma recta
            if(mismarecta(a1,a2,b1,b2,c1,c2))
            cout<<"Los puntos estan en la misma recta"<<endl;
            else
            cout<<"Los puntos NO estan en la misma recta"<<endl;
        }

        t= distancia(a1,a2,b1,b2);//llamamiento de funcion para la distancia
        cout<<"La distancia entre A y B es: "<<t<<endl  ;

        P3entrep2yp1(a1,a2,b1,b2,c1,c2);//llamamiento de funcion ver si C esta entre A y B
        if (P3entrep2yp1(a1,a2,b1,b2,c1,c2))
            cout<<"C esta entre A y B"<<endl;
        else
            cout<<"C NO esta entre A y B"<<endl;
//para repetir si el usuario lo desea
        cout<<"Desea continuar? Escriba 1 para SI y cualquier otra tecla para NO"<<endl;
        cin>>continuar;

    } while (continuar==1);
    
    system("pause");
    return 0;
}

bool mismarecta(int x1,int x2,int y1, int y2, int z1, int z2){//definicion funcion misma recta
    
    int abp, abs, bcp, bcs;
    double p1,p2;
// mediante proporcion por tanto hare dos vectores si tienen la misma direccion estan en la misma recta
    abp= y1-x1;
    abs= y2-x2;
    bcp= z1-y1;
    bcs=z2-y2;
//para poder hacer la proporcion, teniendo en cuenta que pueden ser 0
    if (bcs==0 or bcs==0){
        return false;
        }
    else{
        p1=abp/bcp;
        p2=abs/bcs;

        if(p1==p2)
            return true;
        else
            return false;}
        
}

unsigned long distancia(int x1,int x2,int y1, int y2){//definicion funcio distancia

    int abp, abs, bcp, bcs;
    float d;

    abp= y1-x1;
    abs= y2-x2;
    d= sqrt(pow(abp,2)+pow(abs,2));//mediante teorema de pitagoras

    return d;
}

bool P3entrep2yp1(int x1,int x2,int y1, int y2, int z1, int z2){//definicion funcion para ver si C esta entre A y B
    if((x1<=z1<=y1 || y1<=z1<=x1) && (x2<=z2<=y2 ||y2<=z2<=x2)){return true;}
    else{return false;}
    
}