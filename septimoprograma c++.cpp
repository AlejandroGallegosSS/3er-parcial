#include <iostream>
int main()
{
	int a,b,c;
	int codigo,farenheit,coord_x,coord_y;
	codigo=3467;
	farenheit=123.456;
	coord_x=525;
	coord_y=725;
	a=b=c=45;
	a=(b=(c=45));
	std::cout<<"Valor de la variable codigo: "<<codigo<<std::endl;
	std::cout<<"Valor de la variable farenheit: "<<farenheit<<std::endl;
	std::cout<<"Valor de la variable coord_x: "<<coord_x<<std::endl;
	std::cout<<"Valor de la variable coord_y: "<<coord_y<<std::endl;
	std::cout<<"Valor de la variable a: "<<a<<std::endl;
	std::cout<<"Valor de la variable b: "<<b<<std::endl;
	std::cout<<"Valor de la variable c: "<<c<<std::endl;
}
