/**      @file: 7-multiplica.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de código para computar o valor da multipli-
 * cação de dois números inteiros de forma iterativa. */

#include <stdio.h>

/* Retorna a multiplicação
 * de a, b vezes. Assume
 * que b > 0. */
int mult(int a,int b) {
    int resultado = 0;
    while(b--)
         resultado += a;
    return resultado;
}

int main() {
    int a, b;
    for(a = 0; a < 5; ++a)
        for(b = 0; b < 5; ++b)
            printf("mult(%d, %d) = %d\n", a, b, mult(a, b));

  return 0;
}