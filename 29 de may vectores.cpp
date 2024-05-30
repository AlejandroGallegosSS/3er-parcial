#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros;
    const int num_max=20;
    int num , suma=0;
    std::cout << "Introduca numeros enteros" <<std::endl;
    std::cout<<"/////////////////////////////////////////////"<<std::endl;
    std::cout << "introduca un 0 para terminar la ejecucion o digite 20 numeros " << std::endl;
    for(int i = 0; i < num_max; ++i) {
    	std::cout<<"num"<< i+1<<":"<<std::endl;
        std::cin >> num;
        if(num == 0) {
            break;
        }
        numeros.push_back(num);
    }
     std ::cout<<"/////////////////////////////////////////////"<<std::endl;
    std::cout << "Los numeros en orden inverso son:\n";
    for(int i = numeros.size() - 1; i >= 0; --i) {
        std::cout << numeros[i] << " # \n";
    }
}

