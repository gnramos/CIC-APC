/**      @file: 09-fatorial.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação da função fatorial de forma recursiva. */

#include <stdio.h>

/* Retorna o valor do fatorial de n. */
int fatorial(int n) {/* <-----------------------------------------------+---+ */
    if(n < 1)      /* Verifica a condição de parada.                    |   | */
        return 1;  /* Caso base.                                        |   | */
                                                                  /*    |   | */
    /* Se não é um resultado conhecido, calcule-o repetindo o processo. |   | */
    return n*fatorial(n-1);  /* A função é chamada outra vez aqui, abre |   | */
}                            /* um novo escopo para --------------------+   | */
                                                                  /*        | */
int main() {                                                      /*        | */
    const int n = 5;                                              /*        | */
                                                    /* A função é chamada   | */
    printf("fatorial(%d) -> %d\n", n, fatorial(n)); /* a primeira vez aqui, | */
                                                    /* abre um escopo para -+ */
    return 0;
}