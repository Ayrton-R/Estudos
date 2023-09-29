#include <iostream>
#include <locale.h>
using namespace std;
float A[6];
int soma;

int main(){

setlocale(LC_ALL, "Portuguese");
A[0]=1;
A[1]=0;
A[2]=5;
A[3]=-2;
A[4]=-5;
A[5]=7;
soma = A[0]+A[1]+A[5] ;
cout<<"Soma é igual a:"<<soma<<endl;
return 0;
}
