#include <iostream>
#include <windows.h>
#include <locale.h>
#include <cstring>

using namespace std;

struct Podruto
{
    int codigo;
    char nome[50];
    int qtd;
    float valor;
};

Podruto podrutos[100];
bool continuar = true;
int counter = 0;
int opcao;

// Function prototypes
bool cadastrarPodruto();
bool imprimirPodrutos();
bool alterarPodruto(int codigo);
bool removerPodruto(int codigo);
bool buscarPorNome();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    while (continuar)
    {
        cout << "--------------------MENU--------------------" << endl;
        cout << "1-------------------CADASTRAR NOVO--------------------" << endl;
        cout << "2-------------------IMPRIMIR--------------------" << endl;
        cout << "3-------------------ALTERAR PODRUTO--------------------" << endl;
        cout << "4-------------------REMOVER PODUTO--------------------" << endl;
        cout << "5-------------------BUSCAR POR NOME--------------------" << endl;
        cout << "6-------------------SAIR--------------------" << endl;
        cout << "--------------------------------------------" << endl;
        cout << endl
             << "Informe uma opção: " << endl;
        cin >> opcao;
        system("cls");

        switch (opcao)
        {
        case 1:
            cadastrarPodruto();
            break;
        case 2:
            imprimirPodrutos();
            break;
        case 3:
            int codigoAlterar;
            cout << "Informe o código do produto a ser alterado: ";
            cin >> codigoAlterar;
            alterarPodruto(codigoAlterar);
            break;
        case 4:
            int codigoRemover;
            cout << "Informe o código do produto a ser removido: ";
            cin >> codigoRemover;
            removerPodruto(codigoRemover);
            break;
        case 5:
            buscarPorNome();
            break;
        case 6:
            continuar = false;
            break;
        default:
            cout << "Opção inválida" << endl;
            break;
        }
    }

    return 0;
}

bool cadastrarPodruto()
{
    if (counter < 100)
    {
        cout << "Informe o codigo do produto: ";
        cin >> podrutos[counter].codigo;
        cout << "Informe o nome do produto: ";
        cin >> podrutos[counter].nome;
        cout << "Informe a quantidade do produto: ";
        cin >> podrutos[counter].qtd;
        cout << "Informe o valor do produto: ";
        cin >> podrutos[counter].valor;
        counter++;
        return true;
    }
    else
    {
        cout << "Limite de produtos atingido." << endl;
        return false;
    }
}

bool imprimirPodrutos()
{
    if (counter > 0)
    {
        for (int i = 0; i < counter; i++)
        {
            cout << endl
                 << "-----PRODUTO:---------" << endl;
            cout << "Código do produto: " << podrutos[i].codigo << endl;
            cout << "Nome do produto: " << podrutos[i].nome << endl;
            cout << "Quantidade do produto: " << podrutos[i].qtd << endl;
            cout << "Valor do produto: " << podrutos[i].valor << endl;
        }
        return true;
    }
    else
    {
        cout << "Nenhum produto cadastrado." << endl;
        return false;
    }
}

bool alterarPodruto(int codigo)
{
    for (int i = 0; i < counter; i++)
    {
        if (podrutos[i].codigo == codigo)
        {
            cout << "Novo nome do produto: ";
            cin >> podrutos[i].nome;
            cout << "Nova quantidade do produto: ";
            cin >> podrutos[i].qtd;
            cout << "Novo valor do produto: ";
            cin >> podrutos[i].valor;
            cout << "Produto alterado com sucesso!" << endl;
            return true;
        }
    }
    cout << "Produto não encontrado." << endl;
    return false;
}

bool removerPodruto(int codigo)
{
    for (int i = 0; i < counter; i++)
    {
        if (podrutos[i].codigo == codigo)
        {
            for (int j = i; j < counter - 1; j++)
            {
                podrutos[j] = podrutos[j + 1];
            }
            counter--;
            cout << "Produto removido com sucesso!" << endl;
            return true;
        }
    }
    cout << "Produto não encontrado." << endl;
    return false;
}

bool buscarPorNome()
{
    char nomeBusca[50];
    cout << "Informe o nome do produto a ser buscado: ";
    cin >> nomeBusca;

    for (int i = 0; i < counter; i++)
    {
        if (strcmp(podrutos[i].nome, nomeBusca) == 0)
        {
            cout << endl
                 << "-----PRODUTO ENCONTRADO:---------" << endl;
            cout << "Código do produto: " << podrutos[i].codigo << endl;
            cout << "Nome do produto: " << podrutos[i].nome << endl;
            cout << "Quantidade do produto: " << podrutos[i].qtd << endl;
            cout << "Valor do produto: " << podrutos[i].valor << endl;
            return true;
        }
    }
    cout << "Produto não encontrado." << endl;
    return false;
}
