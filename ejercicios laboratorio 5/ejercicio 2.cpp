#include <iostream>
using namespace std;

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

    int numero = 0;
    cout << "Numero a agregar: ";
    cin >> numero;
    
    Arbol p = a;
    
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return;
        }
        else if(numero < p->info){
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }

    if(numero < p->info)
        asignarIzq(p, numero);
    else
        asignarDer(p, numero);
}

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

void contar(Arbol a, int& par, int& impar,int& sumaPar,int& sumaImpar,int& contadorPositivo,int& contadorNegativo,int& contadorCero){
    if(a != NULL){
        if(a->info>=0){
        contadorPositivo++;
        }
        else{
            contadorNegativo++;
        }
        if(a->info==0){
        contadorCero++;
            
        }
        if(a->info%2==0){
            par++;
            sumaPar+=a->info;
        }
        else{
            impar++;
            sumaImpar+=a->info;
        }
        contar(a->izq,par,impar,sumaPar,sumaImpar,contadorPositivo,contadorNegativo,contadorCero);
        contar(a->der,par,impar,sumaPar,sumaImpar,contadorPositivo,contadorNegativo,contadorCero);
    }

    
}

int main(){
    int variable = 0, par=0,impar=0,sumaPar=0,sumaImpar=0,contadorPositivo=0,contadorNegativo=0,contadorCero=0;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin >> variable;
    
    Arbol arbol = crearArbol(variable);
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar\n\t2) Recorrer"
            << "\n\t3) Contar nodos pares e impares\n\t4) Suma de nodos pares\n\t5) Suma de nodos impares\n\t6) Cantidad de nodos negativos, ceros y positivos"
            <<"\n\t7) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: agregarNodo(arbol);
            break;
            case 2: recorrerArbol(arbol);
            break;
            case 3: par=0; impar=0;
            contar(arbol,par,impar,sumaPar,sumaImpar,contadorPositivo,contadorNegativo,contadorCero);
            cout<<"Cantidad de nodos pares: "<<par<<endl;
            cout<<"Cantidad de nodos impares: "<<impar<<endl;
            break;
            case 4: sumaPar=0;
                    contar(arbol,par,impar,sumaPar,sumaImpar,contadorPositivo,contadorNegativo,contadorCero); 
                    cout<<"La suma de nodos pares es: "<<sumaPar<<endl;
            break;
            case 5: sumaImpar=0;
                    contar(arbol,par,impar,sumaPar,sumaImpar,contadorPositivo,contadorNegativo,contadorCero);
                    cout<<"La suma de nodos impares es: "<<sumaImpar<<endl;
            break;
            case 6: contadorPositivo=0; contadorNegativo=0; contadorCero=0;
                    contar(arbol,par,impar,sumaPar,sumaImpar,contadorPositivo,contadorNegativo,contadorCero);
                    cout<<"Cantidad de nodos negativos: "<<contadorNegativo<<endl;
                    cout<<"Cantidad de nodos positivos: "<<contadorPositivo<<endl;
                    cout<<"Cantidad de ceros: "<<contadorCero<<endl;
            break;
            case 7: continuar = false;
            break;
            
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
    
    return 0;
}
