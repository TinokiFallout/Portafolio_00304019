#include <iostream>
using namespace std;

//------ Creacion de nodo y de arbol ------
struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}

//------ Agregar nodos a un arbol ------
void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a){
    //solicitar informacion (numero a agregar)
    int numero = 0;
    cout << "Numero a agregar: ";
    cin >> numero;
    
    Arbol p = a;
    
    //desplazarse hasta el lugar adecuado
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return;
        }
        else if(numero < p->info){//ir a la izquierda
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{//ir a la derecha
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    
    //agregar el nuevo nodo
    if(numero < p->info)
        asignarIzq(p, numero);
    else
        asignarDer(p, numero);
}

//------ Recorrer un arbol (in, pre y post orden) ------
void preorden(Arbol a){
    if(a != NULL){
        cout << " " << a->info;
        preorden(a->izq);
        preorden(a->der);
    }
}
void inorden(Arbol a){
    if(a != NULL){
        inorden(a->izq);
        cout << " " << a->info;
        inorden(a->der);
    }
}
void postorden(Arbol a){
    if(a != NULL){
        postorden(a->izq);
        postorden(a->der);
        cout << " " << a->info;
    }
}


void recorrerArbol(Arbol a){
    cout << "Recorrido PRE orden:"; preorden(a); cout << endl;
    cout << "Recorrido IN orden:"; inorden(a); cout << endl;
    cout << "Recorrido POST orden:"; postorden(a); cout << endl;
}

int cantidadPares(arbol a)
{
  if (p->info==NULL);
    return 0;
  int temp = cantidadPares(T->izq) + cantidadPares(T->der);
  if (T->dato % 2 == 0)
    return temp + 1;
  else
    return temp;
}

int cantidadImpares(arbol a)
{
  if (p->info==NULL)
    return 0;
  int temp = cantidadImpares(T->izq) + cantidadImpares(T->der);
  if (T->dato % 2 != 0)
    return temp + 1;
  else
    return temp;
}

int sumaPares(arbol a)
{
  if (p->info==NULL)
    return 0;
  int temp = sumaPares(T->izq) + sumaPares(T->der);
  if (T->dato % 2 == 0)
    return temp + T->dato;
  else
    return temp;
}

int sumaImpares(arbol a)
{
  if (p->info==NULL)
    return 0;
  int temp = sumaImpares(T->izq) + sumaImpares(T->der);
  if (T->dato % 2 != 0)
    return temp + T->dato;
  else
    return temp;
}

int cantidadNegativos(arbol a)
{
  if (p->info==NULL)
    return 0;
  int temp = cantidadNegativos(T->izq) + cantidadNegativos(T->der);
  if (T->dato < 0)
    return temp + 1;
  else
    return temp;
}

int cantidadPositivos(arbol a)
{
  if (p->info==NULL)
    return 0;
  int temp = cantidadPositivos(T->izq) + cantidadPositivos(T->der);
  if (T->dato > 0)
    return temp + 1;
  else
    return temp;
}

int cantidadCeros(arbo a)
{
  if (p->info==NULL)
    return 0;
  int temp = cantidadZeros(T->izq) + cantidadZeros(T->der);
  if (T->dato == 0)
    return temp + 1;
  else
    return temp;


int main(){
    int variable = 0;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin >> variable;
    
    Arbol arbol = crearArbol(variable);
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar\n\t2) Recorrer"
            << "\n\t3) Salir\n\t4) cantidad de nodos pares e impares"
			<< "\n\t5) suma de nodos pares e impares"
			<< "\n\t6) Cantidad de nodos negativos, ceros y positivos\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: agregarNodo(arbol);
            break;
            case 2: recorrerArbol(arbol);
            break;
            case 3: cantidadPares(arbol); cantidadImpares(arbol);
            break;
            case 4: sumaPares(arbol); sumaImpares(arbol); 
            break;
            case 5: cantidadNegativos(arbol); cantidadCeros(arbol); cantidadPositivos(arbol);
            break;
            case 6: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
    
    return 0;
}
