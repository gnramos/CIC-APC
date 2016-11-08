/**      @file: 01-subtracao.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização do operador de subtração. Em C, só é possível subtrair
 * valores numéricos. */

#include <stdio.h>

int main () {
    printf("Subtração:\n");

    /* Escreva o resultado da operação 1 + 2 na posição indicada por %d. A
     * subtração de valores inteiros também é um valor inteiro. */
    printf("      1 - 2   = %d\n", 1 - 2);

    /* Escreva o resultado da operação 2 - 1 na posição indicada por %d. */
    printf("      2 - 1   = %d\n", 2 - 1);

    /* Escreva o resultado da operação 2 - 1.0 na posição indicada por %f. A
     * subtração de valores inteiros com reais é um valor real. */
    printf("      2 - 1.0 = %f\n", 2 - 1.0);

    /* Escreva o resultado da operação 2.0 - 1 na posição indicada por %f. */
    printf("    2.0 - 1   = %f\n", 2.0 - 1);

    /* Escreva o resultado da operação 1 - 2 na posição indicada por %f. A
     * A subtração de valores reais também é um valor real. */
    printf("    2.0 - 1.0 = %f\n", 2.0 - 1.0);

    return 0; /* Não houve erro(s). */
}