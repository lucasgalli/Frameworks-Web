#include <iostream> // Inclui a biblioteca necessária para entrada e saída
using namespace std;
int main() {
    int idade; // Declara uma variável inteira para armazenar a idade do usuário

    // Solicita ao usuário que insira sua idade
    cout << "Digite sua idade: ";
    cin >> idade; // Lê a idade digitada pelo usuário

    // Verifica se o usuário é elegível para votar e/ou obter uma carteira de motorista
    if (idade >= 18) {
        cout << "Você é elegível para votar e também para obter uma carteira de motorista." << endl;
    }
    else if (idade >= 16) {
        cout << "Você é elegível para votar, mas ainda não pode obter uma carteira de motorista." << endl;
    }
    else {
        cout << "Você não é elegível para votar nem para obter uma carteira de motorista." << endl;
    }

}
