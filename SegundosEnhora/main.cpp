#include <iostream>

using namespace std;

int main()
{
    int numero = 0, horas = 0, minutos = 0, segundos = 0;
    cout << "Escriba segundos: " << endl;
    cin >> numero;
    horas=(int)numero/3600;
    minutos=(int)((numero-horas*3600)/60);
    segundos=(int)numero-((horas*3600)+(minutos*60));
    cout << "el tiempo es de: "<<horas<<"h"<<minutos<<"m"<<segundos<<"s";





    return 0;
}
