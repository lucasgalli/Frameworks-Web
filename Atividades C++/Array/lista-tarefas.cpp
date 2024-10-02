#include <iostream>
#include <string>
using namespace std;

int main() {
    char repetir; // Variável para controlar o loop do-while

    // Loop principal do programa, controlado pelo do-while
    do {
        string tarefas[5]; // Array para armazenar 5 tarefas

        /*
        começa com i = 0 porque os arrays em C++ são indexados a partir do zero, ou seja, o índice do primeiro elemento de qualquer array é 0
        */

        // Etapa 1: Usando o loop for para inserir e exibir as tarefas
        cout << "Insira 5 tarefas:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Tarefa " << i + 1 << ": ";
            getline(cin, tarefas[i]); // Lê a tarefa inserida pelo usuário
        }

        // Exibindo as tarefas inseridas
        cout << "\nTarefas inseridas:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << tarefas[i] << endl;
        }

        // Etapa 2: Usando o loop while para procurar uma tarefa
        char procurar;
        cout << "\nDeseja procurar por uma tarefa específica? (s/n): ";
        cin >> procurar;
        cin.ignore(); // Limpa o buffer de entrada

        if (procurar == 's' || procurar == 'S') {
            string tarefaProcurada;
            cout << "Digite a tarefa que deseja procurar: ";
            getline(cin, tarefaProcurada);

            bool encontrada = false;
            int i = 0;

            // Usando while para procurar a tarefa
            while (i < 5) {
                if (tarefas[i] == tarefaProcurada) {
                    cout << "Tarefa encontrada!" << endl;
                    encontrada = true;
                    break;
                }
                i++;
            }

            if (!encontrada) {
                cout << "Tarefa não encontrada!" << endl;
            }
        }

        // Etapa 3: Perguntar se o usuário deseja repetir o processo
        cout << "\nDeseja criar uma nova lista de tarefas? (s/n): ";
        cin >> repetir;
        cin.ignore(); // Limpa o buffer de entrada para evitar problemas com o getline

    } while (repetir == 's' || repetir == 'S'); // O loop continua se o usuário digitar 's' ou 'S'

    cout << "Programa encerrado." << endl;
    return 0;
}
