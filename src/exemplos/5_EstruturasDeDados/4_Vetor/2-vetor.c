/**      @file: 2-vetor.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo uso de vetor como argumento de função. */

#include "apc_vetor.h"

#define TAM 10

/* Retorna o maior elemento do vetor. */
int maior(int vetor[TAM]) {
/* O tipo é "vetor de TAM elementos". */
  int i, maior = 0;

  for(i = 1; i < TAM; ++i)
    if(vetor[i] > vetor[maior])
        maior = vetor[i];

  return maior;
}

int main() {
  int vetor[] = {1,2,1,4,8,7,6,5,10,9};

  mostra_i(vetor, TAM);
  printf("O maior elemento é: %d\n", maior(vetor));

  return 0;
}