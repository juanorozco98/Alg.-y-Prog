#include <iostream>

using namespace std;

int main()
{
    int num1 = 0, num2 = 0, eleccion = 0, total = 0;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Seleccione operacion: " <<endl;
    cout << "1. Sumar" <<endl;
    cout << "2. Restar" <<endl;
    cout << "3. Multiplicar" <<endl;
    cout << "4. Dividir" <<endl;
    cin >> eleccion;

    switch(eleccion)
    {
        case 1:
        total=num1+num2;
        break;
        case 2:
        total=num1-num2;
        break;
        case 3:
        total=num1*num2;
        break;
        case 4:
        total=num1/num2;
        break;
        default:
        cout << "Opcion no disponible. Posee retrazo mental " << endl;
    }

    cout << "Total: " << total;


    return 0;

}
