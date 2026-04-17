#include <stdio.h>

int main() {
    int valor, notas[] = {200, 100, 50, 20, 10, 5, 2};
    printf("Valor do saque (max 1000): ");
    scanf("%d", &valor);
    if (valor > 1000) return 1;
    printf("Notas entregues:\n");
    for(int i = 0; i < 7; i++) {
        int qtd = valor / notas[i];
        if (qtd > 0) printf("%d nota(s) de R$ %d\n", qtd, notas[i]);
        valor %= notas[i];
    }
    return 0;
}