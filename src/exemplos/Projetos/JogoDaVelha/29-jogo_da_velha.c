/**      @file: jogo_da_velha.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação do jogo "Jogo da Velha". */

#include <stdlib.h>
#include <stdio.h>

/***********
 * Funções *
 ***********/
void escreve_regras() {
    printf("*****************\n");
    printf("* JOGO DA VELHA *\n");
    printf("*****************\n\n");

    printf("Os jogadores alternam marcações até que alguém consiga alinhar 3 "
           "marcas iguais ou não seja mais possível marcar.\n\n");

    printf("Bom jogo!\n");
    printf("*********\n\n");
}

int invalidas(int X, int Y) {
  return ((1 > X) || (X > 3) || (1 > Y) || (Y > 3));
}

int linha_completa(char situacao[4][4], char marca) {
    if(((marca == situacao[1][1]) && (situacao[1][1] == situacao[1][2]) && (situacao[1][2] == situacao[1][3])) ||
       ((marca == situacao[2][1]) && (situacao[2][1] == situacao[2][2]) && (situacao[2][2] == situacao[2][3])) ||
       ((marca == situacao[3][1]) && (situacao[3][1] == situacao[3][2]) && (situacao[3][2] == situacao[3][3])) ||
       ((marca == situacao[1][1]) && (situacao[1][1] == situacao[2][1]) && (situacao[2][1] == situacao[3][1])) ||
       ((marca == situacao[1][2]) && (situacao[1][2] == situacao[2][2]) && (situacao[2][2] == situacao[3][2])) ||
       ((marca == situacao[1][3]) && (situacao[1][3] == situacao[2][3]) && (situacao[2][3] == situacao[3][3])) ||
       ((marca == situacao[1][1]) && (situacao[1][1] == situacao[2][2]) && (situacao[2][2] == situacao[3][3])) ||
       ((marca == situacao[1][3]) && (situacao[1][3] == situacao[2][2]) && (situacao[2][2] == situacao[3][1])))
        return 1;
   return 0;
}

void mostra(char situacao[4][4]) {
    printf("\n %c | %c | %c", situacao[1][1], situacao[1][2], situacao[1][3]);
    printf("\n---+---+---");
    printf("\n %c | %c | %c", situacao[2][1], situacao[2][2], situacao[2][3]);
    printf("\n---+---+---");
    printf("\n %c | %c | %c\n\n", situacao[3][1], situacao[3][2], situacao[3][3]);
}

int possivel_marcar(char situacao[4][4]) {
    int i, j;

    for(i = 1; i < 4; ++i)
        for(j = 1; j < 4; ++j)
            if(situacao[i][j] == ' ')
              return 1;
    return 0;
}

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
