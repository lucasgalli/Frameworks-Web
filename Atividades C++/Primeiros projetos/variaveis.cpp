#include <iostream>  // Biblioteca que permite a entrada e saída de dados
#include <string>    // Biblioteca para manipulação de strings
using namespace std;
int main() {
    // Declaração e atribuição de variáveis
    string nome = "Lucas Galli";
    int idade = 30;
    char genero = 'F';
    string cidade = "Francisco beltrão";
    string profissao = "Engenheiro Civil";

    // Exibição das informações usando cout
    cout << "Cartão de Identidade" << endl;
    cout << "---------------------" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Gênero: " << genero << endl;
    cout << "Cidade: " << cidade << endl;
    cout << "Profissão: " << profissao << endl;

    return 0;  // Indica que o programa terminou com sucesso
}
