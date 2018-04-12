#include <iostream>
#include <math.h>
#include <ctype.h>

using namespace std;


int main()
{
    unsigned int x=0, y=1, z=1, n=0, fin=0;

    while(true)
   {
        cout<<"Este algoritmo entrega tantos elementos de la serie de fibonacci como se desee"<<endl;
        cout<<"Ingrese el numero de elementos: "<<endl;

        cin>>n;
        for(int i=1;i<=n;i++)
        {
            z=x+y;    //formula utilizada para hallar infinitos numeros de la serie de fibonacci
            x=y;
            y=z;

            cout<<"Elemento "<<i<<": "<<z<<endl;

        }
        cout<<"Si desea continuar ingrese '1' o ingrese '0' para cerrar"<<endl;
        cin>>fin;
        x=0;
        y=1;
        z=1;
        if(fin==0)
        {
            break;
        }
        cin.clear();
        cin.ignore(10000,'\n');

   }





    return 0;
}
