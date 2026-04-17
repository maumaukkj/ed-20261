#include <stdio.h>

int main() {
    int vetor[100], alvo, encontrado = -1;
    for(int i = 0; i < 100; i++) vetor[i] = i + 1; // Preenchendo 1 a 100

    printf("Qual valor buscar (1-100)? ");
    scanf("%d", &alvo);

    // Busca Sequencial: 
    // Melhor caso: O(1) - Alvo é o primeiro elemento
    // Pior caso: O(n) - Alvo é o último ou não existe
    for(int i = 0; i < 100; i++) {
        if(vetor[i] == alvo) {
            encontrado = i;
            break;
        }
    }

    if(encontrado != -1) printf("Valor encontrado na posicao %d\n", encontrado);
    else printf("Valor nao encontrado\n");
    
    printf("Complexidade: Melhor Caso O(1), Pior Caso O(n)\n");
    return 0;
}