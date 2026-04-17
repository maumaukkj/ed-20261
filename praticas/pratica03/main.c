#include <stdio.h>
#include "conta.h"

int main() {
    Conta* minha_conta = conta_criar(1234);

    conta_depositar(minha_conta, 500.0);
    printf("Saldo apos deposito: R$ %.2f\n", conta_ver_saldo(minha_conta));

    if (conta_sacar(minha_conta, 200.0)) {
        printf("Saque de R$ 200.0 realizado!\n");
    } else {
        printf("Saldo insuficiente!\n");
    }

    printf("Saldo final: R$ %.2f\n", conta_ver_saldo(minha_conta));

    conta_destruir(minha_conta);
    return 0;
}