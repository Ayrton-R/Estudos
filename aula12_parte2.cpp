#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero = 1;
    int soma = 0;

    do {
        soma += numero;
        numero++;
    } while (numero <= 100);

    cout << "A soma dos cem primeiros números inteiros é: " << soma << endl;

    return 0;
}