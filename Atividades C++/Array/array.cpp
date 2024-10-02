#include <iostream>
using namespace std;

/*
um array é uma estrutura de dados que armazena múltiplos valores do mesmo tipo em uma sequência contínua
*/

int main() {
    // Declaração de um array de inteiros com 5 elementos
    // Inicializando os elementos do array
    int numeros[] = {17, 28, 31, 42, 55};

    //indice
    cout << numeros[2] << endl << endl;

    //Usando loop range-based para percorrer o array for (declaração : array) {
    for(int numero : numeros) {
        cout << numero << " ";
    }

    cout << endl;

    // Acessando e imprimindo os elementos do array
    for (int i = 0; i < 5; i++) {
        // código a ser executado para cada elemento da coleção
        cout << "Elemento " << i << ": " << numeros[i] << endl;
    }

    return 0;
}
