#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
int n1, n2, option_user;
int main()
//para corrigir acentuação do português
{
    setlocale(LC_ALL, "Portuguese");
    cout<<"Informe o número 1"<<endl;
    cin>>n1;
    cout<<"Informe número 2"<<endl;
    cin>>n2;
    cout<<"***********************************************************************************************************"<<endl;
    cout<<"************************************************MENU*******************************************************"<<endl;
    cout<<"****************************************  1-SOMA  *********************************************************"<<endl;
    cout<<"****************************************  2-Subtração  ****************************************************"<<endl;
    cout<<"****************************************  3-Divisão  ******************************************************"<<endl;
    cout<<"****************************************  4-Multiplicação  ************************************************"<<endl;
    cout<<"***********************************************************************************************************"<<endl;
    cout<<"Informe uma opção"<<endl;
    cin>> option_user;
    switch(option_user)
    {
    case 1:
        cout<<"SOMA"<<endl;
        float soma;
        soma = (n1+n2);
        cout<<"A soma é:"<<soma<<endl;
        break;
    case 2:
        cout<<"Cálculo da Subtração"<<endl;
        float dif;
        if (n1>n2)
        {
            dif= n1-n2;
        }
        else if (n2>n1)
        {
            dif= n2-n1;
        }
        else
        {
            dif=0;

        }
        cout<<"A diferença é"<<dif<<endl;
        break;
    case 3:
        cout<<"DIVISÃO"<<endl;
        float divi;
        divi=n1/n2;
        cout<<"DIVISÃO é:"<<divi<<endl;
        break;
    case 4:
        cout<<"MULTIPLICAÇÃO"<<endl;
        float mult;
        mult = (n1*n2);
        cout<<"MULTIPLICAÇÃO é:"<<mult<<endl;
        break;
    default:
        break;
    }








    return 0;
}

