/**      @file: 2-limites.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo dos limites das representações de tipos de dados. */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    /* Os resultados dependem da arquitetura/hardware! */

    printf("char) %lu bytes\n", sizeof(char));
    printf("char) %d <= char <= %d\n", CHAR_MIN, CHAR_MAX);

    printf("\nint) %lu bytes\n", sizeof(int));
    printf("int) %d <= int <= %d\n", INT_MIN, INT_MAX);

    printf("\nfloat) %lu bytes\n", sizeof(float));
    printf("float) %E <= float <= %E\n", FLT_MIN, FLT_MAX);

    printf("\ndouble) %lu bytes\n", sizeof(double));
    printf("double) %E <= double <= %E\n", DBL_MIN, DBL_MIN);

    return 0;
}