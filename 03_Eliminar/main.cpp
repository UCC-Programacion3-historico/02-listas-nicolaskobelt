#include <iostream>
#include "../Lista/Lista.h"
using namespace std;


template<class T>

int main() {
    Lista<T> li;

    int n, m, dato, borrar;

    cout<<"Ingrese cantidad de datos: "<<endl;
    cin>>n;

    //ingresar los datos
    int pos = 0;
    while (pos != n){

        cout<<"Ingrese valor ["<<pos<<"]"<<endl;
        cin>>m;

        if(pos==0)
            li.insertarPrimero(m);
        else
            li.insertar(pos,m);

        pos++;
    }

    //mostrar los datos ingresados
    pos = 0;
    while (pos != n ){
        dato = li.getDato(pos);
        pos++;
        cout<<"Posicion ["<<pos<<"] Dato: "<<dato<<endl;
    }


    cout<<"Ingrese posicion de dato a borrar: ";
    cin>>borrar;
    cout<<endl;
    li.remover(borrar);

    //muestro nuevamente toda la lista
    pos = 0;
    while (pos != n ){
        dato = li.getDato(pos);
        pos++;
        cout<<"Posicion ["<<pos<<"] Dato: "<<dato<<endl;
    }

}
