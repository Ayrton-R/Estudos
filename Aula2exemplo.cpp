#include <iostream> //biblioteca

using namespace std; //inicialização

//declaração de variaveis globais
float B, H, area;


int main() //função principal INICIO
{
    cout<<"informe B:\n";
    cin>>B;

    cout<<"informe H:\n";
    cin>>H;

    area = B * H;
    // = atribuição

    cout<<"\A area eh: "<<area;

    return 0; // FIM
}
