/**      @file: 11-e_logico.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização do operador &&. */

#include <stdio.h>

int main () {
    int V = 1, F = 0;
    printf("&& (e lógico):\n");

    printf("    (V && V) é verdadeiro. (%d)\n", V && V);
    printf("    (V && F) é falso. (%d)\n", V && F);
    printf("    (F && V) é falso. (%d)\n", F && V);
    printf("    (F && F) é falso. (%d)\n", F && F);

    return 0; /* Não houve erro(s). */
}