#include <iostream>  // Biblioteca que permite a entrada e sa�da de dados
#include <locale.h>
using namespace std;

int main() {

    setlocale(LC_ALL, "portuguese");

    int num1, num2;  // Declara��o de duas vari�veis inteiras

    // Solicita ao usu�rio para inserir o primeiro n�mero
    cout << "Digite o primeiro n�mero: ";
    cin >> num1;  // L� o primeiro n�mero e armazena em num1

    // Solicita ao usu�rio para inserir o segundo n�mero
    cout << "Digite o segundo n�mero: ";
    cin >> num2;  // L� o segundo n�mero e armazena em num2

    // Soma os dois n�meros e armazena o resultado em uma nova vari�vel
    int soma = num1 + num2;

    // Exibe o resultado da soma
    cout << "A soma dos n�meros �: " << soma << endl;
    system("pause");
    return 0;  // Indica que o programa terminou com sucesso
}
