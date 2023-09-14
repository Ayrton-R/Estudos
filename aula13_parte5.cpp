#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int soma = 0;

    for (int numero = 1; numero <= 50; numero++) {
        if (numero % 2 == 0) {
            soma += numero;
        }
    }

    cout << "A soma dos valores pares de 1 a 50 é: " << soma << endl;

    return 0;
}