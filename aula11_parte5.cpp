#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero = 1;
    int soma = 0;

    while (numero <= 50) {
        if (numero % 2 == 0) {
            soma += numero;
        }
        numero++;
    }

    cout << "A soma dos valores pares de 1 a 50 são: "<<soma<<endl;

    return 0;
}