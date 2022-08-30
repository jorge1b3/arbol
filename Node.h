//
// Created by jorge on 29/08/22.
//

#ifndef ARBOL_NODE_H
#define ARBOL_NODE_H
#include "Lista.h"

class Node{
    // Atributos
private:
    int value;
    Node* next;
    Node* back;
    Lista* listaActual;
    Lista* hijos;
public:
    // Metodos
    void setValue(int value);
    void setNext(Node* next);
    void setBack(Node* back);
    void setListaActual(Lista* listaActual);
    void setHijos(Lista* hijos);
    int getValue() const;
    Node* getNext();
    Node* getBack();
    Lista* getListaActual();
    Lista* getHijos();
    // Constructores
    Node(int value, Node* next, Node* back,Lista* listaActual);
};


#endif //ARBOL_NODE_H
