#include <iostream>

using namespace std;

float mayor(float,float);
int main()
{
    float num1=0.0,num2=0.0,total=0.0;
    cout<<"Ingrese numero 1"<<endl;
    cin>>num1;
    cout<<"Ingrese numero 2"<<endl;
    cin>>num2;
    total=mayor(num1,num2);
    cout<<"El mayor numero es: "<<total;
    return 0;
}

float mayor(float x, float y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
