#include <iostream>  // Inclui a biblioteca padrão para entrada e saída

using namespace std;  // Permite o uso de elementos da biblioteca padrão sem prefixá-los com std::

int main() {
    int nota;  // Declara uma variável do tipo inteiro para armazenar a nota digitada pelo usuário

    // Solicita ao usuário para inserir a nota
    cout << "Digite a nota (0-100): ";  // Exibe uma mensagem pedindo ao usuário que insira uma nota
    cin >> nota;  // Lê a nota digitada pelo usuário e armazena na variável 'nota'

    // Verifica a classificação da nota
    if (nota >= 90) {  // Se a nota for maior ou igual a 90, a classificação é A
        cout << "Classificação: A" << endl;  // Exibe a mensagem "Classificação: A"
    } else if (nota >= 80) {  // Se a nota for maior ou igual a 80, mas menor que 90, a classificação é B
        cout << "Classificação: B" << endl;  // Exibe a mensagem "Classificação: B"
    } else if (nota >= 70) {  // Se a nota for maior ou igual a 70, mas menor que 80, a classificação é C
        cout << "Classificação: C" << endl;  // Exibe a mensagem "Classificação: C"
    } else if (nota >= 60) {  // Se a nota for maior ou igual a 60, mas menor que 70, a classificação é D
        cout << "Classificação: D" << endl;  // Exibe a mensagem "Classificação: D"
    } else {  // Se a nota for menor que 60, a classificação é F
        cout << "Classificação: F" << endl;  // Exibe a mensagem "Classificação: F"
    }

}
