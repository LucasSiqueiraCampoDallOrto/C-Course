#include <iostream>

using namespace std;

// Ler um código de produto (1, 2 ou 3) e imprimir a categoria correspondente usando switch: 
// 1 → Alimento
// 2 → Eletrônico
// 3 → Vestuário
// Qualquer outro valor → Código inválido

int main() {
    int codigo;
    cout << "CODIGO: ";
    cin >> codigo;
    switch(codigo) {
        case 1:
            cout << "Categoria ALIMENTO" << endl;
            break;
        case 2: 
            cout << "Categoria ELETRONICO" << endl;
            break;
        case 3:
            cout << "Categoria VESTUARIO" << endl;
            break;
        default: 
            cout << "Codigo INVALIDO";
    }

    return 0;
}