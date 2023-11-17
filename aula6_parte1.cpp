#include <iostream>

using namespace std;
float A, B, C;


int main ()
{
    cout<<"Escreva o valor de A"<<endl;
    cin>>A;
    cout<<"Escreva o valor de B"<<endl;
    cin>>B;
    cout<<"Escreva o valor de C"<<endl;
    cin>>C;

    if ((A+B)<C)
    {

        cout<<"A soma eh menor que C"<<endl;

    }
    else if((A+B)>C)
        {
            cout<<"A soma eh maior que C"<<endl;
        }
    else
    {

        cout<<"A soma eh igual a C"<<endl;
    }




    return 0;
}
