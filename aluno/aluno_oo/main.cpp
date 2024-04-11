#include <iostream>
#include <string>
#include "turma.h"

using namespace std;

int main() {
 
   Turma* ed1 = new Turma("2024-1", 42);
   ed1->setCod_disciplina("bcc3001");
   ed1->setCod_turma("ic3a");

   Aluno* a1 = new Aluno("a111", "Joao");
   Aluno* a2 = new Aluno("a777", "Maria");
   Aluno* a3 = new Aluno("a894", "Cleber");
   Aluno* a4 = new Aluno("a005", "Fernanda");

   ed1->matricula(a1);
   ed1->matricula(a3);
   ed1->matricula(a2);

   ed1->imprimir_alunos();

   ed1->cancela_matricula(a1->getRa());

   ed1->imprimir_alunos();

   delete ed1;

   return 0;
}