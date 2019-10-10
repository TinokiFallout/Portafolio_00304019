#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

struct FPolinomio{
	float coeficiente_a;
    int exponente_a;
    float coeficiente_x;
    int exponente_x;
   
};
typedef struct FPolinomio Polinomio;
vector<Polinomio> lista; 

Polinomio solicitarPolinomio(){
    Polinomio y;
    cout << "Coeficiente de a: "; cin >> y.coeficiente_a;
    cout << "exponente de a: "; cin >> y.exponente_a;
    cout << "Coeficiente de x : "; cin >> y.coeficiente_x;
    cout << "exponente de x: "; cin >> y.exponente_x;
    return y;
}

float funcion(){
    Polinomio y;
    float n=0;
    float resultado=0;
    cout<<"Ingrese un valor para el coeficiente x: "<<endl;
    cin>>n;
    for (int i=0; i<lista.size(); i++) {
    resultado+=y.coeficiente_a*pow(n,y.exponente_a);
    resultado+=y.coeficiente_x*pow(n,y.exponente_x);
    }
    return resultado;
}

void agregarPolinomio(){
    Polinomio y = solicitarPolimonio();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), y);
                continuar = false;
            break;
            case 2: lista.push_back(y);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

int main(){
    cout << "Inicializando..." << endl;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar datos \n\t2) Ver resultado"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarPolinomio();
            break;
            case 2: cout << "Calculando" << endl;
                cout<<"Resultado: "<< funcion()<<endl;;
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
