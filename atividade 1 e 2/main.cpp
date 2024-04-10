#include <iostream>
#include <time.h>
using namespace std;

void executarCarga(int carga) {
    for(int i = 0; i < carga; i++) {

    }
}

void ordem_n(int n, int carga) {
    for(int i = 0; i < n; i++) {
        executarCarga(carga);
    }
}

int main() {
    clock_t  inicio, fim;

    inicio = clock(); 
    
    ordem_n(9989999, 5);

    fim = clock();
    float tempo = (float)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Tempo: %.2f \n", tempo);
}