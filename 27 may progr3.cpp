#include <iostream>
int main () {
	int n;
	int numero;
	std::cout<< "digite el tamaño del arreglo "<<std::endl;
	std::cin>>n;
	int num[n];
	for (int i=1; n; i++ ){
    std::cout<< " digite un numero para la posicion "<< i << std::endl;
    std::cin>> numero;
    num[i]<- numero;
	}
	for (int i=0;n-1;i++){
		std::cout<<"el dato en la posision "<<i<<"es"<< num[i];
		
	}
	
}
