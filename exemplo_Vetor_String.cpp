#include <iostream>
#include <locale.h>
using namespace std;
int notas [5];
float soma, media,maior,menor;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i <5; i++)
    {
        cout<<"Informa uma nota"<<endl;
        cin>>notas [i];
    }
    for (int i =0; i<5; i++)
    {
        cout<<"Vetor posição" <<i<<": "<<notas [i]<<endl;
        soma=notas[i]+soma;
    if  (notas[i]>maior){
            maior=notas[i];
    }
    if(notas[i]<menor){
        menor = notas [i];
    }

    }

    media=soma/5;
    cout<<"A Média é:"<<media<<endl;

    return 0;
}
