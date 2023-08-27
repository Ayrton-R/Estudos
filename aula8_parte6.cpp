#include    <iostream>
using namespace std;
float nota1, nota2, nota3;
int main()
{
    cout<<"Insira a nota 1"<<endl;
    cin>>nota1;
    cout<<"Insira a nota 2"<<endl; 
    cin>>nota2;
    cout<<"insira a nota3"<<endl;  
    cin>>nota3;

    float mediap =(nota1*4+nota2*3+nota3*3)/10;
    if (mediap>=5){
        cout<<"Aprovado"<<mediap<<endl;
    }
    else if(mediap<5){

        cout<<"Reprovado"<<mediap<<endl;
    }














    return 0;

}