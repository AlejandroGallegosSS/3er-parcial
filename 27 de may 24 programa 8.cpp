#include <iostream>
using namespace std;
int main()
{
	int p,numero;
	int cont=0;
	cout<<"Digite el numero de posiciones (tamano)"<<endl;
	cin>>p;
	int num[p];
	for(int i=1; i<p ; i++)
	{
		cout<<"Digite un numero"<<endl;
		cin>>numero;
		num[i]=numero;
	}
		for(int i=1; i<p ; i++)
	{
		cout<<"Los numeros ingresados son: "<<num[1]<<endl;
		if(num[1]>0){
			cont=cont+1;
		}
	}
	cout<<"Hay "<<cont<<" numeros positivos"<<endl;
}
