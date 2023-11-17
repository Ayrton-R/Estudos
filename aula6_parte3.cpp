#include <iostream>

using namespace std;
float altura, peso,IMC;
int main()
{   cout<<"Digite seu peso"<<endl;
    cin>>peso;

    cout<<"Digite sua altura"<<endl;
    cin>>altura;
    IMC=peso/(altura*altura);
    if (IMC < 16) {
        cout << "Sua classificassaum eh Magreza grave" << endl;
    } else if (IMC < 17) {
        cout << "Sua classificassaum eh Magreza moderada" << endl;
    } else if (IMC < 18.5) {
        cout << "Sua classificassaum eh Magreza leve" << endl;
    } else if (IMC < 25) {
        cout << "Sua classificassaum eh Saudável" << endl;
    } else if (IMC < 30) {
        cout << "Sua classificassaum eh Sobrepeso" << endl;
    } else if (IMC < 35) {
        cout << "Sua classificassaum eh Obesidade Grau I" << endl;
    } else if (IMC < 40) {
        cout << "Sua classificassaum eh Obesidade Grau II (severa)" << endl;
    } else {
        cout << "Sua classificassaum eh Obesidade Grau III (mórbida)" << endl;
    }

    cout<<"Seu IMC eh"<<IMC<<endl;










    return 0;
}
