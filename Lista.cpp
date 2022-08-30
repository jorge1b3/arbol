//
// Created by jorge on 29/08/22.
//

#include "Lista.h"
#include "Node.h"
#include <string>


void Lista::push(Hijo value) {
    if(!top){
        top = new Node(value, nullptr, nullptr);
        tail = top;
        return;
    }
    tail = new Node(value,tail, nullptr);
}


Hijo Lista::pop() {
    Hijo value = *tail->value;
    tail = tail->next;
    delete tail->back;
    tail->back = nullptr;
    return value;
}

int Lista::size(){
    int sz{};
    Node* node = top;
    while (node){
        ++sz;
        node = node->back;
    }
    return sz;
}

Lista::Lista():top{nullptr},tail{nullptr}{}

Hijo* Lista::operator[](int pos) {
    Node* nodo {top};
    for(int i{};i<pos&&nodo;i++){
        nodo = nodo->back;
    }
    return nodo->value;
}

