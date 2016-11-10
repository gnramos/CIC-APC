/**      @file: 02-raiz2-0.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de código para aproximar o valor da raiz
 * quadrada de um número inteiro. */

#include <stdio.h>

int main() {
  int r, n;

  printf("Qual o valor de n?\n");
  scanf("%d", &n);

  printf("Qual sua estimativa para a raiz de %d?\n", n);

  /* 1a tentativa */
  scanf("%d", &r);
  printf("%d*%d = %d\n", r, r, r*r);

  /* 2a tentativa */
  r = (r+(n/r))/2; /* Algo estranho com esta instrução... */
  printf("%d*%d = %d\n", r, r, r*r);

  /* 3a tentativa */
  r = (r+(n/r))/2;
  printf("%d*%d = %d\n", r, r, r*r);

  printf("Depois de 3 tentativas, a aproximação da raiz de %d é %d.\n", n, r);

  return 0;
}