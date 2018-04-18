#include <iostream>
#include <string> //biblioteca de cadena de caracteres

using namespace std;

int main()
{
    string nombre[5];
    float nota[5],total=0.0,suma=0.0;
    for(int i=0;i<=4;i++)
    {
        cout<<"Ingrese nombre estudiante "<<i+1<<": ";
        cin>>nombre[i];
        for(int j=1;j<=5;j++)
        {
            cout<<"Ingrese la nota de la materia "<<j<<": ";
            cin>>suma;
            total=total+suma;
        }
        nota[i]=total/5.0;
        total=0;
    }
    for(int i=0;i<=4;i++)
    {
        cout<<"Nombre: "<<nombre[i]<<endl;
        cout<<"Nota: " <<nota[i]<<endl;
    }

    return 0;
}
