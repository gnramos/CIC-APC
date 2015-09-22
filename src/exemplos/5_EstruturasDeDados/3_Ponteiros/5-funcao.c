/**      @file: 5-funcao.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso de ponteiro para função. */

#include <stdio.h>

#include "apc_numeros.h"

/* Chama a função dada usando os parâmetros dados (a,b) como
 * argumentos. */
int chama(int (*func)(int, int), int a, int b) {
  return func(a,b);
}

int main() {
  int a = 1, b = 2;

  printf("chama(max,%d,%d) = %d\n", a,b, chama(max_i,a,b));
  printf("chama(min,%d,%d) = %d\n", a,b, chama(min_i,a,b));

  a = 7;
  printf("chama(max,%d,%d) = %d\n", a,b, chama(max_i,b,a));
  printf("chama(min,%d,%d) = %d\n", a,b, chama(min_i,b,a));

  return 0;
}