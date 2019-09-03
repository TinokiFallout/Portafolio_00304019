#include <iostream>

using namespace std;

bool bBinaria(int a[], int base, int tope, int e){
    int aux;
    aux = (base+tope)/2;

    if(a[aux]!=e && (base==tope)) return false;
    if(a[aux]==e) return true;
    if(a[aux]<e) return bBinaria(a, aux+1, tope, e);
    if(a[aux]>e) return bBinaria(a, base, aux-1, e);
}

int main(){
    int n=8, e;
    cout<<"Ingrese un entero positivo";
    cin>>e;
    int a[]{1, 3, 4, 5, 17, 18, 31, 33};
 

    if(bBinaria(a, 0, n-1, e)) cout << "El elemento se encuentra en el arreglo"<<endl;
    else cout << "No se encontro el elemento" <<endl;

    return 0;
}