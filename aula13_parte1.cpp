#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    for (int numero = 0; numero <= 20; numero++) {
        cout << numero << " é um número inteiro." << endl;
    }

    return 0;
}