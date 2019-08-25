#include <iostream>
using namespace std;

float mediana(int *puntero, int tamano){
	float suma=0;
	for(int i=0; i<tamano;i++)
	suma +=*(puntero+i);
	return suma/tamano;
}

 int main(){
 	float sum;
	int numeros[6];
	numeros[0]=6;
 	numeros[1]=5;
 	numeros[2]=4;
 	numeros[3]=3;
 	numeros[4]=2;
 	numeros[5]=1;
 	
 	int i;
 	sum=0;
 	
 	for(i=0;i<6;i++)
 	{
 		sum+=numeros[i];
 	}
 	
 	cout<<"La mediana es: "<<sum/6<<endl;
 	
 	return 0;
 }
