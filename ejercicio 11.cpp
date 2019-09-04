#include <iostream>

using namespace std;

int main(void) {
	float a[5], max=0;
	int x=0;
	cout<<"Ingrese 6 numeros enteros:\n"<<endl;
 
	for (int i = 1; i <= 5; i++){
		cout<<"valor "<<i<<": ";
		cin>>a[i];
 
        if(a[i] > max){
			max = a[i];
			x = i;
		}
	}
 
	cout<<"El mayor valor es: "<<max;

	return 0;
}
