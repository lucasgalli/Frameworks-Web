
#include <iostream>
using namespace std;

/*
uma função é um bloco de código que realiza uma tarefa específica.
As funções ajudam a tornar o código mais organizado e reutilizável
*/

//Void é usado quando uma função pode não retornar nenhum valor.
void saudacao() {
    cout << "Olá, bem-vindo!" << endl;
}

/*
C++ permite que você defina valores padrão para os parâmetros de uma função.
Se o valor não for fornecido ao chamar a função, o valor padrão será usado.
*/

//variáveis não precisam ser a mesma
//exemplo simples de posições do parâmetros

/*void saudacao(string nome = "Visitante") {
    cout << "Olá, " << nome << "!" << endl;
}*/

// Definição da função que soma dois números
int soma(int a, int b) { //função que retorna um número inteiro, double ou float.
    return a + b;
}

void dobrar(int valor) {
    valor *= 2;
    cout << "O dobro do valor é: " << valor << endl; //apenas para testar, pois o valor altera apenas aqui dentro.
}

//ao usar & será alterado o valor da variável dentro e fora da função.
void calculo(int &x) { // o x está sendo passado por referência, & é necessario quando a variável precisa ser modificada
    x = x * 10;
}

int calcularQuadrado(int num) {
    return num * num;
}

//usar a mesma função várias vezes

int main() {

    int num = 7, num1 = 5, num2 = 10, num3 = 12, num4 = 6;

    cout << "Função saudacao() " << endl;
    saudacao(); // Chama a função mensagem, testar com paramentro

    cout << endl;

    cout << "Função soma() " << endl;
    cout << soma(num, num1) << endl;

    cout << endl;

    cout << "Função dobrar()" << endl;
    dobrar(num2);
    cout << "Valor após dobrar: " << num2 << endl;

    cout << endl;

    cout << "Função calculo() " << endl;
    calculo(num3);  // Passa a variável por referência
    cout << "calculo: " << num3 << endl;

    cout << endl;

    cout << "Quadrado de num4: " << calcularQuadrado(num4) << endl;  // Saída: 25
    cout << "num4 ainda é: " << num4 << endl;  // Saída: 5 (valor original inalterado)

}
