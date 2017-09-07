#include "../Lista/Lista.h"
#include "../Lista/nodo.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H


class {
private:
    nodo<T> *inicio;
public:
    void fnInvierte(Lista<T> *lis);

};

void fnInvierte (Lista<T> *lis){

    nodo<T> *aux = lis->getInicio();
    nodo<T> *anterior, *siguiente;

    unsigned pos=0;

    while (siguente != NULL) {

        if (pos == 0) {

            siguiente = aux->getNext(); //asigno el valor del siguiente nodo en "siguiente"
            aux = aux->setNext(NULL); // seteo que apunte a null el primer valor para ser el ultimo

        } else {

            anterior = aux; // guardo aux en anterior para poder obtener el siguiente y setear el siguiente
            aux = aux->getnext();

            aux->setNext(anterior);

            }

        pos ++;

    }
}


#endif //FNINVIERTE_H
