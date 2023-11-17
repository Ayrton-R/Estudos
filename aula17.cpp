#include <iostream>
#include <locale.h>
#define TAMANHO 6
using namespace std;
int A[6];
int soma,counter=1;

int main(){

setlocale(LC_ALL, "Portuguese");
A[0]=1;
A[1]=0;
A[2]=5;
A[3]=-2;
A[4]=-5;
A[5]=7;
soma = A[0]+A[1]+A[5] ;
cout<<"Soma de A[0] + A[1] e A[5] é:"<<soma<<endl;

A[4]=100;
for (int i=0; i <TAMANHO; i++){
    cout <<"Vetor na posição A["<<i<<"] é:"<<A[i]<<endl;
}
return 0;
}
