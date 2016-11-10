/**      @file: 03-ponteiro.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso de ponteiro para acessar escopos. */

#include <stdio.h>
#include "apc_ponteiro.h"

/* O arquivo apc_ponteiros define a função troca_i que troca os valores de x e y
 * no escopo dado. */

int main() {
    int x = 1;
    int y = 2;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("Trocando...\n");
    troca_i(&x, &y);
    printf("Trocou!\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}