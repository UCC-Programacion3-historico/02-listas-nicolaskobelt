#ifndef CIRCLIST_H
#define CIRCLIST_H

#include <iostream>
#include "../Lista/nodo.h"



class CircList {
private:
    nodo<T> *puntero;
public:
    CircList();

    CircList(const CircList<T> &li);

    ~CircList();

    bool esVacia();

    int getTamanio();

    void insertar(T dato);

    void remover();

    void avanzar();

    T getDato();

    void reemplazar(T dato);

    void vaciar();

};

CircList::CircList() {
    puntero = NULL;
}
CircList::~CircList() {
    vaciar();
}

bool CircList::esVacia() {
    return puntero = NULL;
}

void CircList::insertar(T dato) {
    if (puntero==NULL){
        puntero = new nodo(dato);
        puntero->setNext(puntero);
        return;
    }

   nodo* tmp = new nodo(dato, puntero->getNext());
    puntero->setNext(tmp);
    puntero = puntero->getNext();
}

void CircList::avanzar(){
    if (puntero != NULL)
    puntero = puntero->getNext();
}

void CircList::remover() {
    nodo *aux = puntero;
    while (aux->getNext() != puntero){
        aux = aux->getNext();
    }
    if (aux == puntero){
        delete puntero;
        puntero = NULL;
        return;
    }

    aux->setNext(puntero->getNext());
    delete puntero;
    puntero = aux->getNext();

}
T CircList::getDato() {
    if (puntero == NULL)
        throw 1;

    return puntero->getDato();

}

int CircList::getTamanio() {
    nodo *aux = puntero;
    int tam = 1;

    if (NULL == puntero)
        return tam;

    while (aux->getNext() != puntero){
        tam++;
        aux = aux->getNext();
    }

    return tam;
}

void  CircList::reemplazar(T dato) {
    if (puntero == NULL)
        throw 1;

    return puntero->setDato(dato);
}

void CircList::vaciar(){

    while (!esVacia()){
        remover();
    }
}
#endif //CIRCLIST_H
