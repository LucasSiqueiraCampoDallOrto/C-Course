#include <iostream>

using namespace std;

// Pedir ao usuário uma senha numérica. Enquanto a senha estiver incorreta, pedir novamente. Só encerrar quando a senha correta for digitada (use do-while).

int main() {
    int senhaOriginal;
    cout << "Insira uma senha: ";
    cin >> senhaOriginal;

    int senhaTentativa;
    do {
        cout << "Qual foi a senha digitada? Senha: ";
        cin >> senhaTentativa;
    }
    while(senhaTentativa!=senhaOriginal);
    cout << "PARABENS! Voce acertou a senha.";

    return 0;
}