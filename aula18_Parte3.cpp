#include <iostream>
#include <locale.h>
using namespace std;
int A[10],counter=0;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    while(counter<10)
    {
        cout<<"Informe um vetor"<<endl;
        cin>>A[counter];
        counter++;
    }
    counter=0;
    cout<<"Vetores positivos são"<<endl;
    while(counter<10)
    {
        if(A[counter]>=0)
        {
            cout<<A[counter]<<endl;
        }

        counter++;
    }
    return 0;
}
