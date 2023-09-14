#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero = 15;

    do {
        int quadrado = numero * numero;
        cout << "O quadrado de " << numero << " é: " << quadrado << endl;
        numero++;
    } while (numero <= 200);

    return 0;
}