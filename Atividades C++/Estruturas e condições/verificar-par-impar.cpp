#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

using namespace std;  // Permite o uso de elementos da biblioteca padrão sem prefixá-los com std::

int main() {
    int numero;  // Declara uma variável do tipo inteiro para armazenar o número digitado pelo usuário

    // Solicita ao usuário para inserir um número
    cout << "Digite um número: ";  // Exibe uma mensagem pedindo ao usuário que insira um número
    cin >> numero;  // Lê o número digitado pelo usuário e armazena na variável 'numero'

    //Usado para calcular o resto da divisão. Por exemplo, numero % 2 verifica se um número é divisível por 2 (resto zero significa que é par).
    if (numero % 2 == 0) { //operador lógico comparador
        cout << "O número é par." << endl;  // Exibe a mensagem "O número é par."
    } else {  // Se o resto da divisão por 2 não for zero, então o número é ímpar
        cout << "O número é ímpar." << endl;  // Exibe a mensagem "O número é ímpar."
    }
}
