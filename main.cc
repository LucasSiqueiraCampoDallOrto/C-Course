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

Operadores Relacionais: 
1. "=="
2. "!="
3. ">"
4. "<"
5. ">="
6. "<="

Operadores Lógicos:
1. && - and
2. || - or
3. !  - not

Operadores de Atribuição
1. += | x = x + 10 -> x += 10
2. -= | x = x - 10 -> x -= 10
3. *= | x = x * 10 -> x *= 10
4. /= | x = x / 10 -> x /= 10

*/

/*

Iteração: repetição de instruções usando estruturas como for, while ou do while.
Recursão: técnica em que uma função chama a si mesma para resolver um problema.

*/

/*

Estrutura de repetição FOR - usamos quando sabemos a quantidade exata que queremos executar

sintaxe: for(variável; condição; incremento/decremento)

exemplo: 

    for(int i = 0; i <= 10; i++) {
        cout << i;
    }

*/

/*

Estrutura de repetição WHILE - usamos quando não sabemos a quantidade exata que queremos executar

sintaxe: while(condição) {
            código;
        }

exemplo: 

        int i = 0;
        while(i < 10) {
            cout << i;
            i++;
        }


Estrutura de repetição DO-WHILE - usamos quando não sabemos a quantidade exata que queremos executar
                                - o bloco de código será executado no mínimo uma vez

sintaxe: do {
            código;
        }
        while(condição);

exemplo: 
        // Nesse caso vai executar de 1 até 10 e parar
        int i = 0;
        do {
            i++;
            cout << "O valor da variavel i eh: " << i << endl;
        }
        while(i < 10);

        // Nesse caso vai executar apenas o i = 1 e interromper, pois a condição não é válida
        int i = 0;
        do {
            i++;
            cout << "O valor da variavel i eh: " << i << endl;
        }
        while(i > 10);

*/

/*

Estrutura SWITCH - usamos para verificar várias condições ao mesmo tempo, sem o uso execessivo de "if"

sintaxe: 

        switch(variável) {
            case 1: 
                código;
                break;
            case 2: 
                código;
                break;
            case 3: 
                código;
                break;
            .
            .
            .
            default: 
                código;
        }

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

    // Usando if-else
    if(n1 > n2) {
        cout << "A variavel n1 eh maior que n2" << endl;
        n1 = n2; // igualar as duas variáveis
    }
    else if (n1 < n2) {
        cout << "A variavel n2 eh maior que n2" << endl;
        n2 = n1;
    }
    else if (n1 == n2) {
        cout << "A variavel n1 e n2 sao iguais" << endl;
    }

    // Usando operadores lógicos
    cout << "Digite um numero no intervalo de 45 a 72: " << endl;
    int i;
    cin >> i;
    if(i >= 45 && i <= 72) {
        cout << "O numero digitado esta no intervalo correto";
        if(i == 45 || i == 72) {
            cout << "O numero digitado eh um extremo";
        }
    }
    else {
        cout << "O numero digitado nao esta no intervalo correto";
    }

    // Usando FOR

    for(int k = 0; k <= 10; k++) {
        if(k%2==0) {
            cout << k << " eh PAR";
        }
        else {
            cout << k << " eh IMPAR";
        }
    }

    // Usando WHILE 

    int l = 10;
    while(l >= 10) {
        cout << l << endl;
        l--;
    }

    //Usando do-while

    // Nesse caso vai executar de 1 até 10 e parar
    int w = 0;
    do {
        w++;
        cout << "O valor da variavel i eh: " << w << endl;
    }
    while(w < 10);

    // Nesse caso vai executar apenas o i = 1 e interromper, pois a condição não é válida
    int w = 0;
    do {
        w++;
        cout << "O valor da variavel i eh: " << w << endl;
    }
    while(w > 10);


    // Usando estrutura SWITCH

    int mes = 0;
    cin >> mes;
    switch(mes) {
        case 1:
            cout << "JANEIRO" << endl;
            break;
        case 2: 
            cout << "FEVEREIRO" << endl;
            break;
        case 3:
            cout << "MARÇO" << endl;
            break;
        case 4:
            cout << "ABRIL" << endl;
            break;
        case 5: 
            cout << "MAIO" << endl;
            break;
        case 6:
            cout << "JUNHO" << endl;
            break;
         case 7:
            cout << "JULHO" << endl;
            break;
        case 8: 
            cout << "AGOSTO" << endl;
            break;
        case 9:
            cout << "SETEMBRO" << endl;
            break;
        case 10:
            cout << "OUTUBRO" << endl;
            break;
        case 11: 
            cout << "NOVEMBRO" << endl;
            break;
        case 12:
            cout << "DEZEMBRO" << endl;
            break;
        default: 
            cout << "O valor digitado nao corresponde a um mes do ano";
    }


    return 0;

    
}