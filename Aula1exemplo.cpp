#include <iostream> //biblioteca

using namespace std; //inicializa��o

//declara��o de variaveis globais
float B, H, area;


int main() //fun��o principal INICIO
{
    cout<<"informe B:\n";
    cin>>B;

    cout<<"informe H:\n";
    cin>>H;

    area = B * H;
    // = atribui��o

    cout<<"\A area eh: "<<area;

    return 0; // FIM
}
