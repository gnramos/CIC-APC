/**      @file: 08-escopo.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de escopos de funções. */

#include <stdio.h>

/* Limita o valor de x ao intervalo entre inf e sup.
Supõe inf <= sup */
int limita(int x, int inf, int sup) {
  /* Retorna o maior valor entre x e y. */
  int maior(int x, int y) {
    return (x > y ? x : y);
  }

  /* Retorna o menor valor entre x e y. */
  int menor(int x, int y) {
    return (x < y ? x : y);
  }

  return maior(inf, menor(x, sup));
}

int main() {
  int x, inf, sup;
  for(inf = -1; inf < 3; ++inf)
    for(sup = 5; sup >= inf; --sup)
      for(x = inf - 2; x <= sup + 2; ++x) {
        printf("limita(%2d, %2d, %2d)", x, inf, sup);
        printf(" = %2d\n", limita(x, inf, sup));

        /* Fora do escopo!
        printf("maior(%d,%d)=%d\n", x,inf,maior(x,inf));
        printf("menor(%d,%d)=%d\n", x,inf,menor(x,inf)); */
      }

  return 0;
}