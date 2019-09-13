#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
	float s = 0;
	int cantidadTerminos;
	
	cout<<"Favor ingresar la cantidad de terminos a generar: ";
	cin>>cantidadTerminos;
	
	for(int i = 1; i <= cantidadTerminos; i++){
		if(i % 2 == 0)
		s = s - (4 / ((i * 2)- 1));
		else
		s = s + (4 / ((i * 2) - 1));
	}
	cout<<"PI se acerca a: "<<s<<endl;
	getch();
}


