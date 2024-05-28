#include <iostream>
#include <stdlib.h>
int main () {
	int arreglo1[2],arreglo2[3];
	arreglo1[1]="fernando";
	arreglo1[2]="oscar";
	
	arreglo2[1]=74;
	arreglo2[2]=56;
	arreglo2[3]=10;
	std::cout<< "arreglo1"<<std::endl;
	for (int i=1; 2; i++ ){
    std::cout<< " el dato en la posicion "<< i << "es"<<arreglo1[i]<< std::endl;
	}
    std::cout<< "arreglo2"<<std::endl;
	for (int i=1;3;i++){
		std::cout<<"el dato en la posision "<<i<<"es"<< arreglo2[i]<<std::endl;
	}
	
}
