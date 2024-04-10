#include <stdio.h>

typedef struct produto {
    int codigo;
    char descricao[12];
    float preco;
} Produto;

int main() {
    Produto prod = {10, "Teclado", 98.50};
    Produto* p = &prod;
    int* pi = &(p -> codigo);
    char* pc = p -> descricao;
    float* pf = &(p -> preco);

    prod.codigo = 11;
    *pi = 12;
    p->codigo = 13;
    (*p).codigo = 14;

    prod.preco = 5.98;
    *pf = 9.99;
    p->preco = 888.63;
    (*p).preco = 0.10;

    printf("%f", p->preco);
    return 0;
}