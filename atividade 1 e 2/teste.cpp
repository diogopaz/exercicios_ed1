#include <stdio.h>
int main() {
    int v[] = {1, 2, 3, 4};
    int *p = v;
    int *w = &v[2];
    int i = 30;
    int *x = &i;
    printf("%d", v[5]);
}