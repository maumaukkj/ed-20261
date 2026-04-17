#include <stdio.h>

int main() {
    int base, exp;
    long long resultado = 1;
    printf("Digite a base e o expoente (inteiro positivo): ");
    scanf("%d %d", &base, &exp);
    for(int i = 0; i < exp; i++) resultado *= base;
    printf("Resultado: %lld\n", resultado);
    return 0;
}