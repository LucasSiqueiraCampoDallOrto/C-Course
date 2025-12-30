#include <iostream>

using namespace std; 

// Leia um número inteiro e diga se ele é par ou ímpar.

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if(num%2==0) {
        cout << "PAR" << endl;
    }
    else {
        cout << "IMPAR" << endl;
    }

    return 0;
}