#include <iostream>
#include <locale.h>
int x,y,z;
using namespace std;
int main()
{    setlocale(LC_ALL, "Portuguese");
    cout<<"Coloque o valor para X"<<endl;
    cin>>x;
    cout<<"Coloque o valor para Y"<<endl;
    cin>>y;
    cout<<"Coloque o valor para Z"<<endl;
    cin>>z;
    int med = (x+y+z)/3;
    cout<<"A m�dia aritim�tica de X, Y e Z � de:"<<med<<endl;


return 0;
}
