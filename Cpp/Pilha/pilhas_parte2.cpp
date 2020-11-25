#include <iostream>
#include <stack>

using namespace std;

int main(){
    // finalizar o assunto de pilhas

    stack <string> cartas;

    if(cartas.empty()){
        cout << "Pilha Vazia\n\n";
    }else{
        cout << "Pilha com Cartas";
    }

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    return 0;
}
