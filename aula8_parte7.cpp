#include <iostream>
using namespace std;
int n;
int main()
{   
    cout<<"Insira um numero"<<endl;
    cin>>n;
    if(n % 2==0){
        cout<<"Numero eh par"<<endl;
    }
    else{
        cout<<"Numero eh impar"<<endl;
    }
    if (n>0){
    cout<<"Numero eh positivo"<<endl;
    }
    else if(n<0){
        cout<<"Numero eh negativo"<<endl;
    }
    else{
        cout<<"O numero eh zero"<<endl;
    }


















    return 0;
}