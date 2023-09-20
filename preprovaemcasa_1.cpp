#include <iostream>
#include <locale.h>
using namespace std;
float x,y,z;
int main()
{setlocale(LC_ALL, "Portuguese"),
cout<<"Insira o valor de X:"<<endl;
cin>>x;
cout<<"Insira o valor de Y:"<<endl;
cin>>y;
cout<<"Insira o valor de Z:"<<endl;
cin>>z;
float media =(x+y+z)/3;
cout<<"A média de X,Y e Z é de:"<<media<<endl;



    return 0;
}