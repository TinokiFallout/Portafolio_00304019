#include<iostream>
using namespace std;
int main(){
    int m[2][3] = {{6,7,3},{4,9,1}};
    cout << "Posicion ocupando la formula dada en clases *(*m+i*COLS+j) que en nuestro caso es: (100+i*20+j)" << endl;
    cout << "a[0][0]=100" << endl;
    cout << "a[2][1]=142" << endl;
    cout << "a[5][1]=208" << endl;
    cout << "a[1][10]=112" << endl;
    cout << "a[2][10]=136" << endl;
    cout << "a[5][3]=278" << endl;
    cout << "a[9][19]=289" << endl;
    cout<<"\nEl resultado de la fila y columna de [0][0] = *(*(matrix))"<<endl;
    if(m[0][0]==*(*(m))){
        cout<<"Si es valida"<<" "<<m[0][0]<<" "<<*(*(m))<<endl;
    }
        else {
        cout<<"No es valida"<<endl;
    }
    cout<<"\nEl resultado de la fila y columna de [ i ][ j ] = *((*(matrix)) + (i * COLS + j))"<<endl;
    if(m[1][2]==*((*(m)) + (1 * 3+ 2))){
        cout<<"Si es valida"<<" "<<m[1][2]<<" "<<*((*(m)) + (1 * 3+ 2))<<endl;
    }
        else {
        cout<<"No es valida"<<endl;
    }
      cout<<"\nEl resultado de la fila y columna de [ i ][ j ] = *(*(matrix + i) + j)"<<endl;
    if(m[1][2]==*(*(m + 1) + 2)){
        cout<<"Valido"<<" "<<m[1][2]<<" "<<*(*(m + 1) + 2) <<endl;
    }
        else {
        cout<<"Invalido"<<endl;
    }
      cout<<"\nEl resultado de la fila y columna de [ i ][ j ] = *(matrix[i] + j)"<<endl;
    if(m[1][2]==*(m[1] + 2)){
        cout<<"Valido"<<" "<<m[1][2]<<" "<<*(m[1] + 2)<<endl;
    }
        else {
        cout<<"Invalido"<<endl;
    }
      cout<<"\nEl resultado de la fila y columna de [ i ][ j ] = (*(matrix + i))[j]"<<endl;
    if(m[1][2]==(*(m + 1))[2]){
        cout<<"Valido"<<" "<<m[1][2]<<" "<<(*(m + 1))[2]<<endl;
    }
        else {
        cout<<"Invalido"<<endl;

    }
    return 0;
}
