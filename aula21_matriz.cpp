#include <iostream>
#include <locale.h>
using namespace std;
int mat [3][3];
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    //Ler uma matriz
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Informe o valor de ["<<i<<"]["<<j<<"]"<<endl;
            cin>>mat [i][j];
        }
    }

//imprimir uma matriz
    for(int i=0; i<3; i++)
    {
        cout<<"|";
        for(int j=0; j<3; j++)
        {
            cout<<mat [i][j]<<" ";
        }
        cout<<"|"<<endl;
    }



    return 0;
}
