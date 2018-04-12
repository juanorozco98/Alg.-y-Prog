#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float R1= 0.0, R2=0.0, Rp=0.0, R3=0.0;
    int Nr=0, fin =0;

        cout << "Este programa calcula N resistencias en paralelo." <<endl;

    while(true)
    {
        cout << "Ingrese la cantidad de resistencias: "<<endl;
        cin >> Nr;

        if (Nr<=1)
        {
            cout << "Debe ingresar al menos dos resistencias"<<endl;
        }

        else
        {
            cout<< "Ingrese R1: " <<endl;
            cin>> R1;
            cout<< "Ingrese R2: " <<endl;
            cin >>R2;
            Rp=(R1*R2)/(R1+R2);
            for(int i=3; i<=Nr; i++)
        {
            cout<<"Ingrese R"<<i<<": "<<endl;
            cin>> R3;
            Rp=(Rp*R3)/(Rp+R3);
        }
            cout<<"Rtotal:"<<Rp<<endl;
        }

        cout<< "Desea cerrar el programa?"<<endl;
        cout<< "Ingrese 1 para cerrarlo "<<endl;
        cout<< "ingrese 0 para continuar "<<endl;
        cin>>fin;
        if (fin=1)
        {
            break;
        }
    }



        return 0;
}
