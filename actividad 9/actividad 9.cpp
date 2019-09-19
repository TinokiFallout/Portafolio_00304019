#include <iostream>
#include <stack>
using namespace std;

float mediana(int *puntero, int tamano){
	float suma=0;
	for(int i=0; i<tamano;i++)
	suma +=*(puntero+i);
	return suma/tamano;
}
int main(){
	stack<string> s;
	float sum = 0;
	int numeros[6];
	s.push("[0]=6");
 	s.push("[1]=5");
 	s.push("[2]=4");
 	s.push("[3]=3");
 	s.push("[4]=2");
 	s.push("[5]=1");
 	

	cout<<"El tamaño de la pila es: "<<s.size()<<endl;
	cout<<"Elementos superiores: "<<s.top()<<endl;
	
	s.pop();
	s.pop();
	
	cout<<"El tamaño de la pila es: "<<s.size()<<endl;
	cout<<"Elementos superiores: "<<s.top()<<endl;
	
	s.pop();
	
	cout<<"El tamaño de la pila es: "<<s.size()<<endl;
	cout<<"Elementos superiores: "<<s.top()<<endl;
	
	if(s.empty())
	cout<<"La pila esta vacia\n";
	else
	cout<<"La pila no esta vacia\n";
	
	return 0;
}
