#include <iostream>

using namespace std;

int main(){
    /*
    * Conte�do: Enum - estrutura de enumera��o
    *   � conjunto de constante inteiras que expecifica
    * valores que essa vari�vel pode ter.
    */
    // Declara��o
    enum armas{fuzil = 100, revolver = 8,
    rifle = 12, escopeta = 1};

    armas armaSel;
    armaSel = fuzil;

    cout << armaSel << endl;

    return 0;
}
