#include <iostream>

using namespace std;

int main()
{
    int total = 0, sueldo = 0, recargo = 0, horas = 0, base = 0;
    cout << "Ingrese horas trabajadas" << endl;
    cin >> horas;

    if (horas<40)
    {
        sueldo=horas*5000;
            cout << "Nomina: " << sueldo;
    }
    else
    {
        recargo= (horas-40)*7500;
        base=40*5000;
        total= base+recargo;
            cout << "Nomina: " << total;
    }
    return 0;
}
