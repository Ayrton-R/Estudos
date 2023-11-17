#include <iostream>
#include <locale.h>
using namespace std;
int A[20], pares=0;

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    for(int i=0; i<20; i++)
    {
        cout<<"Informe um vetor"<<endl;
        cin>>A[i];
        if (A[i]%2==0)
        {
            pares++;
        }
    }
    cout<<"A Quantidade de pares é de:"<<pares<<endl;
    return 0;
}
