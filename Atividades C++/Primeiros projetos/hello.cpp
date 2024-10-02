#include <iostream>
#include <locale.h>
using namespace std; //namespace indica onde está as bibliotecas, onde vai buscar(espaço de trabalho)
//standard, referindo-se à biblioteca padrão do C++

int main(){
    setlocale(LC_ALL, "portuguese");
    cout << "Hello world! é" << endl;
    return 0;
}
