#include <iostream>
#include <locale.h>
#define L 4
#define T 4
using namespace std;
float A[L][T],B[L][T], C[L][T];
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    //Ler uma matriz
    for(int i=0; i<L; i++)
    {
        for(int j=0; j<T; j++)
        {
            cout<<"Informe o valor de A["<<i<<"]["<<j<<"]"<<endl;
            cin>>A[i][j];
            cout<<"Informe o valor de B["<<i<<"]["<<j<<"]"<<endl;
            cin>>B[i][j];
            C[i][j] = B[i][j]-A[i][j];


        }

    }
    for(int i=0; i<L; i++)
    {
        cout<<"|";
        for(int j=0; j<T; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }



    return 0;
}
