#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
using std::setw;

int A[5];
int T;
int i;
int j;

int main(){

for ( i = 0; i < 5; i++)
{
    cin>>A[i];
}

for ( i = 0; i < 5; i++){
    for (j=1; j<=5; j++)
    {
    if (A[i]>A[j])
    {
        T=A[i];
        A[i]=A[i+1];
        A[i+1]=T;
    }
}
}


for ( i = 0; i < 5; i++){
    cout<<setw(5)<<A[i];
}

        

return 0;
}

