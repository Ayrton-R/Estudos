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

        cout<<"Voc� � administrador ou usu�rio ?, aperte (A) para Admin (U) para usu�rio"<<endl;
        cin>>usuario;
        if (usuario =='A')
        {
            cout<<"Digite sua senha de administrador"<<endl;
            cin>>senha;
            if (senha==270396)
            {
                cout<<"Seja bem vindo administrador, vamos fazer a contagem de votos"<<endl;
                cout<<"O Total da contagem de votos para Felipe Smith � de:"<<VotoF<<endl;
                cout<<"O Total da contagem de votos para Romero Brito � de:"<<VotoR<<endl;
                cout<<"O Total da contagem de votos para Katrina � de:"<<VotoK<<endl;
                cout<<"O Total da contagem de votos para Cabo Daciolo � de:"<<VotoC<<endl;
            }
            else
            {
                cout<<"Senha inv�lida, por favor verifique a senha digitada e tente novamente"<<endl;
            }
        }
        else if(usuario=='U')
        {
            while(counter>=0)
            {
                cout<<"Fa�a sua vota��o, (F)Para Felipe Smith, (R) para Romero Brito, (K) para Katrina, (C) para Cabo Daciolo..."<<endl;
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
                    cout<<"Fim da vota��o"<<endl;
                }

            }
        }
    }

    return 0;
}
