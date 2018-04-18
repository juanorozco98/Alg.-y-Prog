#include <iostream>
#include <math.h>
using namespace std;

float num1=0.0,num2=0.0,num3=0.0;

float suma(float x, float y, float z)
{
    return x+y+z;
}
float potencia()
{
    float pot=0.0;
    pot=pow(suma(num1,num2,num3),3);
    return pot;
}
float multiplicacion(float x, float y)
{
    return x*y;
}
float division(float x, float y)
{
    return y/x;
}

int main()
{
    cout<<"ingrese el primer numero: ";
    cin>>num1;
    cout<<"ingrese el segundo numero: ";
    cin>>num2;
    cout<<"ingrese el tercer numero: ";
    cin>>num3;
    cout<< suma(num1,num2,num3)<<endl;
    cout<<potencia()<<endl;
    cout<<multiplicacion(suma(num1,num2,num3),potencia())<<endl;
    cout<<division(suma(num1,num2,num3),potencia());
    return 0;
}
