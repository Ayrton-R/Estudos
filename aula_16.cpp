#include <iostream>
#include <locale.h>
using namespace std;
int VotoF=0, VotoR=0, VotoK=0, VotoC=0;
char usuario,candidato;
double senha, counter=0,continuar=0;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    while (continuar>=0){

        cout<<"Você é administrador ou usuário ?, aperte (A) para Admin (U) para usuário"<<endl;
        cin>>usuario;
        if (usuario =='A')
        {
            cout<<"Digite sua senha de administrador"<<endl;
            cin>>senha;
            if (senha==270396)
            {
                cout<<"Seja bem vindo administrador, vamos fazer a contagem de votos"<<endl;
                cout<<"O Total da contagem de votos para Felipe Smith é de:"<<VotoF<<endl;
                cout<<"O Total da contagem de votos para Romero Brito é de:"<<VotoR<<endl;
                cout<<"O Total da contagem de votos para Katrina é de:"<<VotoK<<endl;
                cout<<"O Total da contagem de votos para Cabo Daciolo é de:"<<VotoC<<endl;
            }
            else
            {
                cout<<"Senha inválida, por favor verifique a senha digitada e tente novamente"<<endl;
            }
        }
        else if(usuario=='U')
        {
            while(counter>=0)
            {
                cout<<"Faça sua votação, (F)Para Felipe Smith, (R) para Romero Brito, (K) para Katrina, (C) para Cabo Daciolo..."<<endl;
                cin>>candidato;
                if(candidato=='F')
                {
                    VotoF++;
                }
                if(candidato=='R')
                {
                    VotoR++;
                }
                if (candidato=='K')
                {
                    VotoK++;
                }
                if (candidato=='C')
                {
                    VotoC++;
                }
                if (candidato=='T')
                {
                    counter=-1;
                    cout<<"Fim da votação"<<endl;
                }

            }
        }
    }

    return 0;
}
