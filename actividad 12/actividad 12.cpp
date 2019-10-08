#include <iostream>
#include <string>
using namespace std;

struct DOrden{
    int Revuelta;
    int FrijolConQueso;
    int ChicharronConQueso;
    int PolloConQueso;
    string MaizoArroz;
};
typedef struct DOrden Orden;

Orden solicitarOrden(){
    Orden p;
    cout << "Revuelta: "; cin >> p.Revuelta;
    cout << "Frijol con queso: ";   cin >> p.FrijolConQueso;
    cout << "Chicharron con queso: "; cin >> p.ChicharronConQueso;
    cout << "Pollo con queso: "; cin >> p.PolloConQueso;
    cout << "Masa de maiz o arroz: "; cin >> p.MaizoArroz;
    return p;
}
void mostrarOrden(Orden p){
    cout << "Revuelta: "<< p.Revuelta<<endl;
    cout << "Frijol con queso: "<< p.FrijolConQueso<<endl;
    cout << "Chicharron con queso: "<< p.ChicharronConQueso<<endl;
    cout << "Pollo con queso: "<< p.PolloConQueso<<endl;
    cout << "Masa de maiz o arroz: "<< p.MaizoArroz<<endl;
    cout << endl;
    
}

struct TNodo{
    Orden dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Orden p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void insertarFinal(Orden p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;
    
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void agregarOrden(){
    Orden p = solicitarOrden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);
                continuar = false;
            break;
            case 2: insertarFinal(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarOrden(s->dato);
        s = s->sig;
    }
}

int main(){
    cout << "Ordenando..." << endl;
    pInicio = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Orden\n\t2) Ver Orden"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarOrden();
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
