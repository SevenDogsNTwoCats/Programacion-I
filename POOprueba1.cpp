#include <iostream>
using namespace std;
class Dato{
    //atributos
    private:
    int edad, tipo;
    string nombre;
    //metodos
    public:
    Dato(string,int,int);//constructor
    ~Dato();//destructor
    void escribe();
    };
    //inicializa atributos con el contructor
    Dato::Dato(string nombre1, int edad1, int tipo1){
        nombre=nombre1;
        edad=edad1;
        tipo=tipo1;
    }
    Dato::~Dato(){cout<<"fin"<<endl;}
    void Dato::escribe(){
        cout<<"nombre= "<<nombre<<" edad= "<<edad<<" tipo= "<<tipo<<endl;
    }
int main(){
    Dato persona1("Maria",23,1), persona2("Jose",45,2);
    persona1.escribe();
    persona2.escribe();
    return 0;
}