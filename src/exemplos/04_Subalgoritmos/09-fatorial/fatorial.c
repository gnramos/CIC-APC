/**      @file: fatorial.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação da função fatorial de forma recursiva. */

#include <stdio.h>

/* Retorna o valor do fatorial de n. */
int fatorial(int n) {/* <-----------------------------------------------+---+ */
  if(n < 1)    /* Verifica a condição de parada.                        |   | */
    return 1;  /* Caso base.                                            |   | */
                                                                  /*    |   | */
  /* Se não é um resultado conhecido, calcule-o repetindo o processo.   |   | */
  return n*fatorial(n-1);  /* A função é chamada outra vez aqui, abre   |   | */
}                            /* um novo escopo para --------------------+   | */
                                                                  /*        | */
int main() {                                                      /*        | */
  const int n = 5;                                                /*        | */
                                                  /* A função é chamada     | */
  printf("fatorial(%d) -> %d\n", n, fatorial(n)); /* a primeira vez aqui,   | */
                                                  /* abre um escopo para ---+ */
  return 0;
}

/* O fatorial de um número também pode ser facilmente calculado de forma
iterativa:

int fatorial_i(int n) {
  int i, fat = 1;

  for (i = 2; i <= n; ++i)
    fat = fat * i;

  return fat;
}

Analisando o problema com calma, fica evidente a natureza recursiva dele e,
portanto, que a solução mais "adequada" seria a função recursiva:

int fatorial_r(int n) {
  if(n < 1)
    return 1;

  return n * fatorial_r(n - 1);
}
*/