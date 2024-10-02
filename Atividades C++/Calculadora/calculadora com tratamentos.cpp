#include <iostream>  // Inclui a biblioteca padrão de entrada e saída
#include <limits>    // Inclui a biblioteca para tratamento de limites numéricos
using namespace std; // Usa o namespace padrão para simplificar o código

int main() {
    double num1, num2; // Declaração de variáveis para armazenar os números de entrada
    char operacao;     // Declaração de variável para armazenar o operador da operação
    char opcao;        // Declaração de variável para armazenar a opção do usuário de continuar ou sair

    do {
        // Solicita ao usuário que insira o primeiro número e verifica se a entrada é válida
        cout << "Digite o primeiro número: ";
        while (!(cin >> num1)) {
            cout << "Entrada inválida. Digite o primeiro número: ";
            cin.clear(); // Limpa o estado de erro do cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada inválida restante no buffer
        }

        // Solicita ao usuário que insira o segundo número e verifica se a entrada é válida
        cout << "Digite o segundo número: ";
        while (!(cin >> num2)) {
            cout << "Entrada inválida. Digite o segundo número: ";
            cin.clear(); // Limpa o estado de erro do cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada inválida restante no buffer
        }

        // Solicita ao usuário que escolha uma operação e verifica se a entrada é válida
        cout << "Escolha a operação (+, -, *, /): ";
        cin >> operacao;
        while (operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/') {
            cout << "Operação inválida. Escolha uma operação (+, -, *, /): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');// Ignora a entrada inválida restante no buffer
            cin >> operacao;
        }

        // Estrutura condicional para realizar a operação selecionada
        switch (operacao) {
            case '+':
                cout << "Resultado: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Resultado: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Resultado: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Resultado: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << "Erro: Divisão por zero não é permitida!" << endl;
                }
                break;
        }

        // Pergunta ao usuário se ele deseja realizar outro cálculo
        cout << "Deseja realizar outro cálculo? (s/n): ";
        cin >> opcao;
        while (opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N') {
            cout << "Entrada inválida. Por favor, digite 's' para sim ou 'n' para não: ";
            cin >> opcao;
        }

        // Limpa o buffer para evitar erros em loops subsequentes
        //cin.clear();
        //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (opcao == 's' || opcao == 'S'); // Continua o loop se o usuário digitar 's' ou 'S'

    cout << "Fim da operação!" << endl;

}
