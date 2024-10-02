#include <iostream>
using namespace std;


/*
Situação: Quando você precisa garantir que o loop execute pelo menos uma vez, independentemente da condição. A condição é verificada apenas depois da primeira execução.
Uso Típico: Quando a lógica precisa ser executada ao menos uma vez antes da verificação da condição.

*/

// Exemplo 1: Solicitar Senha até Estar Correta
int main() {
    string senha;
    const string senhaCorreta = "12345";

    do {
        cout << "Digite a senha: ";
        cin >> senha;

        if (senha != senhaCorreta) {
            cout << "Senha incorreta. Tente novamente." << endl;
        }
    } while (senha != senhaCorreta);
	cout << endl;
    cout << "Senha correta! Acesso concedido." << endl;
	cout << endl;

// Exemplo 2: Mostrar Menu até o Usuário Sair

    int opcao;

    do {
        cout << "Menu:" << endl;
        cout << "1. Opção 1" << endl;
        cout << "2. Opção 2" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

		cout << endl;

        switch (opcao) {
            case 1:
                cout << "Você escolheu a Opção 1." << endl;
                break;
            case 2:
                cout << "Você escolheu a Opção 2." << endl;
                break;
            case 3:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }

    } while (opcao != 3);


// Exemplo 3: Repetir até que o Usuário Diga "Não"

    cout << "Você escolheu parar. Fim do programa." << endl;

}
