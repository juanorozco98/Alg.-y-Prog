#include <iostream>

using namespace std;

int main()
{
    int num1=0,num2=0,tamano=0;
    cout<<"Ingrese el primer numero del rango: "<<endl;
    cin>>num1;
    cout<<"Ingrese el segundo numero del rango: "<<endl;
    cin>>num2;
    tamano=num2-num1;
    int numeros [tamano];

        for(int i=num1;i<=num2;i++)//almacena los datos
        {
            numeros[i]=i;
        }


        for(int i=num1;i<=num2;i++)
        {
            if (i%2==0)
            {
                cout<<numeros[i]<<endl;
            }

        }

    return 0;
}
