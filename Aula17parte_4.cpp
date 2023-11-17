#include <iostream>
#include <locale.h>
float A[8];
int vetor, soma,x,y;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    for (int i=0; i<8; i++)
    {
        cout<<"Informe um valor"<<endl;
        cin>>A[i];
    }
    cout<<"Informe um valor de X:"<<endl;
    cin>>x;
    cout<<"Informe um valor de Y:"<<endl;
    cin>>y;

    soma =A[x] + A[y];
    cout<<"A soma dos vetores é:"<<soma<<endl;
return 0;
}
