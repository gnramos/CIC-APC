/**      @file: 03-divisao.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização do operador de divisão. Em C, só é possível dividir
 * valores numéricos. */

#include <stdio.h>

int main () {
    printf("Divisão:\n");

    /* Escreva o resultado da operação 3 / 2 na posição indicada por %d. A
     * divisão de valores inteiros também é um valor inteiro. */
    printf("      3 / 2   = %d\n", 3 / 2);

    /* Escreva o resultado da operação 2 / 3 na posição indicada por %d. */
    printf("      2 / 3   = %d\n", 2 / 3);

    /* Escreva o resultado da operação 2 / 3.0 na posição indicada por %f. A
     * divisão de valores inteiros por reais é um valor real. */
    printf("      2 / 3.0 = %f\n", 2 / 3.0);

    /* Escreva o resultado da operação 2.0 / 3 na posição indicada por %f. A
     * divisão de valores reais por inteiros é um valor real. */
    printf("    2.0 / 3   = %f\n", 2.0 / 3);

    /* Escreva o resultado da operação 2.0 / 3.0 na posição indicada por %f. A
     * divisão de valores reais também é um valor real. */
    printf("    2.0 / 3.0 = %f\n", 2.0 / 3.0);

    /* Divisão por zero (0) não é uma operação válida! */
    /* printf("    2.0 / 0.0 = %f\n", 2.0 / 0.0); */

    return 0; /* Não houve erro(s). */
}