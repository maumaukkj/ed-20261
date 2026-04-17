#include <stdio.h>
#include <time.h>

int main() {
    int matriz[10][10], k = 0;
    clock_t inicio, fim;

    // Inicializando matriz
    for(int i=0; i<10; i++) for(int j=0; j<10; j++) matriz[i][j] = k++;

    // Abordagem 1: Dois laços (Aninhados) - O(n*m) ou O(n^2)
    inicio = clock();
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            int x = matriz[i][j]; 
        }
    }
    fim = clock();
    printf("Tempo dois lacos: %f ms (O(n^2))\n", (double)(fim - inicio) * 1000 / CLOCKS_PER_SEC);

    // Abordagem 2: Um laço - O(n) onde n é o total de elementos
    int *ptr = &matriz[0][0];
    inicio = clock();
    for(int i=0; i<100; i++) {
        int x = *(ptr + i);
    }
    fim = clock();
    printf("Tempo um laco: %f ms (O(n))\n", (double)(fim - inicio) * 1000 / CLOCKS_PER_SEC);

    return 0;
}