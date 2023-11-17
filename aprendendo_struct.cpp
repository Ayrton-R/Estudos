#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;

struct Podruto
{
    int codigo;
    char nome[50];
    int qtd;
    float valor;


};
Podruto podrutos[100];
bool continuar = true;
int counter=0;
int opcao;



int main()
{
    setlocale(LC_ALL, "Portuguese");
    while(continuar)
    {
        cout<<"--------------------MENU--------------------"<<endl;
        cout<<"1-------------------CADASTRAR NOVO--------------------"<<endl;
        cout<<"2-------------------IMPRIMIR--------------------"<<endl;
        cout<<"3-------------------SAIR--------------------"<<endl;
        cout<<"--------------------------------------------"<<endl;
        cout<<endl<<"Informe uma opção: "<<endl;
        cin>>opcao;
        system ("cls");

        switch(opcao)
        {
        case 1:
            cout<<"Informe o codigo do podruto"<<endl;
            cin>>podrutos[counter].codigo;
            cout<<"Informe o nome do podruto"<<endl;
            cin>>podrutos[counter].nome;
            cout<<"Informe a qtd do podruto"<<endl;
            cin>>podrutos[counter].qtd;
            cout<<"Informe o valor do podruto"<<endl;
            cin>>podrutos[counter].valor;
            counter ++;

            break;
        case 2:
            for(int i =0; i<counter; i++)
            {
                cout<<endl<<"-----PODRUTO:---------"<<endl;
                cout<<"Codigo do podruto"<<podrutos[i].codigo<<endl;
                cout<<"Nome do podruto"<<podrutos[i].nome<<endl;
                cout<<"Qtd do podruto"<<podrutos[i].qtd<<endl;
                cout<<"Valor do podruto"<<podrutos[i].valor<<endl;
            }
            break;
        case 3:
            continuar= false;
            break;
        default:
            cout<<"Opção inválida"<<endl;
            break;

        }
    }











    return 0;
}
