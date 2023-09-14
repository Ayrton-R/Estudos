#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    for (int numero = 15; numero <= 200; numero++) {
        int quadrado = numero * numero;
        cout << "O quadrado de " << numero << " é: " << quadrado << endl;
    }

    return 0;
}