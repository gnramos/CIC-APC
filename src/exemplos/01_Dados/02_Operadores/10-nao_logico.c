/**      @file: 10-nao_logico.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização do operador !. */

#include <stdio.h>

int main () {
    int V = 1, F = 0;

    printf("! (não lógico):\n");

    printf("    (!V) é falso (%d).\n", !V);
    printf("    (!F) é verdadeiro (%d).\n", !F);

    return 0; /* Não houve erro(s). */
}