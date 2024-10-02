#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicializa a semente de geração de números aleatórios
    int numero_secreto = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100
    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhacao!\n";
    cout << "Eu escolhi um numero entre 1 e 100.\n";

    do {
        cout << "Digite o seu palpite: ";
        cin >> palpite;
        tentativas++;

        if (palpite > numero_secreto) {
            cout << "Muito alto! Tente novamente.\n";
        } else if (palpite < numero_secreto) {
            cout << "Muito baixo! Tente novamente.\n";
        } else {
            cout << "Parabens! Voce adivinhou o numero em " << tentativas << " tentativas.\n";
        }
    } while (palpite != numero_secreto);
}
