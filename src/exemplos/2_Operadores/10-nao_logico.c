/**      @file: 10-nao_logico.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização do operador !. */

#include <stdio.h>

int main () {
    int V = 1, F = 0;

    printf("! (não lógico):\n");

    if(!V)
        printf("    (!V) é verdadeiro.\n");
    else
        printf("    (!V) é falso.\n");
    if(!F)
        printf("    (!F) é verdadeiro.\n");
    else
        printf("    (!F) é falso.\n");


    return 0; /* Não houve erro(s). */
}