#include <iostream>

using namespace std;

int main()
{
    int time = 0;
    char categoria = '0';
    float value = 0, inc = 0;

    cout << "Ingrese numero de años trabajadas: " << endl;
    cin >> time;
    cout << "Ingrese sueldo: " << endl;
    cin >> value;

    if (time>20&&time<=30)
    {
        categoria= 'A';
    }
    else if (time>15&&time<=20)
    {
        categoria= 'B';
    }
    else if (time>10&&time<=15)
    {
        categoria= 'C';
    }
    else
    {
        categoria= 'D';
    }
    switch (categoria)
    {
        case 'A':
        inc=value*1.15;
        break;
        case 'B':
        inc=value*1.12;
        break;
        case 'C':
        inc=value*1.1;
        break;
        case 'D':
        inc=value+15;
        break;
    }

    cout << "Aumento: " << inc;

    return 0;
}
