#include <iostream>

using namespace std;
float altura, peso;
char Sexo;

int main ()
{
    cout<<"Informe a altura"<<endl;
    cin>>altura;

    cout<<"sexo?, M - Masculino. F - Feminino "<<endl;
    cin>>Sexo;

    if(Sexo=='M')
    {
        peso=(72.7*altura)-58;
        cout<<"O seu peso ideal eh: "<<peso<<endl;
    }
    else if (Sexo == 'F')
    {
        peso-(62.1*altura)-44.7;
        cout<<"O seu peso ideal eh: "<<peso<<endl;
    }
    else
    {
        cout<<"Caracter invalido"<<endl;
    }









    return 0;
}
