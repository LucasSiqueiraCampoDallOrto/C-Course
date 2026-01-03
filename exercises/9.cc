#include <iostream>

using namespace std;

// Ler números inteiros enquanto forem positivos e contar quantos números foram digitados (use while).

int main() {
    int qntd = 0, k = 1;
    while(k > 0) {
        cout << "Digite um numero positivo (negativo para parar): "; 
        cin >> k;
        if(k > 0) qntd ++;
    }
    cout << "Numeros positivos digitados = " << qntd << endl;
    return 0;
}