#include <iostream>
using namespace std;

int main() {
    int anos, meses, dias;
    int resto;
    int diastot;

    cout<<"Digite a quantidade de dias totais"<<endl;
    cin>>diastot;

    anos=diastot/365;
    resto=diastot%365;
    meses=resto/30;
    dias=resto%30;

    cout<<"idade em dias"<<dias<<endl;
    cout<<"Idade em meses"<<meses<<endl;
    cout<<"Idade em Anos"<<anos<<endl;






    return 0;
}
