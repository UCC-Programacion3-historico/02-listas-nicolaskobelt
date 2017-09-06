#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

template <class T>
int main() {
    int n,m;

    cout<<"programita para meter numeros"<<endl;

    cout<<"Indicar posicion del dato: 1=principio, 2=diome, 3=final: ";
    cin>>n; cout<<endl;

    cout<<"Dato a ingresar: ";
    cin>>m; cout<<endl;

    Lista<T> listita;

    switch (n){
        case 1:
            listita.insertarPrimero(m);
            break;
        case 2:
            listita.insertar(pos, m);
            break;
        case 3:
            listita.insertarUltimo(m);
            break;
        default:
            cout<<"Pos incorrecta"<<endl;
            break;

    }
    


    return 0;
}