#include <iostream>
using namespace std;

int main()  
{
	int t, num, acum;
	cout<< "Digite el tamaño del vector (Arreglo)" << endl;
	cin>> t;
	int vector [t]; 
	
		for (int i; i<-1; i++) {
		
			cout<< "Digite un numero: " << endl;
			cin>> num;
			vector [i] = num;
			acum<-acum+vector [i];
	
		}
	
		for (int i; i<-1; i++) {
			
			cout<< "La suma de: " << vector [i] << endl;
			return 0;
	
		}
	cout<< "Es: " << acum << endl;
}
