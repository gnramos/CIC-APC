/**      @file: 10-for.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de laços de repetição com FOR. */

#include <stdio.h>

int main (){
    int N = 10;
    int i = 0;

    /* A variação de valores é arbitrária. */
    printf("for(i = 0; i < %d; i += 5)\n", N);
    for(i = 0; i < N; i += 5) {
        printf("\ti = %d\n", i);
    }

    printf("\nfor(i = %d; i >= 0; i -= 5)\n", N);
    for(i = N; i >= 0; i -= 5) {
        printf("\ti = %d\n", i);
    }

    return 0; /* Não houve erro. */
}