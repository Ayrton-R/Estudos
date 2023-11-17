#include <iostream>
using namespace std;

float n1, n2, exame, media, mf;

int main()
{
    cout<<"Informe a nota 1: \n";
    cin>>n1;

    cout<<"Informe a nota 2: \n";
    cin>>n2;
    media =(n1+n2)/2;
	bool aprovado = (media>=7.0);
    //if(<condição>) {
    if(aprovado)
    {
        cout<<"Media aprovada: "<<media<<endl;
    }
    else
    {
    	if(media >=4){	
    	cout<<"informe a nota exame ?"<<endl;
    	cin>>exame;
    	mf = (media +exame)/2;
    	
    }else{

        cout<<"Media reprovada"<<endl;
    }



    return 0;
}
