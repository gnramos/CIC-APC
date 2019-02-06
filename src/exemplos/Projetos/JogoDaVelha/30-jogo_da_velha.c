/**      @file: jogo_da_velha.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação do jogo "Jogo da Velha". */

#include <stdlib.h>
#include <stdio.h>

#include "jogo_da_velha.h"

int main() {
    char marca_atual='O';
    char situacao[4][4];
    int X, Y;
    int i, j;

    for(i = 1; i < 4; ++i)
        for(j = 1; j < 4; ++j)
            situacao[i][j] = ' ';

    escreve_regras();

    while(possivel_marcar(situacao)) {
        mostra(situacao);

        marca_atual = (marca_atual == 'O' ? 'X' : 'O');

        do {
            printf("[%c] Digite as coordenadas Y e X: ", marca_atual);
            scanf("%d %d", &X, &Y);
        } while(invalidas(X, Y) || (situacao[X][Y] != ' '));

        situacao[X][Y] = marca_atual;

        if(linha_completa(situacao, marca_atual))
            break;
    }

    mostra(situacao);

    if(linha_completa(situacao, marca_atual))
        printf("\nParabéns %c\n\n", marca_atual);
    else
        printf("\nDeu velha!\n\n");

    return EXIT_SUCCESS;
}
