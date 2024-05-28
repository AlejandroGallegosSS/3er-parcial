#include <iostream>
using namespace std;
int main ()
{
	int f,c,numero;
	cout<<"Digite el numero de filas"<<endl;
	cin>>f;
	cout<<"Digite el numero de columnas"<<endl;
	cin>>c;
	int matriz[f][c];
	
	for(int i=1;i<f;i++)
	{
		for(int j=1 ; j<c ;j++){
		cout<<"Digite dato para la fila"<<i<<" columna "<<j<<endl;
		cin>>numero;
		matriz [i][j]=numero;
	}
	}
		for(int i=1;i<f;i++)
	{
		for(int j=1 ; j<c ;j++){
		cout<<"Los datos que hay en la matriz son: "<<matriz[i][j]<<endl;
		matriz [i][j]=numero;
	}
	}
}
