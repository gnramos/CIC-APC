/**      @file: 13-ternario.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização do operador ternário. */

#include <stdio.h>

int main () {
    int i;
    printf("Ternário:\n");

    i = 1;
    printf("    i = %d\n", i);

    i = (1 < 2 ? 1 : -1);
    printf("\"i = (1 < 2 ? 1 : -1);\" -> i = %d\n", i);
    i = (1 > 2 ? 1 : -1);
    printf("\"i = (1 > 2 ? 1 : -1);\" -> i = %d\n", i);

    printf("1 é maior que 2? Resposta: %c\n", 1 > 2 ? 'S' : 'N');
    printf("1 é menor que 2? Resposta: %c\n", 1 < 2 ? 'S' : 'N');

    printf("O teste é: %c\n", 1 ? 'V' : 'F');
    printf("O teste é: %c\n", 0 ? 'V' : 'F');

    return 0; /* Não houve erro(s). */
}