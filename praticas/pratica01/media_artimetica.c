#include <stdio.h>

int main() {
    int n;
    float num, soma = 0;
    printf("Quantos numeros (max 100)? ");
    scanf("%d", &n);
    if (n > 100) n = 100;
    for(int i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%f", &num);
        soma += num;
    }
    printf("Media: %.2f\n", soma / n);
    return 0;
}