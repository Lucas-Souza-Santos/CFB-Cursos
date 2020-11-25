#include <iostream>

using namespace std;

int main(){

    int matriz[3][4]; // array multidinsional
    int i, j; // variable for loop for

    //Preenchendo a matriz
    for(i = 0; i < 3;i++){
        for(j = 0; j < 4; j++){
            cout << "linha " << i + 1 << " ";
            cout << "coluna " << j + 1 << endl;
            cin >> matriz[i][j];
        }
    }
    // Imprimindo a matriz
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "" << endl;
    }

    return 0;
}
