#include <iostream>  // Inclui a biblioteca padrão de entrada e saída

using namespace std;  // Permite o uso de elementos do namespace std sem o prefixo std::

int main() {
    double valorCompra;  // Declaração de uma variável do tipo double para armazenar o valor da compra
    bool membro;  // Declaração de uma variável do tipo booleano para indicar se o cliente é membro
    double desconto = 0.0;  // Declaração e inicialização de uma variável do tipo double para o valor do desconto

    // Solicita ao usuário o valor da compra
    cout << "Digite o valor da compra: R$ ";
    cin >> valorCompra;  // Lê o valor digitado e o armazena na variável 'valorCompra'

    // Solicita ao usuário para indicar se é membro (1 para sim, 0 para não)
    cout << "O cliente é membro do programa de fidelidade? (1 para sim, 0 para não): ";
    cin >> membro;  // Lê o valor digitado (0 ou 1) e o armazena na variável 'membro'

    // Aplicar desconto baseado no valor da compra e se o cliente é membro
    if (valorCompra > 500 || membro) {  // Verifica se o valor da compra é maior que 500 ou se o cliente é membro
        desconto = 0.10;  // Atribui 10% de desconto se a condição for verdadeira
    } else if (valorCompra > 300 && !membro) {  // Verifica se o valor da compra é maior que 300 e o cliente NÃO é membro
        desconto = 0.05;  // Atribui 5% de desconto se a condição for verdadeira
    } else if (valorCompra > 200) {  // Verifica se o valor da compra é maior que 200 (independente de ser membro)
        desconto = 0.03;  // Atribui 3% de desconto se a condição for verdadeira
    } else {  // Se nenhuma das condições anteriores for verdadeira
        desconto = 0.0;  // Nenhum desconto é aplicado
    }

    // Calcula o valor final da compra após aplicar o desconto
    double valorFinal = valorCompra - (valorCompra * desconto);  // Aplica o desconto

    // Exibe o valor final após o desconto
    cout << "Valor final após o desconto: R$ " << valorFinal << endl;
}
