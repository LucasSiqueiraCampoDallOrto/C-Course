#include <iostream>

using namespace std;

// Ler um número inteiro de 1 a 7 e imprimir o dia da semana correspondente usando switch.

int main() {
    int dia;
    cout << "Insira um dia (1 a 7): ";
    cin >> dia;
    switch(dia) {
        case 1:
            cout << "Domingo" << endl;
            break;
        case 2:
            cout << "Segunda" << endl;
            break;
        case 3: 
            cout << "Terça" << endl;
            break;
        case 4:
            cout << "Quarta" << endl;
            break;
        case 5:
            cout << "Quinta" << endl;
            break;
        case 6: 
            cout << "Sexta" << endl;
            break;
        case 7: 
            cout << "Sabado" << endl;
            break;
        default: 
            cout << "Voce nao digitou um numero valido" << endl;
    }

    return 0;
}