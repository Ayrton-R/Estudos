#include <iostream>

using namespace std;
float metros, deci, cent, mili;


int main()
{
 cout<<"Informe o valor em metro: \n";
 cin>>metros;

 deci = metros*10;
 cent = metros*100;
 mili = metros*1000;
 cout<<"\nO Valor em decimetro eh: "<<deci<<"\n";
 cout<<"\nO Valor em centimetro eh: "<<cent<<"\n";
 cout<<"\nO Valor em milimetro eh: "<<mili<<"\n";
 return 0;
}
