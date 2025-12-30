#include <iostream>

using namespace std; 

// Leia 3 números e imprima o maior deles.

int main() {
    int n1, n2, n3;

    cout << "Digite um numero: ";
    cin >> n1;
    cout << "Digite um numero: ";
    cin >> n2;
    cout << "Digite um numero: ";
    cin >> n3;

    if(n1 >= n2 && n1 >= n3) {
        cout << n1;
    }
    else if (n2 >= n1 && n2 >= n3) {
        cout << n2;
    }
    else {
        cout << n3;
    }
    
}