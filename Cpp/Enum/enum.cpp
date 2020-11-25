#include <iostream>

using namespace std;

int main(){
    /*
    * Conteúdo: Enum - estrutura de enumeração
    *   é conjunto de constante inteiras que expecifica
    * valores que essa variável pode ter.
    */
    // Declaração
    enum armas{fuzil = 100, revolver = 8,
    rifle = 12, escopeta = 1};

    armas armaSel;
    armaSel = fuzil;

    cout << armaSel << endl;

    return 0;
}
