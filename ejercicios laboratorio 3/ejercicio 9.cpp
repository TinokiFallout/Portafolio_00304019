#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct PMenu{
    int carnet;
    string nombre;
    string apellido;
    int edad;
    int telefono;
    string correo;
}; typedef struct PMenu Menu;

Menu solicitarMenu() {
    Menu x;
    cout<<"Numero de carnet: "; cin>>x.carnet;
    cout<<"Primer nombre: "; cin>>x.nombre;
    cout<<"Primer apellido: "; cin>>x.apellido;
    cout<<"Edad: "; cin>>x.edad;
    cout<<"Numero telefonico: "; cin>>x.telefono;
    cout<<"Correo electronico: "; cin>>x.correo;
    return x;
}

void MostrarMenu(Menu x) {
    cout<<"Numero de carnet: "<<x.carnet<<endl;
    cout<<"Primer nombre: "<<x.nombre<<endl;
    cout<<"Primer apellido: "<<x.apellido<<endl;
    cout<<"Edad: "<<x.edad<<endl;
    cout<<"Numero telefonico: "<<x.telefono<<endl;
    cout<<"Correo electronico: "<<x.correo<<endl;
    cout<<endl;
}

struct MNodo {
    Menu dato;
    struct MNodo *sig;
}; 
typedef MNodo Nodo;
Nodo *xInicio;

void insertarInicio(Menu x) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = x;
    nuevo->sig = xInicio;
    
    xInicio = nuevo;
}


void insertarFinal(Menu x) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = x;
    nuevo->sig = NULL;
    
    if (xInicio == NULL) {
        xInicio = nuevo;
    } else {
        Nodo *p = xInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void agregarMenu(){
    Menu x = solicitarMenu();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(x);
                continuar = false;
            break;
            case 2: insertarFinal(x);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}


void mostrarLista() {
    Nodo *s = xInicio;

    while (s != NULL) {
        MostrarMenu(s->dato);
        s = s->sig;
    }
}

int main(){
    cout << "Inicializando..." << endl;
    xInicio = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Menu\n\t2) Ver Menu"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarMenu();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}

