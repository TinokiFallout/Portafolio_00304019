#include <iostream>
#include <cstdlib>
using namespace std;

void mostrar(int arreglo[],int n);
void cortar(int *arre,int n);
void mezcla(int *izq,int nIzq,int *der,int nDer,int *arreglo);

int main()
{ int n = 8;
 int a[n] = {7, 2, 1, 4, 8, 13, 11, 18};

 cout<<"  Inicio  "<<endl;
 mostrar(a,n);
 cortar(a,n);
 cout<<" Fin  "<<endl;
 mostrar(a,n);
 return 0;
}

void mostrar(int x[],int n)
{
 for(int i=0;i<n;i++)
  cout<<x[i]<<" ";
 cout<<endl;
}

void cortar(int *arre,int n)
{int mitad = n / 2;
 int *izq = new int[mitad];
 int *der = new int[n-mitad];
 
 if(n==1)
 {return;}
 
 for(int i=0;i<mitad;i++)
  izq[i] = arre[i];
  
 for(int i=mitad;i<n;i++)
  der[i-mitad] = arre[i];
  
 cortar(izq, mitad);
cortar(der, n-mitad);
 
 mezcla(izq, mitad, der, n-mitad, arre);
}

void mezcla(int *izq,int nIzq,int *der,int nDer,int *arreglo)
{
 int i=0,j=0,k=0;
 while( ( i < nIzq ) && ( j < nDer ) )
 {
  if( izq[i] <= der[j])
  {
   arreglo[k] = izq[i];
   i++;
  }
  else
  {
   arreglo[k] = der[j];
   j++;
  }
  k++;
 }
 while(i < nIzq)
 {
  arreglo[k] = izq[i]; i++; k++;
 }
 while(j < nDer)
 {
  arreglo[k] = der[j];
  j++; k++;
 }
 
}
