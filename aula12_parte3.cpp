#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero = 1;

    do {
        if (numero % 4 == 0) {
            cout << numero << " é divisível por 4." << endl;
        }
        numero++;
    } while (numero < 30);

    return 0;
}