#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int totalProdutos;
    
    // Obter o número total de produtos
    cout << "Digite o número total de produtos: ";
    cin >> totalProdutos;

    // Arrays para armazenar códigos, nomes, preços antigos e preços novos dos produtos
    char codigos[totalProdutos];
    string nomes[totalProdutos];
    double precosCusto[totalProdutos];
    double precosNovos[totalProdutos];

    for (int i = 0; i < totalProdutos; i++) {
        char codigo;
        double precoCusto;

        // Input do código e nome do produto
        cout << "Digite o código do produto " << (i + 1) << ": ";
        cin >> codigo;
        cin.ignore(); // Limpar o buffer de entrada
        cout << "Digite o nome do produto " << (i + 1) << ": ";
        getline(cin, nomes[i]);

        // Armazenar o código do produto
        codigos[i] = codigo;

        cout << "Digite o preço de custo do produto " << codigo << ": ";
        cin >> precoCusto;

        // Armazenar o preço de custo
        precosCusto[i] = precoCusto;

        // Calcule o preço novo com aumento de 20%
        double precoNovo = precoCusto * 1.2;

        // Armazenar o preço novo
        precosNovos[i] = precoNovo;
    }

    // Exibir os preços antigos, preços novos, códigos dos produtos
    cout << "Códigos, Preços Antigos e Novos dos Produtos:" << endl;

    for (int i = 0; i < totalProdutos; i++) {
        char codigo = codigos[i];

        cout << "Produto: " << nomes[i] << endl;
        cout << "Código: " << codigo << endl;
        cout << "Preço de Custo Antigo: " << precosCusto[i] << endl;
        cout << "Preço Novo: " << precosNovos[i] << endl;
    }

    // Calcular as médias de preços antigos e novos
    double somaPrecoCusto = 0, somaPrecoNovo = 0;
    for (int i = 0; i < totalProdutos; i++) {
        somaPrecoCusto += precosCusto[i];
        somaPrecoNovo += precosNovos[i];
    }

    // Exibir as médias de preços no final
    cout << "Média dos preços de custo antigos: " << (somaPrecoCusto / totalProdutos) << endl;
    cout << "Média dos preços novos: " << (somaPrecoNovo / totalProdutos) << endl;

    return 0;
}
