#include <iostream>
#include <string>
using namespace std;

int main() {
    string materialInserido, materialInserido2, materialInserido3;
    string materialBuscado;
    char opcao;

    // Solicita o nome do material para ser registrado
    cout << "Insira o nome de um material de construção: ";
    cin >> materialInserido;

    // Solicita o nome do material para ser registrado
    cout << "Insira o nome do segundo material: ";
    cin >> materialInserido2;

       // Solicita o nome do material para ser registrado
    cout << "Insira o nome do terceiro material: ";
    cin >> materialInserido3;

    // Loop para buscar materiais repetidamente
    do {
        cout << "\nDigite o nome do material que deseja buscar: ";
        cin >> materialBuscado;

        // Verifica se o material buscado corresponde ao material inserido
        if (materialBuscado == materialInserido) {
            cout << "Material " << materialBuscado << " encontrado!" << endl;
        }
        else if (materialBuscado == materialInserido2) {
            cout << "Material " << materialInserido2 << " encontrado!" << endl;
        }
        else if (materialBuscado == materialInserido3) {
            cout << "Material " << materialInserido3 << " encontrado!" << endl;
        }
         else {
            cout << "Material não corresponde ao material registrado." << endl;
        }

        // Pergunta se o usuário deseja continuar buscando
        cout << "\nDeseja buscar outro material? (s/n): ";
        cin >> opcao;

    } while (opcao == 's');

    cout << "Programa encerrado." << endl;

    return 0;
}
