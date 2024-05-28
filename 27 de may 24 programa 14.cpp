#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int matriz[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < 3; i++) {
        cout << matriz[i][0] << " " << matriz[i][1] << " " << matriz[i][2] << endl;
    }
    return 0;
}
