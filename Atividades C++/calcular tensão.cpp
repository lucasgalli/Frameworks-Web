#include <iostream>
using namespace std;

// Função para calcular a tensão
double calcularTensao(double forca, double area) {
    return forca / area;
}

int main() {
    double forca, area;

    // Entrada de dados
    cout << "Digite a força aplicada (em Newtons): ";
    cin >> forca;
    cout << "Digite a área da seção transversal (em metros quadrados): ";
    cin >> area;

    // Calcula a tensão
    double tensao = calcularTensao(forca, area);

    // Exibe o resultado
    cout << "A tensão na viga é: " << tensao << " N/m²" << endl;

    return 0;
}
