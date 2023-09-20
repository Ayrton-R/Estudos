#include <iostream>
#include <locale.h>
using namespace std;
int nota1, nota2,notexame;
float med;
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    cout<<"Insira a primeira nota:"<<endl;
    cin>>nota1;
    cout<<"Insira a segunda nota:"<<endl;
    cin>>nota2;
    med = (nota1+nota2)/2;
    if (med>=7)
    {
        cout<<"Aluno aprovado"<<endl;
    }
    else if(med >= 4 &&   med <= 6.9)
    {
        cout<<"Aluno está de exame final. Insira sua nota do exame"<<endl;
        cin>>notexame;

        if(notexame+med>=10)
        {
            cout<<"Aluno está aprovado por exame final"<<endl;
        }
        else
        {
            cout<<"Aluno está reprovado no exame final"<<endl;
        }
    }

    else
    {
        cout<<"Auno está reprovado"<<endl;
    }











    return 0;
}
