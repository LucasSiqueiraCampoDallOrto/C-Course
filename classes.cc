#include <iostream>
#include <string>

using namespace std;

/*

Classe = "fábrica" de objetos

- atributos = dados/variáveis
- métodos = funções

- membros private = acessíveis apenas dentro da própria classe
- membros public  = acessíveis em qualquer lugar do código

*/

class propaganda { // declarando a classe "propaganda"
    
    public: // criandos membros públicos

    string nome;

    void inscrever() { // método 1 
        cout << "Se increva no canal" << endl;
    }
    void curta() { // método 2
        cout << "Curta o conteudo" << endl;
    }

    void escreveNome() {
        cout << nome;
    }
};

int main() {

    propaganda canal;  // criando o objeto "canal" a partir da classe "propaganda"
    canal.inscrever(); // estamos chamando a função inscrever para o objeto "canal"
    canal.curta();     // estamos chamando a função curta para o objeto "canal"
    canal.nome = "Rodrigo"; // atribuindo nome 
    canal.escreveNome(); // estamos chamando a função escreveNome para o objeto "canal"

    return 0;
}