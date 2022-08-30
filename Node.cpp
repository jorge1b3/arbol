//
// Created by jorge on 30/08/22.
//
#include "Node.h"
#include "Lista.h"

void Node::setValue(int value) {
    this->value = value;
}
void Node::setNext(Node* next) {
    this->next = next;
}
void Node::setBack(Node* back) {
    this->back = back;
}
void Node::setListaActual(Lista* listaActual) {
    this->listaActual = listaActual;
}
void Node::setHijos(Lista* hijos) {
    this->hijos = hijos;
}
int Node::getValue() const {
    return this->value;
}
Node* Node::getNext() {
    return this->next;
}
Node* Node::getBack() {
    return this->back;
}
Lista* Node::getListaActual() {
    return this->listaActual;
}
Lista* Node::getHijos() {
    return this->hijos;
}
Node::Node(int value, Node* next, Node* back, Lista* listaActual)
    :value{value},next{next},back{back},listaActual{listaActual},hijos{nullptr}{}

