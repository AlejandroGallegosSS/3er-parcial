#include <iostream>

int main() {
    int acum = 0;
    int acum2 = 0;
    int f;
    std::cout << "Digite el numero de filas: ";
    std::cin >> f;
    int c;
    std::cout << "Digite el numero de columnas: ";
    std::cin >> c;
    int A[f][c],B[f][c],C[f][c];
    std::cout<<"Matriz A:  \n";
    for (int i = 1; i < f; ++i) {
    	for (int j = 1 ; j < c ; ++j){
        std::cout << "Digite dato para la fila " << i << " columna" << j <<std::endl;
        std::cin >>  A[i][j];
	acum +=  A[i][j];
    	}
    }
	std::cout << "La suma de todos los elementos de la columna es: " << acum << std::endl;
	std::cout<< "\n ";

    std::cout<<"Matriz B:  \n";
    for (int i = 1; i < f; ++i) {
    	for (int j = 1 ; j < c ; ++j){
        std::cout << "Digite dato para la fila " << i << " columna" << j <<std::endl;
        std::cin >>  B[i][j];
	acum2 +=  B[i][j];
    	}
    }
	std::cout << "La suma de todos los elementos de la columna es: " << acum2 << std::endl;
	std::cout<< "\n ";

    std::cout << "Los datos que hay en la matriz A son:" << std::endl; 
    for (int i = 1; i < f; ++i) {
    	for (int j = 1 ; j < c ; ++j){
            std::cout << A[i][j] << " ";
    	}
	 std::cout << std::endl;
    }

    std::cout << "Los datos que hay en la matriz B son:" << std::endl; 
    for (int i = 1; i < f; ++i) {
    	for (int j = 1 ; j < c ; ++j){
            std::cout << B[i][j] << " ";
    	}
	 std::cout << std::endl;
    }
        std::cout << "La suma de las matrices es: \n" << std::endl;
	for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    std::cout<<"\n";
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            std::cout<<" ["<<i<<"]["<<j<<"] = "<<C[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
	
}
