#include <iostream>
#include <string>

using namespace std;

typedef struct {
    string ra;
    string nome;
} Aluno;

Aluno* aluno_criar(string ra, string nome);


void aluno_imprimir(Aluno* a);
void aluno_destruir(Aluno* a);

Aluno* aluno_criar(string ra, string nome) {
    Aluno* novo = new Aluno();
    novo -> ra = ra;
    novo -> nome = nome;
    return novo;
}

void aluno_imprimir(Aluno* a) {
    cout << "(" << a -> ra << ", " << a -> nome << ")" << endl;
}

void aluno_destruir(Aluno* a) {
    delete a;
}

