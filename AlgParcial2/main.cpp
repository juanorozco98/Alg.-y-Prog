#include <iostream>

using namespace std;

int main()
{
    int edad=0, i=1,suma1=0,suma2=0,suma3=0,peso=0,sumT=0,fin=0;
    float edadT=0, pesoT=0, edadP=0, pesoP=0;
    char rango='0';

    cout<<"Este programa calcula la edad promedio"<<endl;
    while(true)
    {
        cout<<"Ingrese la edad del trabajador "<<i<<endl;
        cin>> edad;
        cout<<"Ingrese el peso del trabajador "<<i<<endl;
        cin>>peso;
        i++;

        if(edad>30 && edad<=40)
        {
            rango= 'A';
        }
        else if (edad>40&&edad<=60)
        {
            rango= 'B';
        }
        else if (edad>60)
        {
            rango= 'C';
        }
        else
        {
            rango='D';
        }
        switch(rango)
        {
            case 'A':
            suma1++;
            break;
            case 'B':
            suma2++;
            break;
            case 'C':
            suma3++;
            break;
            case 'D':
            edad=edad-edad;W/$S%T
            i--;
            cout<<"No se tomara el valor de esta persona"<<endl;
            break;
        }
        cout<<""<<endl;
        cout<<"Numero de personas en el rango 31 a 40 anios:     "<<suma1<<endl;
        cout<<"Numero de personas en el rango 51 a 60 anios:     "<<suma2<<endl;
        cout<<"Numero de personas en el rango mayor a 60 anios:  "<<suma3<<endl;
        sumT=suma1+suma2+suma3;
        cout<<"Numero total de personas encuestadas:             "<<sumT<<endl;
        edadT=edadT+edad;
        pesoT=pesoT+peso;
        edadP=edadT/i;
        pesoP=pesoT/i;
        //mult=sumT%5
        if(sumT%5==0)
        {
            cout<<"Numero total de personas encuestadas hasta ahora: "<<sumT<<endl;
            cout<<"Si desea terminar el proceso con lo hasta ahora realizado presione '0'"<<endl;
            cout<<"De lo contrario ingrese cualquier tecla"<<endl;
            cin>>fin;
            if(fin==0)
            {
                cout<<"La edad promedio es de: "<<edadP<<endl;
                cout<<"El peso promedio es de: " <<edadP<<endl;
                cout<<"El total de encuestados es de: "<<sumT<<endl;
                break;
            }
        }





    }



    return 0;
}
