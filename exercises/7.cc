#include <iostream>

using namespace std;

// Ler vários números inteiros até que o usuário digite 0. Ao final, mostrar a soma dos números lidos (use while).

int main() {
    int i = 1, soma = 0;
    while(i!=0) {
        cout << "Digite um numero inteiro (0 para parar): ";
        cin >> i;
        soma += i;
    }
    cout << "Soma dos numeros = " << soma << endl;

    return 0;
}