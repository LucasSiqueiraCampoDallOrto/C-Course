#include <iostream>

using namespace std;

// Ler um número inteiro positivo e calcular o fatorial dele usando for.

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    int fat = 1;
    for(int i = num; i > 0; i--) {
        fat = fat * i;
    }
    cout << "Fatorial: " << fat << endl;
    return 0;
}