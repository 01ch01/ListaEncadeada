// by ch
#include "../include/Nodo.h"

Nodo::Nodo() {
  this->next = NULL;
}

Nodo::Nodo(Produto& p) {
  this->item.copy(p);
  this->next = NULL;
}

Nodo::Nodo(const Nodo& orig) {
  this->item.copy(orig.GetItem());
}

Nodo::~Nodo() {}

void Nodo::SetItem(Produto item) {
  this->item = item;
}

Produto Nodo::GetItem() const {
  return item;
}

void Nodo::SetNext(Nodo* next) {
  this->next = next;
}

Nodo* Nodo::GetNext() const {
  return next;
}
