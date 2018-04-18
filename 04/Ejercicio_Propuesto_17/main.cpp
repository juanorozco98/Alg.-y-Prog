#include <iostream>
#include <string> //biblioteca de cadena de caracteres

using namespace std;

int main()
{
    string nombre[3];
    float sueldo[3],horas[3],hijos[3];
    for(int i=0;i<=2;i++)
    {
        cout<<"Ingrese nombre del empleado "<<i+1<<": ";
        cin>>nombre[i];
        cout<<"Ingrese sueldo del empleado "<<i+1<<": ";
        cin>>sueldo[i];
        cout<<"Ingrese numero de horas extras del empleado "<<i+1<<": ";
        cin>>horas[i];
        cout<<"Ingrese el numero de hijos del empleado "<<i+1<<": ";
        cin>>hijos[i];

        if(hijos[i]>3)
        {
            sueldo[i]=sueldo[i]*1.1;
            if(horas[i]>0)
            {
                sueldo[i]=sueldo[i]*(1+(horas[i]/100));
            }
        }
        else if(horas[i]>0)
            {
            sueldo[i]=sueldo[i]*(1+(horas[i]/100));
            }
        cout<<"empleado"<<nombre[i]<<endl;
        cout<<"salario empleado: " <<sueldo[i]<<endl;
    }

    for(int i=0;i<=2;i++)
    {
        cout<<"Nombre empleado: "<<nombre[i]<<endl;
        cout<<"salario empleado: " <<sueldo[i]<<endl;

    }

    return 0;
}

