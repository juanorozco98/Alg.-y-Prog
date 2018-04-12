#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int suma= 0 , contador=0, fin=1, num1=0, num2=0;
    char calculo ='0';

    while(fin==1)
    {
        cout << "ingrese M para multiplicar o S para sumar: "<<endl;
        cout << "o ingrese cualquier letra para mostrar sumatoria"<<endl;
        cin >> calculo;
        switch (calculo)
        {
            case 's' :
                cout << "ingrese el numero 1: "<<endl;
                cin >> num1;
                cout << "ingrese el numero 2 :"<<endl;
                cin >>num2;
                cout << "La suma es de: " << num1+num2<<endl;
                break;
            case 'm' :
                cout << "ingrese el numero 1: "<<endl;
                cin >> num1;
                cout << "ingrese el numero 2 :"<<endl;
                cin >>num2;
                cout << "La multiplicacion es de: " << num1*num2<<endl;
                break;
            default:
                while (contador<15)
                {
                suma=suma+contador;
               // cout << "Suma actual: " << suma << endl;
                contador=contador+1;
                //cout << "contador actual: " << contador <<endl;
                }
                suma=pow(suma,3);
                contador=0;
                cout << "Suma total: "<<suma<<endl;
                suma=0;
                break;
        }



        cout << "Desea cerrar el programa? Ingrese '0' para cerrarlo"<<endl;
        cout << "De lo contrario ingrese 1: "<<endl;
        cin >> fin;
        }
    return 0;
}
