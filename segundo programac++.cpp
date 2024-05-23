#include <iostream>
int main(){
	int pro,u,sub,tot,des,iva,pre;
	std::cin>> u;
	std::cout<< "numero de unidades:"<<u<<std::endl;
	std::cin>> pre;
	std::cout<< "presio:"<<pre<<std::endl;
	sub=u*pre;
	if(sub<1000){
		des=sub*0;
	}
	if(sub>1000){
		des=sub*0.1;
		std::cout<< "su descuento es de "<<des<<std::endl;
	}
	if(sub>2000){
		des=sub*0.2;
		std::cout<<"el descueto es de :"<<des<<std::endl;
	}
	if(sub>3000){
		des=sub*0.3;
		std::cout<<"su descuento es de "<<des<<std::endl;
	}
	iva=sub*0.16;
	tot=sub+iva-des;
	std::cout<<"el total es de :"<<tot<<std::endl;
}
