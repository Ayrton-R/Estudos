#include <iostream>

using namespace std;
float a, b, c;
int main()
{
        cout<<"Digite o primeiro numero"<<endl;
        cin>>a;
        cout<<"Digite o segundo numero"<<endl;
        cin>>b;
        cout<<"Digite o terceiro numero"<<endl;
        cin>>c;

        if (a>b&& a>c){
            cout<<a<<endl;
        }
        else if(b>a&& b>c){
            cout<<b<<endl;
        }
        else if(c>b&& c>a){
            cout<<c<<endl;
        }

    return 0;
}
