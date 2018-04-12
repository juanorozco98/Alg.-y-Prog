#include <iostream>

using namespace std;

int main()
{
    float numero = 0, porcentaje = 0;
    cout << "Ingrese el consumo" << endl;
    cin >> numero;
    porcentaje = (numero/10000)*100;

    if (porcentaje < 80)
    {
        cout << "Consumo bajo: " << porcentaje << "%";
    }
    else if (porcentaje>100)
    {
        cout << "Consumo alto de energia: " << porcentaje << "%";
    }
    else
    {
        cout << "Consumo medio de energia: " << porcentaje << "%";
    }
    return 0;
}
