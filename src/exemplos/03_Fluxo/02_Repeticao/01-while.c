/**      @file: 1-while.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de laços de repetição com WHILE. */

#include <stdio.h>

int main (){
    int N = 10;
    int i = 0;

    printf("while(i < %d)\n\t",N);
    while(i < N) {
        printf("%d ", i);
        ++i; /* Atualização da condição de parada. */
    }

    /* De novo! */
    printf("\n\nwhile(i > 0)\n\t");
    while(i > 0) {
        printf("%d ", --i); /* Atualização da condição de parada. */
    }

    /* De novo! */
    i = N;
    printf("\n\nwhile(i--)\n\t");
    while(i--) { /* Atualização da condição de parada. */
        printf("%d ", i);
    }

    return 0; /* Não houve erro. */
}