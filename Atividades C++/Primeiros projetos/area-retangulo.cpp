#include <iostream>  // Biblioteca que permite a entrada e saída de dados
using namespace std;
int main() {
    double base, altura;  // Declaração das variáveis para base e altura
    double area, perimetro;  // Declaração das variáveis para área e perímetro

    // Solicita ao usuário para inserir a base do retângulo
    cout << "Digite a base do retângulo: ";
    cin >> base;

    // Solicita ao usuário para inserir a altura do retângulo
    cout << "Digite a altura do retângulo: ";
    cin >> altura;

    // Calcula a área do retângulo
    area = base * altura;

    // Calcula o perímetro do retângulo
    perimetro = 2 * (base + altura);

    // Exibe os resultados para o usuário
    cout << "A área do retângulo é: " << area << endl;
    cout << "O perímetro do retângulo é: " << perimetro << endl;

    return 0;  // Indica que o programa terminou com sucesso
}
