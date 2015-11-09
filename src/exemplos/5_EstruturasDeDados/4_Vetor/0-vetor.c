/**      @file: 0-vetor.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo uso de vetor. */

#include <stdio.h>

int main() {
  int vetor[10];
  int i, soma = 0;

  for(i = 0; i < 10; ++i) {
    printf("Digite o %d-ésimo elemento: ", i);
    scanf("%d", vetor+i);
  }

  printf("\nOs elementos são: ");
  for(i = 0; i < 10; ++i)
    printf("%d ", vetor[i]);

  for(i = 9; i >= 0; --i)
    soma += vetor[i];
  printf("\n\nE a soma deles é: %d\n", soma);

  return 0;
}