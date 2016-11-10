/**      @file: 04-do-while.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo do laço de repetição DO-WHILE. */

#include <stdio.h>

int main (){
    int i, N = 10;

    printf("do-while(i < %d)\n\t",N);
    i = 0; /* Inicialização do critério de parada. */
    do {
        printf("%d ", i++); /* Atualização da condição de parada. */
    } while(i < N);

    printf("\n");

    return 0; /* Não houve erro. */
}