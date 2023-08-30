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
    cout<<"****************************************  1-Calcular Média  ***********************************************"<<endl;
    cout<<"****************************************  2-Calcular Diferença  *******************************************"<<endl;
    cout<<"****************************************  3-Raiz Quadrada do 1º  ******************************************"<<endl;
    cout<<"****************************************  4-Raiz Cúbica do 2º  ********************************************"<<endl;
    cout<<"***********************************************************************************************************"<<endl;
    cout<<"Informe uma opção"<<endl;
    cin>> option_user;
    switch(option_user)
    {
    case 1:
        cout<<"Cálculo de média"<<endl;
        float media;
        media = (n1+n2)/2.0;
        cout<<"A média é:"<<media<<endl;
        break;
    case 2:
        cout<<"Cálculo da Diferença"<<endl;
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
        cout<<"Raiz Quadrada do 1º"<<endl;
        float quad;
        quad = sqrt(n1);
        cout<<"Raiz quadrada do 1º é:"<<quad<<endl;
        break;
    case 4:
        cout<<"Raiz cúbica do 2º"<<endl;
        float cub;
        cub = cbrt(n2);
        cout<<"Raiz cúbica do 2º é:"<<cub<<endl;
        break;
    default:
        break;
    }








    return 0;
}
