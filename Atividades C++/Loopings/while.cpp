#include <iostream>
#include <cstdlib> // para rand() e srand()
#include <ctime>   // para time()
using namespace std;


/*

Situação: Quando você não sabe exatamente quantas vezes o loop deve ser executado, mas a repetição depende de uma condição que pode mudar durante o loop.
Uso Típico: Quando o número de iterações depende de uma condição que será avaliada antes de cada execução.

*/

// Exemplo 1: Encontrar o Maior Número em uma Sequência de Entradas
int main() {

    /*int i = 1; // Inicializa a variável de controle do loop

    // O loop 'while' continuará enquanto 'i' for menor ou igual a 5
    while (i <= 5) {
        cout << i << " "; // Exibe o valor atual de 'i'
        i++; // Incrementa 'i' em 1 a cada iteração
    }
    cout << endl;

    int numero, maior = 0;
    cout << "Digite números para encontrar o maior (digite 0 para parar): " << endl;
    cin >> numero;

    while (numero > 0) {
        if (numero > maior) {
            maior = numero;
        }
        cin >> numero;
    }

    /*cout << "O maior número digitado foi: " << maior << endl;

    //Exemplo 2: Verificar se um Número é Primo, não pode ter mais de dois divisores, caso divida apenas por 1 e por ele mesmo, é primo

    int numero2, i = 2;
    bool ehPrimo = true;

    cout << "Digite um número para verificar se é primo: ";
    cin >> numero2;

    while (i <= numero2 / 2) {
        if (numero2 % i == 0) {
            ehPrimo = false;
            break;
        }
        i++;
    }

    if (ehPrimo && numero2 > 1) {
        cout << numero2 << " é um número primo." << endl;
    } else {
        cout << numero2 << " não é um número primo." << endl;
    }*/

    //Exemplo 3: Adivinhar o Número Secreto

    srand(time(0)); // Define a semente para números aleatórios
    int numeroSecreto = rand() % 20 + 1; // Gera um número entre 1 e 20

    //int numeroSecreto = 7;
    int tentativa;

    cout << "Tente adivinhar o número secreto (entre 1 e 10): ";
    cin >> tentativa;

    while (tentativa != numeroSecreto) {
        cout << "Errado! Tente novamente: ";
        cin >> tentativa;
    }

    cout << "Parabéns! Você adivinhou o número secreto." << endl;

}

