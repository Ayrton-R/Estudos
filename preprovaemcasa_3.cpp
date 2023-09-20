#include <iostream>
#include <locale.h>
using namespace std;
int numero, counter=1, soma=0, menor;
int main ()
{setlocale(LC_ALL, "Portuguese");
    while (counter <=10){
    
        cout<<"Insira um número"<<endl;
        cin>>numero;
        soma=numero+soma;
    
    if (counter == 1 || numero < menor) {
            menor = numero;}
            counter++;
    }
cout<<"A soma de todos os números é"<<soma<<endl; 
cout<<"O menor número é:"<<menor<<endl;
    return 0;    
}