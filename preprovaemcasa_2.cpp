#include<iostream>
#include <locale.h>
using namespace std;
float nota1, nota2, media,notaexame;
int main()
{setlocale(LC_ALL, "Portuguse");
cout<<"Insira sua primeira nota"<<endl;
cin>>nota1;
cout<<"Insira sua segunda nota"<<endl; 
cin>>nota2;
media=(nota1+nota2)/2;
if (media>=7){
    cout<<"Aluno está aprovado"<<endl;
    cout<<"Com média de:"<<media<<endl;
}
else if (media>=4 && media <=6.9){
    cout<<"Ficou de exame otário, estuda mais um pouco e faça a prova"<<endl;
    cout<<"Insira a nota do exame"<<endl;
    cin>>notaexame;

    if (media+notaexame>=10){
        cout<<"Parabéns foi aprovado"<<endl;
        }
        else if (media+notaexame<=10){
            cout<<"LOOSER"<<endl;
            cout<<"TOMOU DP"<<endl;
        } 
    }
    else{
        cout<<"MANO CÊ É MUITO BURRO"<<endl;
        cout<<"REPROVADO"<<endl; 
    }

return 0;
}