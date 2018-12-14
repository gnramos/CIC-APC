/**      @file: 11-multiplica.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de código para computar o valor da multipli-
 * cação de dois números inteiros de forma recursiva. */

#include <stdio.h>

/* Retorna a multiplicação
 * de a, b vezes. Assume
 * que b > 0. */
int mult(int a, int b) {
  if(b == 0)
    return 0;
  return a + mult(a, b-1);
}

int main() {
  int a, b;

  for(a = 0; a < 5; ++a)
    for(b = 0; b < 5; ++b)
      printf("mult(%d, %d) = %d\n", a, b, mult(a, b));

  return 0;
}