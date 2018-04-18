//calcula el mayor de los numeros con una funcion
#include <iostream>

using namespace std;

float mayor(float,float,float);
int main()
{
    float num1=0.0,num2=0.0,num3=0.0,total=0.0;
    cout<<"Ingrese numero 1"<<endl;
    cin>>num1;
    cout<<"Ingrese numero 2"<<endl;
    cin>>num2;
    cout<<"Ingrese numero 3"<<endl;
    cin>>num3;
    total=mayor(num1,num2,num3);
    cout<<"El mayor numero es: "<<total;
    return 0;
}

float mayor(float x, float y,float z)
{
    if(x>y&&x>z)
    {
        return x;
    }
    if else(y>x&&y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
