#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    for (int numero = 1; numero < 30; numero++) {
        if (numero % 4 == 0) {
            cout << numero << " é divisível por 4." << endl;
        }
    }

    return 0;
}