#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    //Ao fornecer uma semente variável (como o tempo atual), você garante que a sequência seja diferente a cada vez
    //gerador de números aleatórios é baseada no tempo atual.
    srand(time(0)); // Inicializa a semente de geração de números aleatórios
    int numero_secreto = rand() % 100 + 1;//+1 é para ficar 1 a 100 e não de 0 a 99 // é usada para gerar números inteiros pseudoaleatórios (sequência determinada).
    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhacao!\n";
    cout << "Eu escolhi um numero entre 1 e 100.\n";

    do {
        cout << "Digite o seu palpite: ";
        cin >> palpite;
        tentativas++;

        if (palpite > numero_secreto) {
            if(palpite > numero_secreto+20){
                cout << "Valor muito alto! Tente novamente.\n";
            }
            else{
                cout << "Valor alto! Tente novamente.\n";
            }
        }
        else if (palpite < numero_secreto) {
            if(palpite+20 < numero_secreto){
                 cout << "Valor muito baixo! Tente novamente.\n";
            }
            else{
                 cout << "Valor baixo! Tente novamente.\n";
            }
        }
        else {
            cout << "Parabéns! Voce adivinhou o numero em " << tentativas << " tentativas.\n";
        }
    } while (palpite != numero_secreto);
}
