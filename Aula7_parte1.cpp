#include <iostream>

using namespace std;
int diastot, ano, mes, dias, totaldias;

int main()
{
    cout<<"Informe quantos anos vc tem"<<endl;
    cin>>ano;

    cout<<"Informe quantos meses vc tem"<<endl;
    cin>>mes;

    cout<<"Informe quantos dias vc tem"<<endl;
    cin>>dias;

    totaldias= ano*365+mes*30+dias;

    cout<<"O total de dias eh"<<totaldias<<endl;











    return 0;
}
