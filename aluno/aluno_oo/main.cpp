#include <iostream>
#include <string>
#include "turma.h"

using namespace std;

int main() {
   Aluno* a1 = new Aluno("a111", "Joao");
   Aluno* a2 = new Aluno("a222", "Maria");
   Turma* t1 = new Turma("2024-1", 100);    
   a1->setRa("a000");

   t1->matricula(a1);
   t1->matricula(a2);
   // delete(t1);
   // delete(a1);
   t1->cancela_matricula("a000");
   // t1->cancela_matricula("a222");
   t1->imprimir_alunos();
   // a1->imprimir();
   // delete(a2);
   delete(t1);

   return 0;
}