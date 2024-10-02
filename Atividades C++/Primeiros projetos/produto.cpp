#include <iostream>  // Biblioteca que permite a entrada e saída de dados
#include <string>    // Biblioteca para manipulação de strings
using namespace std;
int main() {
    // Declaração e atribuição de variáveis
    string nomeProduto = "Notebook Dell";
    int quantidade = 10;
    double preco = 3599.99;
    char categoria = 'E';
    bool emEstoque = true;

    // Exibição das informações usando cout
    cout << "Perfil do Produto" << endl;
    cout << "------------------" << endl;
    cout << "Nome do Produto: " << nomeProduto << endl;
    cout << "Quantidade em Estoque: " << quantidade << endl;
    cout << "Preço: R$ " << preco << endl;
    cout << "Categoria: " << categoria << " (E para Eletrônicos)" << endl;
	//condição ternária - (emEstoque ? "Sim" : "Não")
    cout << "Disponível em Estoque: " << (emEstoque ? "Sim" : "Não") << endl;

    return 0;  // Indica que o programa terminou com sucesso
}
