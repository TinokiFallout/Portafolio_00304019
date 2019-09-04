#include<iostream>
#include<math.h>

using namespace std;

int sumatoria(int x, int n)
{
    if (n == 0) 
        return 1;
    else 
	if (n == 1)
        return x;
    else 
        return pow(x, n) + sumatoria(x, n - 1); //"pow" funcion de math que calcula elevada a la potencia
}

int main(void)
{
    int x, n;
    cout<<"Ingrese x:";
    cin>>x;
    cout<<"Ingrese n:";
    cin>>n;
    cout<<endl;
    cout<<"el total de la sumatoria es: "<<sumatoria(x, n)<<endl;
}
