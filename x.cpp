#include<iostream>
using namespace std;
void crearrectangulo(int,int);

int main(){
    int a, h;
    cout<<"Digite el ancho: ";
    cin>>a;
    cout<<"Digite la altura: ";
    cin>>h;
    
    crearrectangulo(a,h);
    system("pause");
    return 0;
}

void crearrectangulo(int x, int y){

for (int i = 0; i < x; i++){
		for(int j = 0; j < y;j++){
			if (i != 0 && i != (x - 1)){
				if (j != 0 && j != (y- 1)){
					cout << "\t";
				}else{
					cout << "\tc ";
				}
			}else{
				cout << "\tc";
			}
		}
	}
    
}