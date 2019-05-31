// by ch
#include <iostream>
#include <string>
#include "Nodo.h"
#include "Produto.h"
using namespace std;
#ifndef ENCADEADA_H
#define ENCADEADA_H

class Encadeada {
 public:
  Encadeada();
  Encadeada(const Encadeada& orig);
  virtual ~Encadeada();

  Nodo* search(int id);
  Nodo* getElemento(int index);

  void insert();
  void remove();
  void insert(int index);
  void remove(int index);
  void fillAll();
  int buscarIndice(int id);  // retorna a posição na lista
  Produto* buscar(string nome);

  bool isEmpty();
  void print();

  void setQuant(int quant);
  int getQuant() const;

 private:
  int quant;
  Nodo* head;
};

#endif /* ENCADEADA_H */
