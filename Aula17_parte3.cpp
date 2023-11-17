#include <iostream>
#include <locale.h>
using namespace std;
float A[10],B[10];
int main()
{setlocale(LC_ALL, "Portuguese");
for (int i=0; i<10; i++){
    cout<<"Informe um valor"<<endl;
    cin>>A[i];
}
for (int i=0; i<10; i++){
cout<<"O Quadrado dos números informados são:"<<endl;
B[i]= A[i]*A[i];
cout<<B[i]<<endl;
}






}
