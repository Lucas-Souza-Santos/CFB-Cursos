#include <iostream>

using namespace std;

int main(){
        /**Declara��o de vetor*/
        int vetor[10], i;

        /*Preenchendo o Vetor*/
        cout << "Declare os valores das posicoes do vetor: \n" << endl;
        for(i = 0; i < sizeof(vetor)/4;i++2){
            cin >> vetor[i];
        }
        /*Imprimindo o vetor*/
        cout << "\n" << endl;
        cout << "Imprimindo os valores de cada posicao do vetor" << endl;
        for(i = 0;i < 10; i++){
            cout << vetor[i] << endl;
        }

    return 0;
}
