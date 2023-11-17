#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int Vetor1[10],Vetor2[10], Vetor3[10];

    for(int i=0; i<10; i++)
    {
        cout<<"Informe o vetor 1"<<endl;
        cin>>Vetor1[i];

        cout<<"Informe o vetor 2"<<endl;
        cin>>Vetor2[i];
    }

    for (int i=0; i<10; i++)
    {
        Vetor3[i]=Vetor1[i]*Vetor2[i];
    }
    cout<<"O Resultado é"<<endl;
    for(int i =0; i<10; i++)
    {
        cout<<Vetor3[i]<<endl;
    }

}
