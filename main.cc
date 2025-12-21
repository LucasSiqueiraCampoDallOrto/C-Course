#include <iostream>

using namespace std; 
/* 

instead of using std:: cout << "Message"; we can make it easier by using "using namespace std",
and now we can use cout << "Message"; directly */ 

/*

usamos cout para saída  ----- cout << "Message";  -> exibir dados
usamos cin para entrada ----- cin >> x;           -> ler dados

*/

// endl -> quebra linha

int main() {
    cout << "Hello, Word"; 

    int x;
    cout << "Digite um valor para x: " << endl;
    cin >> x;
    cout << "Valor digitado para x: " << x << endl;

    return 0;
}