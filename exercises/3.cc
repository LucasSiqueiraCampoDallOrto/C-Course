#include <iostream>

using namespace std; 

// Leia um número N e imprima a tabuada de 1 a 10 desse número.

int main() {
    int n;
    cout << "Digite um numero N para saber sua tabuada: ";
    cin >> n;
    for(int i = 0; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}