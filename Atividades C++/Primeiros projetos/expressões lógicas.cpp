#include <iostream>
using namespace std;

int main() {

    cout <<  "OPERADORES RELACIONAIS" << endl << endl;

    /*  == Igual a.
        Retorna true se os operandos forem iguais.
    */
    int a = 5, b = 6;
    bool resultado1 = (a == b);
    cout << boolalpha << "Resultado de A e B: " << resultado1 << endl << endl;

    /*
        !=  Diferente de.
        Retorna true se os operandos não forem iguais.
    */
    int c = 5, d = 10;
    bool resultado2 = (c != d); // resultado será true
    cout << boolalpha << "Resultado de C e D: " << resultado2 << endl << endl;

    /*
        < Menor que.
        > Maior que.
        Retorna true se o operando da esquerda for menor que o da direita.
    */
    int e = 3, f = 5;
    bool resultado3 = (e < f); // resultado será true
    cout << boolalpha << "Resultado de E e F: " << resultado3 << endl << endl;

    /*
        <= Menor ou igual a.
        >= Maior ou igual a.
        Retorna true se o operando da esquerda for menor ou igual ao da direita.
    */
    int g = 35, h = 5;
    bool resultado4 = (g <= h); // resultado será true
    cout << boolalpha << "Resultado de G e H: " << resultado4 << endl << endl;

    cout <<  "=========================================" << endl << endl;

    cout <<  "OPERADORES LÓGICOS" << endl << endl;

    /*
        && E lógico (AND).
        Retorna true se ambas as expressões forem verdadeiras.
    */
    bool i = true, j = false;
    bool resultado5 = (i && j); // resultado será false
    cout << boolalpha << "Resultado de I e J: " << resultado5 << endl << endl;

    /*
        || Ou lógico (OR).
        Retorna true se pelo menos uma das expressões for verdadeira.
    */
    bool k = true, l = false;
    bool resultado6 = (k || l); // resultado será true
    cout << boolalpha << "Resultado de K e L: " << resultado6 << endl << endl;

    /*
        ! Não lógico (NOT). Inverte o valor booleano da expressão.
    */
    bool m = true;
    bool resultado7 = !m; //resultado será false
    cout << boolalpha << "Resultado de M: " << resultado7 << endl << endl;

}
