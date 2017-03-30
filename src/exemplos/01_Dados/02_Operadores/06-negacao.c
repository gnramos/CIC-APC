/**      @file: 06-negacao.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização do operador de negação. */

#include <stdio.h>

int main () {
    int i;
    printf("Negação:\n");

    i = 1;
    printf("         i = %d\n", i);
    printf("        -i = %d\n", -i);
    printf("     -(-i) = %d\n", -(-i));
    printf("  -(-(-i)) = %d\n", -(-(-i)));

    i = -i;
    printf("\n         i = -i;\n");
    printf("         i = %d\n", i);
    printf("        -i = %d\n", -i);
    printf("     -(-i) = %d\n", -(-i));
    printf("  -(-(-i)) = %d\n", -(-(-i)));

    return 0; /* Não houve erro(s). */
}