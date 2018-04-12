#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int k=0, R=0, fin=0;

    cout<<"Este programa calcula la  tabla de multiplicar de un numero dado"<<endl;

    while(true)
    {

        cout<<"Ingrese el numero del que desea conocer la tabla"<<endl;
        cin>>k;

        for(int i=0;i<=10;i++)
        {
            R=k*i;
            cout<<k<<" X "<<i<<" = "<<R<<endl;

        }
        cout << "Desea cerrar el programa?" << endl;
        cout << "Ingrese 1 para cerrarlo " << endl;
        cout << "ingrese 0 para continuar: "<<endl;
        cin>>fin;
        if (fin==1)
        {
            break;
        }


    }







    return 0;
}
