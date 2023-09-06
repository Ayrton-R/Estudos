#include <iostream>
#include <locale.h>
using namespace std;
int counter =0;
int soma=0;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    while (counter<=100)
    { soma = counter + soma;


            cout<<soma<<endl;


        counter++;
    }
    cout<<"Soma total é:"<<soma<<endl;


    return 0;
}

