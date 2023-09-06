#include <iostream>
#include <locale.h>
using namespace std;
int counter =1;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    while (counter <30)
    {
        if (counter%4==0)
    {
        cout<<counter<<endl;
    }
counter++;
}


return 0;
}


