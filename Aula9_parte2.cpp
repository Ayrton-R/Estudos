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
    cout<<"****************************************  1-SOMA  *********************************************************"<<endl;
    cout<<"****************************************  2-Subtra��o  ****************************************************"<<endl;
    cout<<"****************************************  3-Divis�o  ******************************************************"<<endl;
    cout<<"****************************************  4-Multiplica��o  ************************************************"<<endl;
    cout<<"***********************************************************************************************************"<<endl;
    cout<<"Informe uma op��o"<<endl;
    cin>> option_user;
    switch(option_user)
    {
    case 1:
        cout<<"SOMA"<<endl;
        float soma;
        soma = (n1+n2);
        cout<<"A soma �:"<<soma<<endl;
        break;
    case 2:
        cout<<"C�lculo da Subtra��o"<<endl;
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
        cout<<"DIVIS�O"<<endl;
        float divi;
        divi=n1/n2;
        cout<<"DIVIS�O �:"<<divi<<endl;
        break;
    case 4:
        cout<<"MULTIPLICA��O"<<endl;
        float mult;
        mult = (n1*n2);
        cout<<"MULTIPLICA��O �:"<<mult<<endl;
        break;
    default:
        break;
    }








    return 0;
}

