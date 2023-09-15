#include <iostream>
#include <locale.h>
using namespace std;
char sexo, zoio, cabelo;
int Idade,Pessoas, counter=0, Midade=0,CFVL=0;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout<<"Qual a quantidade de pessoas ?"<<endl;
    cin>>Pessoas;

    while(counter<Pessoas){

        cout<<"Qual a sua idade ?:"<<endl;
        cin>>Idade;
        cout<<"Qual o seu sexo ? Digite M para masculino, F para feminino"<<endl;
        cin>>sexo;
        cout<<"Qual a cor dos seus zóius? Digite A para azuis, V para verdes e C para castanhos "<<endl;
        cin>>zoio;
        cout<<"Qual a cor do seu cabelo ? Digite L para loiros,P para pretos, M para marrom."<<endl;
        cin>>cabelo;
        if (Midade<Idade){
            Midade=Idade;
        }
        if(sexo== 'F' && Idade>=18 && Idade <=35 && zoio== 'V' && cabelo== 'L'){
            CFVL++;
        }

        counter++;
    }

        cout<<"A maior idade é:"<<Midade<<endl;
        cout<<"A quantidade de mulheres com olhos verdes, cabelos loiros e idade entre 18 e 35 anos é de:"<<CFVL;




    return 0;
}
