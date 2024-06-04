#include <iostream>

int main (){


char nombre [100]; 
std::cout<< "Escriba su nombre ";
std::cin.getline(nombre, sizeof(nombre)); 
std::cout<< "hola " << nombre << std::endl;
}
