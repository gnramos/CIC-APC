/**      @file: 4-do-while.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo do laço de repetição DO-WHILE. */

#include <stdio.h>

int main (){
    int N = 10;
    int i = 0;

    printf("do-while(i < %d)\n\t",N);
    i = 0;
    do {
        printf("%d ", i++); /* Atualização da condição de parada. */
    } while(i < N);

    printf("\n");

    return 0; /* Não houve erro. */
}