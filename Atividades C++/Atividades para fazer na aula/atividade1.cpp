#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    double altura, peso;
    char primeiraLetra;
    bool concordaTermos;

    // Entrada de dados
    cout << "Digite seu nome completo: ";
    getline(cin, nome); //é uma função da biblioteca padrão do C++ utilizada para ler uma linha inteira de entrada, incluindo os espaços em branco,

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite sua altura (em metros): ";
    cin >> altura;

    cout << "Digite seu peso (em kg): ";
    cin >> peso;

    cout << "Digite a primeira letra do seu nome: ";
    cin >> primeiraLetra;

    cout << "Você está de acordo com os termos? (1 para Sim, 0 para Não): ";
    cin >> concordaTermos;

    // Exibição dos dados
    cout << "\nNome completo: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Altura: " << altura << " metros" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Primeira letra do nome: " << primeiraLetra << endl;
    cout << "Está de acordo com os termos? ";
    if(concordaTermos == 1){
        cout << "Sim" << endl;
    }
    else{
        cout << "Nao" << endl;
    }

}
