#include <iostream>
#include <locale.h>
using namespace std;
int A[6];
int main()
{
    setlocale(LC_ALL, "Portuguese");
    for(int i=0; i <6; i++)
    {
        cout<<"Informe um valor:"<<endl;
        cin>>A[i];
    }
    for (int i=0; i<6; i++)
    {
        cout <<"Vetor na posição A["<<i<<"] é:"<<A[i]<<endl;
    }



    return 0;
}
