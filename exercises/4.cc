#include <iostream>

using namespace std; 

// Leia 5 números, armazene em um vetor e calcule a média.

int main() {
    int vetor[5];
    float soma = 0;
    for(int i = 0; i < 5; i++) {
        cout << "Digite um numero: ";
        cin >> vetor[i];
        soma += vetor[i];
    }
    float media = soma / 5;
    cout << "MEDIA = " << media << endl;

    return 0;
}