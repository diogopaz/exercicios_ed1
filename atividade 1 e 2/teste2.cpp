#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 40;
    int* v[] = {&a, &b, &c, &d};
    int** p = v;

    printf("\nendereco a: %x\n", &a);
    printf("endereco b: %x\n", &b);
    printf("endereco c: %x\n", &c);
    printf("endereco d: %x\n\n", &d);

    printf("endereco v[0]: %x\n", v);
    printf("endereco v[1]: %x\n", (v+1));
    printf("endereco v[2]: %x\n", (v+2));
    printf("endereco v[3]: %x\n", (v+3));


    printf("\n%x", v+3);
}