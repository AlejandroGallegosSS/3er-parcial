#include <iostream>
int main () {
	int n;
	int nombre;
	std::cout<< "digite el numero de posiciones"<<std::endl;
	std::cin>>n;
	int personas[n];
	for (int i=0; n-1; i++ ){
    std::cout<< " digite un nombre para la posicion "<< i << std::endl;
    std::cin>> nombre;
    personas[i]<- nombre;
	}
	for (int i=0;n-1;i++){
		std::cout<<"el dato en la posision "<<i<<"es"<< personas[i];
		
	}
	
}
