  /**      @file: strcmp.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente a função strcmp. */

#include <stdio.h>

/* Comparação lexicográfica, retorna:
 *   -1 se str1 for menor que str2
 *    0 se forem iguais
 *    1 se str1 for maior que str2 */
int strcmp(char* str1, char* str2) {
    /* Implemente o código aqui. */
}

int main() {
  char str1[1001], str2[1001];

  scanf("%s", str1);
  scanf("%s", str2);

  printf("%d\n", strcmp(str1,str2));

  return 0;
}
