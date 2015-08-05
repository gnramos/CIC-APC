/**      @file: 12-ou_logico.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização do operador ||. */

#include <stdio.h>

int main () {
    int V = 1, F = 0;
    printf("|| (ou lógico):\n");

    if(V || V)
        printf("    (V || V) é verdadeiro.\n");
    else
        printf("    (V || V) é falso.\n");
    if(V || F)
        printf("    (V || F) é verdadeiro.\n");
    else
        printf("    (V || F) é falso.\n");
    if(F || V)
        printf("    (F || V) é verdadeiro.\n");
    else
        printf("    (F || V) é falso.\n");
    if(F || F)
        printf("    (F || F) é verdadeiro.\n");
    else
        printf("    (F || F) é falso.\n");


    return 0; /* Não houve erro(s). */
}