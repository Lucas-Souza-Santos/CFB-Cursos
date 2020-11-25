#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da Fila... " << cartas.size()  << endl;
    cout << "Prieira Carta..... " << cartas.front() << endl;
    cout << "Ultima Carta...... " << cartas.back()  << endl;

    /*while(!cartas.empty()){
        cout << "Primeira Cartas: " << cartas.front() << "\n";
        cartas.pop();
    }*/

    return 0;
}
