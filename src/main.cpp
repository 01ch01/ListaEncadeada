// by ch
#include <iostream>
#include <string>
#include "../include/Encadeada.h"
#include "../include/Nodo.h"
#include "../include/Produto.h"
using namespace std;

void menu() {
  cout << "\n\t-------------------------------------";
  cout << "\n\t\t   MENU PRINCIPAL";
  cout << "\n\t-------------------------------------";
  cout << "\n\t1 - Inserir produto;"
          "\n\t2 - Busca por nome (Força Bruta);"
          "\n\t3 - Busca Binária;"
          "\n\t4 - Mostrar todos os produtos;"
          "\n\t5 - Preencher lista aleatória;"
          "\n\t6 - Salvar lista;"
          "\n\t7 - Excluir produto;"
          "\n\t8 - Carregar lista salva;"
          "\n\tQ - Sair.";
  cout << "\n\t-------------------------------------";
  cout << "\n\tINSIRA SUA OPÇÃO: ";
}

int main(int argc, char** argv) {
  Encadeada lista;
  int index = 2;
  // menu();

  lista.insert();
  lista.insert();
  lista.insert();
  lista.print();
  lista.getElemento(index);
  cout << "++++++++++++++++++++++++++";
  cout << lista.getElemento(index);
  cout << "++++++++++++++++++++++++++";
  return 0;
}
