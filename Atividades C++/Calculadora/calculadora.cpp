#include <iostream> // Inclui a biblioteca padrão de entrada e saída
using namespace std; // Usa o namespace padrão para simplificar o código

int main() {
    double num1, num2; // Declaração de variáveis para armazenar os números de entrada
    char operacao; // Declaração de variável para armazenar o operador da operação
    char opcao; // Declaração de variável para armazenar a opção do usuário de continuar ou sair

    do {
        // Solicita ao usuário que insira os números e a operação
        cout << "Digite o primeiro número: ";
        cin >> num1;
        cout << "Digite o segundo número: ";
        cin >> num2;

        cout << "Escolha a operação (+, -, *, /): ";
        cin >> operacao;

        // Estrutura condicional para realizar a operação selecionada
        switch (operacao) {
            case '+':
                cout << "Resultado: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break; // Interrompe a execução após o cálculo
            case '-':
                cout << "Resultado: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break; // Interrompe a execução após o cálculo
            case '*':
                cout << "Resultado: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break; // Interrompe a execução após o cálculo
            case '/':
                // Verifica se o divisor é zero para evitar divisão por zero
                if (num2 != 0) {
                    cout << "Resultado: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << "Erro: Divisão por zero não é permitida!" << endl;
                }
                break; // Interrompe a execução após o cálculo
            default:
                cout << "Operação inválida! Por favor, escolha +, -, *, ou /." << endl; // Mensagem de erro para operações inválidas
                break; // Interrompe a execução após o cálculo
        }

        // Pergunta ao usuário se ele deseja realizar outro cálculo
        cout << "Deseja realizar outro cálculo? (s/n): ";
        cin >> opcao;

    } while (opcao == 's' || opcao == 'S'); // Continua o loop se o usuário digitar 's' ou 'S'

    cout << "Obrigado por usar a calculadora. Até logo!" << endl;
}
