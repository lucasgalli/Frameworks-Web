#include <iostream>  // Inclui a biblioteca padrão de entrada e saída

using namespace std;  // Permite o uso de elementos do namespace std sem o prefixo std::

int main() {
    int dia;  // Declaração de uma variável do tipo inteiro

    /*do{*/
        cout << "Digite um número (1-7) para escolher o dia da semana: ";  // Envia uma string para a saída padrão
        cin >> dia;  // Lê um valor da entrada padrão e o armazena na variável 'dia'

        // Estrutura switch compara o valor da variável 'dia' com os casos definidos
        switch (dia) {  // Inicia a estrutura switch
            case 1:  // Se 'dia' for igual a 1, executa o bloco abaixo
                cout << "Domingo" << endl;  // Exibe a string "Domingo" e um caractere de nova linha
                break;  // Interrompe a execução do switch para evitar a execução dos casos seguintes
            case 2:  // Se 'dia' for igual a 2, executa o bloco abaixo
                cout << "Segunda-feira" << endl;  // Exibe a string "Segunda-feira" e um caractere de nova linha
                break;  // Interrompe a execução do switch
            case 3:  // Se 'dia' for igual a 3, executa o bloco abaixo
                cout << "Terça-feira" << endl;  // Exibe a string "Terça-feira" e um caractere de nova linha
                break;  // Interrompe a execução do switch
            case 4:  // Se 'dia' for igual a 4, executa o bloco abaixo
                cout << "Quarta-feira" << endl;  // Exibe a string "Quarta-feira" e um caractere de nova linha
                break;  // Interrompe a execução do switch
            case 5:  // Se 'dia' for igual a 5, executa o bloco abaixo
                cout << "Quinta-feira" << endl;  // Exibe a string "Quinta-feira" e um caractere de nova linha
                break;  // Interrompe a execução do switch
            case 6:  // Se 'dia' for igual a 6, executa o bloco abaixo
                cout << "Sexta-feira" << endl;  // Exibe a string "Sexta-feira" e um caractere de nova linha
                break;  // Interrompe a execução do switch
            case 7:  // Se 'dia' for igual a 7, executa o bloco abaixo
                cout << "Sábado" << endl;  // Exibe a string "Sábado" e um caractere de nova linha
                break;  // Interrompe a execução do switch
           /* case 8:  // Se 'dia' for igual a 8, encerra
                cout << "Fim" << endl;
                break;*/
            default:  // Caso o valor de 'dia' não corresponda a nenhum dos casos anteriores
                cout << "Número inválido. Por favor, insira um número entre 1 e 7." << endl;  // Exibe a string de erro e um caractere de nova linha
                break;  // Interrompe a execução do switch
        }
    /*}
    while(dia != 8);*/

}
