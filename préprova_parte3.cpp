#include <iostream>
#include <locale.h>
int counter =1, numero,soma=0,menor=0;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    while(counter<=10)
    {
        cout<<"Insira um n�mero"<<endl;
        cin>>numero;
        soma=soma+numero;


        if (menor > numero || counter == 1)
        {
            menor=numero;
        }
        counter++;
    }
    cout<<"A Soma de todos os n�meros �:"<<soma<<endl;
    cout<<"O Menor numero �:"<<menor<<endl;

    return 0;
}
