#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H


class {
private:
    nodix<T> *inicio;
public:
    void fnInvierte(Lista<T> *lis);

};

void fnInvierte (Lista<T> *lis){
    nodo<T> *aux = incio;
    int *anterior, *siguiente;

    unsigned int pos=0;

    while (siguente != NULL) {

        if (pos == 0) {
            siguiente = aux->getNext();
            aux = aux->setNext(NULL);
        } else {
            anterior = aux;
            aux = aux->getnext();
            siguiente = aux;

            aux->setNext(anterior);

            }

        pos ++;

    }
}


#endif //FNINVIERTE_H
