#include <iostream>
#include <string>
#include  "aluno.h"

using namespace std;

int main() {
    Aluno* a1 = aluno_criar("a111", "Joao");
    aluno_imprimir(a1);
    aluno_destruir(a1);
    aluno_imprimir(a1);

}