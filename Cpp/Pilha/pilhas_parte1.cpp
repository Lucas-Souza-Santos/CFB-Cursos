#include <iostream>
#include <stack> // � necess�rio incluir essa biblioteca para trabalhar com as pilhas

using namespace std;

int main(){
    /*
     * Conte�do: Stack-Pilha
     *  Quando � adicionado um elemento na pilha, ele vai para
     * ultima posi��o, logo ele ser� o �ltimo a sair. J� o
     * �ltimo elemento que foi colocado, vai ficar no topo da
     * pilha, logo ele vai ser o primeiro a sair.
     */
    // Implementa��o da Pilha
    stack <string> cartas;

    cartas.push("Rei de Copas"); // primeiro a ser adicionado e ultimo a ser removido
    cartas.push("Rei de Espadas"); // segundo a ser adicionada e penultimo a ser removido
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da Pilha: " << cartas.size() << "\n";
    cout << cartas.top() << "\n";
    return 0;
}
