#include <iostream>

using namespace std;

// Ler dois números reais e um código da operação (1 soma, 2 subtração, 3 multiplicação, 4 divisão) e mostrar o resultado usando switch.

int main() {

    int n1, n2;
    cout << "N1: ";
    cin >> n1;
    cout << "N2: ";
    cin >> n2;

    int codigo;
    cout << "Operacao (1 = soma, 2 = subtracao, 3 = multiplicacao, 4 = divisao): ";
    cin >> codigo;

    switch(codigo) {
        case 1:
            cout << "SOMA = " << n1 + n2 << endl;
            break;
        case 2:
            cout << "SUBTRACAO = " << n1 - n2 << endl;
            break;
        case 3:
            cout << "MULTIPLICACAO = " << n1 * n2 << endl;
            break;
        case 4:
            cout << "DIVISAO = " << n1 / n2 << endl;
            break;
        default: 
            cout << "Operacao digitada invalida";
    }

    return 0;
}