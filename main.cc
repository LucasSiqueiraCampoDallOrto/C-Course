#include <iostream>

using namespace std; 
/* 

instead of using std:: cout << "Message"; we can make it easier by using "using namespace std",
and now we can use cout << "Message"; directly */ 

/*

usamos cout para saída  ----- cout << "Message";  -> exibir dados
usamos cin para entrada ----- cin >> x;           -> ler dados

*/

// endl -> quebra linha
// sizeof(variavel) -> retorna o tamanho da variável
// system("pause") -> pausa a execução do programa até o usuário pressionar alguma tecla

int main() {
    cout << "Hello, Word" << endl; 

    int x;
    cout << "Digite um valor para x: " << endl;
    cin >> x;
    cout << "Valor digitado para x: " << x << endl;

    // Alguns exemplos extras de COUT e CIN
    int n1 = 10;
    int n2 = 15;
    cout << n1 + n2 << endl;
    cout << "Tamanho da variavel n1: " << sizeof(n1) << endl;

    return 0;
}