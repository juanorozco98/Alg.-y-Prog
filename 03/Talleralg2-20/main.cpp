#include <iostream>

using namespace std;

int main()
{
    int num=0, total=0, fin=1;
    while(true)
    {
        for (int i=1;i<=10;i++)
        {
            cout<<"ingrese el numero "<<i<<endl;
            cin>>num;
            total=num+total;
        }
        cout << "la suma total es de"<<total<<endl;
        cout << "Desea cerrar el programa?"<<endl;
        cout << "Ingrese 1 para cerrarlo " << endl;
        cout << "ingrese 0 para continuar: ";
        cin >> fin;

        if(fin==1)
        {
            break;
        }
        cin.clear();
    }
    return 0;
}
