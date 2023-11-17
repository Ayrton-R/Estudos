#include <iostream>
#include <locale.h>
using namespace std;
int counter =0;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    while (counter<=20){
        if(counter %2!=0){
            cout<<counter<<endl;
        }
        counter++;
    }
    counter=0;
    do{
        if((counter%2)!=0){
            cout<<"Número: "<<counter<<endl;
        }
        counter++;
    }while(counter <= 20);


    return 0;
}

