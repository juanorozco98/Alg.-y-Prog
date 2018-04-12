#include <iostream>

using namespace std;

int main()
{
   //declaracion de variable
    int num = 0;
    float v = 0, total = 0;

    cout << "Ingrese 1,2 o 3 para seleccionar la expresion: " <<endl;
    cin >> num;
    cout << "ingrese voltaje: ";
    cin >> v;
    switch (num)
    {
        case 1:
        total=100*v;
        break;
        case 2:
        total=100-v;
        break;
        case 3:
        total=100/v;
        break;
        default:
        cout << "Opcion no disponible ";
    }// fin caso

    cout <<"total: " << total;
    return 0;
}
