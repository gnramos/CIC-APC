/**      @file: 04-modulo.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização do operador de módulo. */

#include <stdio.h>

int main () {
    printf("Módulo:\n");

    /* O operador % calcula o resto da divisão inteira de dois números inteiros. */
    printf("      0 %% 5 = %d\n", 0 % 5);
    printf("      1 %% 5 = %d\n", 1 % 5);
    printf("      2 %% 5 = %d\n", 2 % 5);
    printf("      3 %% 5 = %d\n", 3 % 5);
    printf("      4 %% 5 = %d\n", 4 % 5);
    printf("      5 %% 5 = %d\n", 5 % 5);
    printf("      6 %% 5 = %d\n", 6 % 5);
    printf("      7 %% 5 = %d\n", 7 % 5);
    printf("      8 %% 5 = %d\n", 8 % 5);
    printf("      9 %% 5 = %d\n", 9 % 5);
    printf("     10 %% 5 = %d\n", 10 % 5);

    printf("\nDivisão por 0 não é uma operação válida...\n");
    /* printf("      2 %% 0   = %d\n", 2 % 0);  */

    /* É simples, todo número inteiro n pode ser escrito como a*x + b, onde
     *      a   é o resultado da divisão inteira n / x
     *      b   é o resto desta divisão.
     *
     * Por exemplo:
     *    9/5   é 1
     *    9%5   é 4    -> 9 = 1*5 + 4                                         */

    return 0; /* Não houve erro(s). */
}