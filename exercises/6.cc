#include <iostream>

using namespace std;

// Ler um número inteiro N e imprimir todos os números de 1 até N usando for.

int main() {

    int n;
    cout << "Digite um numero N: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << i << endl;
    }

    return 0;
}