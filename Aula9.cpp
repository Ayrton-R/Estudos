#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
int n1, n2, option_user;
int main()
//para corrigir acentua��o do portugu�s
{
    setlocale(LC_ALL, "Portuguese");
    cout<<"Informe o n�mero 1"<<endl;
    cin>>n1;
    cout<<"Informe n�mero 2"<<endl;
    cin>>n2;
    cout<<"***********************************************************************************************************"<<endl;
    cout<<"************************************************MENU*******************************************************"<<endl;
    cout<<"****************************************  1-Calcular M�dia  ***********************************************"<<endl;
    cout<<"****************************************  2-Calcular Diferen�a  *******************************************"<<endl;
    cout<<"****************************************  3-Raiz Quadrada do 1�  ******************************************"<<endl;
    cout<<"****************************************  4-Raiz C�bica do 2�  ********************************************"<<endl;
    cout<<"***********************************************************************************************************"<<endl;
    cout<<"Informe uma op��o"<<endl;
    cin>> option_user;
    switch(option_user)
    {
    case 1:
        cout<<"C�lculo de m�dia"<<endl;
        float media;
        media = (n1+n2)/2.0;
        cout<<"A m�dia �:"<<media<<endl;
        break;
    case 2:
        cout<<"C�lculo da Diferen�a"<<endl;
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
        cout<<"A diferen�a �"<<dif<<endl;
        break;
    case 3:
        cout<<"Raiz Quadrada do 1�"<<endl;
        float quad;
        quad = sqrt(n1);
        cout<<"Raiz quadrada do 1� �:"<<quad<<endl;
        break;
    case 4:
        cout<<"Raiz c�bica do 2�"<<endl;
        float cub;
        cub = cbrt(n2);
        cout<<"Raiz c�bica do 2� �:"<<cub<<endl;
        break;
    default:
        break;
    }








    return 0;
}
