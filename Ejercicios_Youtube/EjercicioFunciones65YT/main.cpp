#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

void pedirDatos();
void Al_cuadrado(float x);
float num;

int main()
{
    pedirDatos();
    Al_cuadrado(num);
    return 0;
}

void pedirDatos()
{
    cout<<"digite el numero a elevar al cuadrado: "<<endl;
    cin>>num;
}
void Al_cuadrado(float x)
{
    float cuadrado=pow(x,2);
    cout<<"el cuadrado de el numero es de: "<<cuadrado;
}
