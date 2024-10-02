#include <iostream>  // Biblioteca que permite a entrada e saída de dados
#include <locale.h>
using namespace std;

int main() {

    setlocale(LC_ALL, "portuguese");

    int num1, num2;  // Declaração de duas variáveis inteiras

    // Solicita ao usuário para inserir o primeiro número
    cout << "Digite o primeiro número: ";
    cin >> num1;  // Lê o primeiro número e armazena em num1

    // Solicita ao usuário para inserir o segundo número
    cout << "Digite o segundo número: ";
    cin >> num2;  // Lê o segundo número e armazena em num2

    // Soma os dois números e armazena o resultado em uma nova variável
    int soma = num1 + num2;

    // Exibe o resultado da soma
    cout << "A soma dos números é: " << soma << endl;
    system("pause");
    return 0;  // Indica que o programa terminou com sucesso
}
