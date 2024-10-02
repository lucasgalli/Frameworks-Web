#include <iostream>
using namespace std;

/*

Situação: Quando você sabe de antemão o número exato de iterações que o loop deve executar.
Uso Típico: Para contar um número específico de vezes ou percorrer um array ou coleção com um tamanho fixo.

*/

// Exemplo 1: Calcular a Soma dos Primeiros N Números Naturais
int main() {

    //LOOPING SIMPLE
    /*cout << "Números de 1 a 10:" << endl;
    for (int i = 1; i <= 10; i++) { // Loop de 1 a 10
        cout << i << " "; // Exibe o número atual
    }
    cout << endl; // Nova linha após a sequência
    cout << endl;

    cout << "Caracteres de A a Z:" << endl;
    for (char c = 'A'; c <= 'Z'; c++) { // Loop de 'A' a 'Z'
        cout << c << " "; // Exibe o caractere atual
    }
    cout << endl;
    cout << endl;

    cout << "Números pares de 2 a 20:" << endl;
    for (int i = 2; i <= 20; i += 2) { // Loop de 2 a 20 com incremento de 2
        cout << i << " "; // Exibe o número par atual
    }
    cout << endl; // Nova linha após a sequência

    //SOMA DOS NÚMEROS NATURAIS
    int N, soma = 0;
    cout << "Digite um número inteiro N: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        soma += i;
    }
    cout << "A soma dos primeiros " << N << " números naturais é: " << soma << endl << endl;*/

    /*char opcao;
    do{
        // Exemplo 2: Exibir a Tabela de Multiplicação de um Número
        int numero;
        cout << "Digite um número para exibir sua tabela de multiplicação: ";
        cin >> numero;
        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }
        cout << endl;
        cout << "Criar outra tabela? (s/n): ";
        cin >> opcao;
    }while(opcao == 's');*/

    // Exemplo 3: Encontrar Fatorial de um Número - determinar o produto de todos os números inteiros - é o resultado da multiplicação de todos os inteiros
    int numero2;
    long long fatorial = 1;
    cout << "Digite um número para calcular seu fatorial: ";
    cin >> numero2;
    for (int i = 1; i <= numero2; i++) {
        fatorial *= i;
        cout << fatorial << endl;
    }
    cout << "\nO fatorial de " << numero2 << " é: " << fatorial << endl;

}
