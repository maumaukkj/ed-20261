#ifndef CONTA_H
#define CONTA_H

// Definimos apenas o tipo, a estrutura fica escondida no .c
typedef struct conta_t Conta;

Conta* conta_criar(int numero);
void conta_depositar(Conta* c, float valor);
int conta_sacar(Conta* c, float valor); // Retorna 1 se ok, 0 se sem saldo
float conta_ver_saldo(Conta* c);
void conta_destruir(Conta* c);

#endif