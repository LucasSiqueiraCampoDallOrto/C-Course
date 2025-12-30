#include <iostream>

using namespace std;

// Leia um número e calcule o fatorial usando for

int main() {
    int n;
    cout << "Digite um numero para saber seu fatorial: ";
    cin >> n;
    int fat = 1;
    for(int i = n; i > 0; i--) {
        fat = fat * i;
    }
    cout << "FATORIAL = " << fat << endl; 
    
}