#include <iostream>
#include <cstring>
#include <math.h>
#include <cstdlib>
#include <time.h> 
#include "LibMatriz.h"

using namespace std;

int main(void){
	int matriz[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int cantidad = 0;
	cout<<"Digite el numero de veces que desea cifrar el vector: "<<endl; cin>>cantidad;
	MatrizAleatoria(matriz);
	cout<<"El primer arreglo de numeros es: ";
	ValoresMatriz(matriz);
	cout<<endl;
	cipherData(matriz, cantidad);
	cout<<"El Cifrado es: ";
	ValoresMatriz(matriz);	
}
