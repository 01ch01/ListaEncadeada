// by ch
#include "Produto.h"

#include <iostream>
#include <string>
using namespace std;
#ifndef NODO_H
#define NODO_H

class Nodo {
 public:
  Nodo();
  Nodo(Produto& p);
  Nodo(const Nodo& orig);
  virtual ~Nodo();

  void SetItem(Produto item);
  Produto GetItem() const;
  void SetNext(Nodo* next);
  Nodo* GetNext() const;

 private:
  Produto item;
  Nodo* next;
};

#endif /* NODO_H */
