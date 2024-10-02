#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicita ao usuário para inserir um número
    cout << "Digite um número: ";
    cin >> numero;

    // Verifica se o número é positivo
    if (numero > 0) {
        cout << "O número é positivo." << endl;
    }else{
        cout << "O número é negativo." << endl;
    }
}
