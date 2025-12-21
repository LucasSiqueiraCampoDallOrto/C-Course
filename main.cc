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

/*

Modificadores de tipo:
1. short -> diminui o tamanho da variavel INTEIRA
2. long -> aumenta o tamanho da variavel INTEIRA
3. signed -> armazena numeros positivos e negativos
4. unsigned -> armazena somente numeros positivos

*/

/*

Operadores Aritméticos:
1. "+"
2. "-"
3. "*"
4. "/"
5. "%" -> resto da divisão 

*/

int main() {
    cout << "Hello, Word" << endl; 

    int x;
    cout << "Digite um valor para x: " << endl;
    cin >> x;
    cout << "Valor digitado para x: " << x << endl;

    // Alguns exemplos extras de COUT e CIN
    int n1 = 20;
    int n2 = 15;
    cout << n1 + n2 << endl;
    cout << "Tamanho da variavel n1: " << sizeof(n1) << endl;

    // Usando operadores aritméticos
    int soma = n1 + n2;
    int sub = n1 - n2;
    int multi = n1 * n2;
    int div = n1 / n2; 
    int resto = n1 % n2;

    cout << "Soma = " << soma << endl;
    cout << "Subtracao = " << sub << endl;
    cout << "Multiplicacao = " << multi << endl;
    cout << "Divisao = " << div << endl;
    cout << "Resto = " << resto << endl;

    return 0;
}