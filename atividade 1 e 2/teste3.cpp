#include <stdio.h>

int main() {
    int v1[] = {1, 2, 3};
    int v2[] = {4, 5, 6};
    int *p1 = v1, *p2 = v2;

    int* m[] = {v1, v2};
    int** pm = m;

    printf("%x\n", v2);
    printf("%x\n", *(*(pm+1) + 2));
}