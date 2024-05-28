#include <iostream>
using namespace std;

int main() {
    int f, c, numero;
    int acum = 0;
    cout<< "Escriba el número de filas:  " << endl;
    cin>> f;
    cout<< "Escriba el número de columnas:    " <<endl;
    cin>> c;
    char matriz[f][c];
    for (int i=0; i<f; i++) {
        for (int j=0; j<c; j++) {
            cout<<"Digite dato para la fila " << i << " columna " << j <<endl;
            cin>>numero;
            matriz[i][j] = numero;
            acum = acum + numero;
        }
    }
    
    for (int i=0; i<f; i++) {
        for (int j=0; j<c; j++) {
            cout<< matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout<< "Todos los elementos de la matriz suman un total de:  " << acum <<endl;
}
