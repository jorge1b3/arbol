//
// Created by jorge on 29/08/22.
//

#ifndef ARBOL_LISTA_H
#define ARBOL_LISTA_H
#include "Node.h"
#include <string>

class Lista {
private:
    Node* top;
    Node* tail;
    Node* padre;
public:
    void push(int value);
    Hijo pop();
    Hijo* operator[](int n);
    int size();
    Lista();
    //std::string toString();
}
;
#endif //ARBOL_LISTA_H
