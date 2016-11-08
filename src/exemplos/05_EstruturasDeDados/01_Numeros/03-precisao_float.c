/**      @file: 03-precisao_float.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de código para exemplificar o erro de
 * precisão com tipo float. */

#include <stdio.h>

int main() {
    float f = 1 / 10;
    printf("  1 / 10   == %.1f\n", f);

    f = 1.0 / 10;
    printf("1.0 / 10   == %.1f\n", f);

    f = 1 / 10.0;
    printf("  1 / 10.0 == %.5f\n", f);

    f = 1.0 / 10.0;
    printf("1.0 / 10.0 == %.28f\n", f);

  return 0;
}