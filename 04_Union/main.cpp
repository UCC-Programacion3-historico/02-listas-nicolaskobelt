#include <iostream>
#include "../Lista/Lista.h"

using namespace std;
template <class T>

T concat(Lista<T> li, Lista<T> lis){

    Lista<T> listaNueva;

    int tam = li.getTamanio();
    int pos = 0;

    while (pos != tam){

        T dato = li.getDato(pos);

        if (pos == 0)
            listaNueva.insertarPrimero(dato);
        else
            listaNueva.insertar(pos, dato);

        pos++;

    }

    tam = lis.getTamanio();
    pos=0;

    while (pos != tam){

        T dato = lis.getDato(pos);

            listaNueva.insertar(pos, dato);

        pos++;

    }

    return listaNueva;

}

template <class T>
int main() {

    int n;
    Lista<T> listax, listaz;

    cout<<"Ingrese cantidad de valores para ambas listaas"<<endl;
    cin>>n;

    //carga de datos lista uno
    int pos = 0;
    cout<<"Lista 1: "<<endl;
    while (pos != n){
        int valor;

        cout<<"Ingrese valores: ["<<pos<<"]"<<endl;
        cin>>valor;
        if(pos == 0)
            listax.insertarPrimero(valor);
        else
            listax.insertar(pos,valor);

        pos++;
    }

    //carga de datos lista 2
    pos = 0;
    cout<<"Lista 2: "<<endl;
    while (pos != n){
        int valor;

        cout<<"Ingrese valores: ["<<pos<<"]"<<endl;
        cin>>valor;
        if(pos == 0)
            listax.insertarPrimero(valor);
        else
            listax.insertar(pos,valor);

        pos++;
    }

    concat(listax,listaz);


}
