#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Digite o peso (kg) e a altura (m): ");
    scanf("%f %f", &peso, &altura);
    imc = peso / (altura * altura);
    printf("IMC: %.2f - ", imc);
    if (imc < 18.5) printf("Abaixo do peso\n");
    else if (imc < 25) printf("Peso normal\n");
    else if (imc < 30) printf("Sobrepeso\n");
    else printf("Obesidade\n");
    return 0;
}