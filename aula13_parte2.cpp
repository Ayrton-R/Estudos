#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int soma = 0;

    for (int numero = 1; numero <= 100; numero++) {
        soma += numero;
    }

    cout << "A soma dos cem primeiros números inteiros é: " << soma << endl;

    return 0;
}