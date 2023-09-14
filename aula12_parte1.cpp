#include <iostream>
#include <locale.h>

using namespace std; 

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero = 1;

    do {
        cout << numero << " é um número ímpar." << endl;
        numero += 2;
    } while (numero <= 20);

    return 0;
}