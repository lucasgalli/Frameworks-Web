#include <iostream>
using namespace std;

// Função para calcular o momento fletor (M)
double calcularMomentoFletor(double carga, double comprimento) {
    // Para uma viga simplesmente apoiada com carga concentrada no centro, o momento máximo ocorre no centro.
    // Fórmula: M = (carga * comprimento) / 4
    return (carga * comprimento) / 4;
}

// Função para calcular a tensão na viga
double calcularTensao(double momento, double y, double inercia) {
    // Fórmula da tensão: sigma = (M * y) / I
    return (momento * y) / inercia;
}

int main() {
    double carga, comprimento, y, inercia;

    // Entrada de dados
    cout << "Digite o valor da carga aplicada na viga (em Newtons): ";
    cin >> carga;
    cout << "Digite o comprimento da viga (em metros): ";
    cin >> comprimento;
    cout << "Digite a distância da fibra mais distante até o eixo neutro (em metros): ";
    cin >> y;
    cout << "Digite o momento de inércia da seção transversal (em metros^4): ";
    cin >> inercia;

    // Calcula o momento fletor
    double momentoFletor = calcularMomentoFletor(carga, comprimento);

    // Calcula a tensão na viga
    double tensao = calcularTensao(momentoFletor, y, inercia);

    // Exibe os resultados
    cout << "O momento fletor máximo é: " << momentoFletor << " N·m" << endl;
    cout << "A tensão na fibra mais distante é: " << tensao << " N/m²" << endl;

    return 0;
}
