#include <iostream>
#include <math.h>

using namespace std;

void pedirDatos();
void funpot(long x,long y);

float base,exponente;
int main()
{
    pedirDatos();
    funpot(base,exponente);
    return 0;
}
void pedirDatos()
{
    cout<<"ingrese la base: "<<endl;
    cin>>base;
    cout<<"ingrese el exponente: "<<endl;
    cin>>exponente;
}
void funpot(long x,long y)
{
    long resultado=pow(x,y);
    cout<<"El resultado es de: "<<resultado<<endl;
}
