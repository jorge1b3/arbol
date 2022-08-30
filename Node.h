//
// Created by jorge on 29/08/22.
//

#ifndef ARBOL_NODE_H
#define ARBOL_NODE_H
#include "Hijo.h"
#include "Lista.h"

struct Node{
    Hijo* value;
    Node* next;
    Node* back;
    Node* padre;
    Lista* hijos;
    Node(Hijo v, Node* n,Node* b):value{v},next{n},back{b}{}
};


#endif //ARBOL_NODE_H
