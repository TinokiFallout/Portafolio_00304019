#include <iostream>
using namespace std;

struct Tpila{
    int elements[7]={1,2,3,4,5,6,7};
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s->top = 6;
}

bool empty(Pila *s){
    return s->top < 0;
}
int push(Pila *s, int e){
    if(s->top < 6){
        (s->top)++;
        s->elements[s->top] = e;
        return e;
    }
    return e;
}
int pop(Pila *s){
    int algo;
    if(s->top >= 0){
        algo = s->elements[s->top];
        (s->top)--;
        return algo;
    }
    return algo;
}

int main() {
    int array[7];
    Pila unaPila;
    int ultimo=0;
    initialize(&unaPila);

    if(empty(&unaPila)){
        cout << "Esta vacia" << endl;
        return 0;
    }
    else
        cout << "No esta vacia" << endl;

  for(int i=0; i<7;i++){
      array[i]=pop(&unaPila);
  }
    cout<<"el ultimo es: "<<array[6]<<endl;

  if(empty(&unaPila))
        cout << "Esta vacia" << endl;

 for(int i=6; i>=0 ;i--){
     cout << array[i] << endl;
     ultimo = push(&unaPila, array[i]);
}

cout<<"el ultimo elemto del top es: "<<ultimo<<endl;

return 0;
}
