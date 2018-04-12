#include<iostream>

using namespace std;

int main()
{
    int estrato=0, i=1, energia=0, agua=0, pulso=0, valorE=0,valorA=0,valorP=0,valorT=0,sumclientes=0,valorfacturado=0;
    int valorFE=0,valorFA=0,valorFP=0, fin=0;

    //cout<<"Ingrese el estrato"<<endl;
    //cin>>estrato;


    while(true)
    {
        cout<<"Al desear terminar el proceso ingrese estrato '0'"<<endl;
        cout<<"usuario numero "<<i<<endl;
        i++;
        cout<< "Ingrese el estrato: "<<endl;

        cin>>estrato;

        switch(estrato)
        {
            case 1:

                cout<<"Ingrese el consumo de energia en Kwh: "<<endl;
                cin>>energia;
                valorE=energia*80;
                cout<<"Ingrese el consumo de agua en m3: "<<endl;
                cin>>agua;
                valorA=agua*120;
                cout<<"Ingrese el consumo de pulso de telefonico: "<<endl;
                cin>>pulso;
                valorP=pulso*9;
                valorT=valorE+valorA+valorP;

                cout<<"Valor a pagar por energia es de: "<<valorE<<endl;
                cout<<"Valor a pagar por agua es de: "<<valorA<<endl;
                cout<<"Valor a pagar por pulso telefonico es de: "<<valorP<<endl;
                cout<<"Valor a pagar total es de: "<<valorT<<endl;
                break;



            case 2:

                cout<<"Ingrese el consumo de energia en Kwh: "<<endl;
                cin>>energia;
                valorE=energia*80;
                cout<<"Ingrese el consumo de agua en m3: "<<endl;
                cin>>agua;
                valorA=agua*120;
                cout<<"Ingrese el consumo de pulso de telefonico: "<<endl;
                cin>>pulso;
                valorP=pulso*9;
                valorT=valorE+valorA+valorP;

                cout<<"Valor a pagar por energia es de: "<<valorE<<endl;
                cout<<"Valor a pagar por agua es de: "<<valorA<<endl;
                cout<<"Valor a pagar por pulso telefonico es de: "<<valorP<<endl;
                cout<<"Valor a pagar total es de: "<<valorT<<endl;
                break;
            case 3:

                cout<<"Ingrese el consumo de energia en Kwh: "<<endl;
                cin>>energia;
                valorE=energia*105;
                cout<<"Ingrese el consumo de agua en m3: "<<endl;
                cin>>agua;
                valorA=agua*150;
                cout<<"Ingrese el consumo de pulso de telefonico: "<<endl;
                cin>>pulso;
                valorP=pulso*15;
                valorT=valorE+valorA+valorP;

                cout<<"Valor a pagar por energia es de: "<<valorE<<endl;
                cout<<"Valor a pagar por agua es de: "<<valorA<<endl;
                cout<<"Valor a pagar por pulso telefonico es de: "<<valorP<<endl;
                cout<<"Valor a pagar total es de: "<<valorT<<endl;
                break;

            case 4:
                cout<<"Ingrese el consumo de energia en Kwh: "<<endl;
                cin>>energia;
                valorE=energia*105;
                cout<<"Ingrese el consumo de agua en m3: "<<endl;
                cin>>agua;
                valorA=agua*150;
                cout<<"Ingrese el consumo de pulso de telefonico: "<<endl;
                cin>>pulso;
                valorP=pulso*15;
                valorT=valorE+valorA+valorP;

                cout<<"Valor a pagar por energia es de: "<<valorE<<endl;
                cout<<"Valor a pagar por agua es de: "<<valorA<<endl;
                cout<<"Valor a pagar por pulso telefonico es de: "<<valorP<<endl;
                cout<<"Valor a pagar total es de: "<<valorT<<endl;
                break;

            case 5:
                cout<<"Ingrese el consumo de energia en Kwh: "<<endl;
                cin>>energia;
                valorE=energia*120;
                cout<<"Ingrese el consumo de agua en m3: "<<endl;
                cin>>agua;
                valorA=agua*195;
                cout<<"Ingrese el consumo de pulso de telefonico: "<<endl;
                cin>>pulso;
                valorP=pulso*20;
                valorT=valorE+valorA+valorP;

                cout<<"Valor a pagar por energia es de: "<<valorE<<endl;
                cout<<"Valor a pagar por agua es de: "<<valorA<<endl;
                cout<<"Valor a pagar por pulso telefonico es de: "<<valorP<<endl;
                cout<<"Valor a pagar total es de: "<<valorT<<endl;
                break;

            case 6:
                cout<<"Ingrese el consumo de energia en Kwh: "<<endl;
                cin>>energia;
                valorE=energia*120;
                cout<<"Ingrese el consumo de agua en m3: "<<endl;
                cin>>agua;
                valorA=agua*195;
                cout<<"Ingrese el consumo de pulso de telefonico: "<<endl;
                cin>>pulso;
                valorP=pulso*20;
                valorT=valorE+valorA+valorP;

                cout<<"Valor a pagar por energia es de: "<<valorE<<endl;
                cout<<"Valor a pagar por agua es de: "<<valorA<<endl;
                cout<<"Valor a pagar por pulso telefonico es de: "<<valorP<<endl;
                cout<<"Valor a pagar total es de: "<<valorT<<endl;
                break;
            case 0:

                cout<<"El total de clientes procesados con exito es de: "<<sumclientes<<endl;
                cout<<"El valor total facturado es de: "<<valorfacturado<<endl;
                cout<<"El valor facturado por consuomo de energia es de: "<<valorFE<<endl;
                cout<<"El valor facturado por consuomo de agua es de: "<<valorFA<<endl;
                cout<<"El valor facturado por consuomo de energia es de: "<<valorFP<<endl;
                break;


            default:

                cout<<"Ingrese un estrato valido"<<endl;
                i--;
                break;
        }
        sumclientes=i-1;
        valorfacturado=valorfacturado+valorT;
        valorFE=valorFE+valorE;
        valorFA=valorFA+valorA;
        valorFP=valorFP+valorP;
        if(estrato==0)
        {
            cout<<"Si desea cerrar el programa ingrese cualquier tecla"<<endl;
            cout<<"Si desea continuar con otra cuenta de clientes ingrese 1"<<endl;
            cin>>fin;
            i=1;
            if(fin==0)
            {
                break;
            }
        }





    }





    return 0;
}
