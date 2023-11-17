#include <iostream>
#include <locale.h>
using namespace std;
int counter =1;
float  qtdn, media, nota, soma =0.0;
int main()

{
    setlocale(LC_ALL, "Portuguese");
    cout<<"Informe a quantidade de notas"<<endl;
    cin>> qtdn;
    while (counter <=qtdn)
    {
        cout<<"Informe uma nota:"<<counter<<endl;
        cin>>nota;
        soma = soma + nota;
        counter++; //contador +1

    }
    media = soma/qtdn;
    cout<<" A Média é:"<<media<<endl;








    return 0;
}
