// by ch
#include "../include/Encadeada.h"

Encadeada::Encadeada() {
  this->head = NULL;
  this->quant = 0;
}

void Encadeada::setQuant(int quant) {
  this->quant = quant;
}

int Encadeada::getQuant() const {
  return quant;
}

Encadeada::Encadeada(const Encadeada& orig) {}

Encadeada::~Encadeada() {}

bool Encadeada::isEmpty() {  // verifica se a lista está vazia
  if (this->quant == 0)
    return true;
  else
    return false;
}

void Encadeada::insert() {  // insere no começo da lista
  Produto p;
  p.fill();

  Nodo* novo = new Nodo();
  novo->SetItem(p);
  novo->SetNext(this->head);
  this->head = novo;
  this->quant++;
}

void Encadeada::remove() {  // remove no início da lista
  this->head = this->head->GetNext();
  this->quant--;
}

Nodo* Encadeada::getElemento(int index) {  // obtém o nó desejado

  Nodo* nodoDesejado = this->head;  // o nó criado está no primeiro elemento

  for (int i = 1; i < index && nodoDesejado->GetNext() != NULL; i++) {
    nodoDesejado = nodoDesejado->GetNext();  // pergunta pro próximo

    if (i == index) {       // se eu achei
      return nodoDesejado;  // eu retorno o nó
    }
  }
}

void Encadeada::print() {
  cout << "\n\t__________________________________";
  cout << "\n\t\t|LISTA DE PRODUTOS|\n";

  if (this->isEmpty() == true)
    cout << "\n\t\tA LISTA ESTÁ VAZIA =(\n";
  else {
    Nodo* p = this->head;
    while (p != NULL) {
      p->GetItem().print();
      p = p->GetNext();
    }
  }
}
