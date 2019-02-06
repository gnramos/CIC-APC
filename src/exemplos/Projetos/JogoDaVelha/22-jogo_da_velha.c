/**      @file: jogo_da_velha.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação do jogo "Jogo da Velha". */

#include <stdlib.h>
#include <stdio.h>

int main() {
    char marca_atual='O';
    char situacao_11=' ', situacao_12=' ', situacao_13=' ',
         situacao_21=' ', situacao_22=' ', situacao_23=' ',
         situacao_31=' ', situacao_32=' ', situacao_33=' ';
    int X, Y;

    printf("*****************\n");
    printf("* JOGO DA VELHA *\n");
    printf("*****************\n\n");

    printf("Os jogadores alternam marcações até que alguém consiga alinhar 3 "
           "marcas iguais ou não seja mais possível marcar.\n\n");

    printf("Bom jogo!\n");
    printf("*********\n\n");

    while((situacao_11 == ' ') || (situacao_12 == ' ') || (situacao_13 == ' ') ||
          (situacao_21 == ' ') || (situacao_22 == ' ') || (situacao_23 == ' ') ||
          (situacao_31 == ' ') || (situacao_32 == ' ') || (situacao_33 == ' ')) {
        printf("\n %c | %c | %c", situacao_11, situacao_12, situacao_13);
        printf("\n---+---+---");
        printf("\n %c | %c | %c", situacao_21, situacao_22, situacao_23);
        printf("\n---+---+---");
        printf("\n %c | %c | %c\n\n", situacao_31, situacao_32, situacao_33);

        marca_atual = (marca_atual == 'O' ? 'X' : 'O');

        do {
            printf("[%c] Digite as coordenadas Y e X: ", marca_atual);
            scanf("%d %d", &X, &Y);
        } while((1 > X) || (X > 3) || (1 > Y) || (Y > 3) ||
                ((X == 1) && (((Y == 1) && (situacao_11 != ' ')) ||
                                    ((Y == 2) && (situacao_12 != ' ')) ||
                                    ((Y == 3) && (situacao_13 != ' ')))) ||
                ((X == 2) && (((Y == 1) && (situacao_21 != ' ')) ||
                                    ((Y == 2) && (situacao_22 != ' ')) ||
                                    ((Y == 3) && (situacao_23 != ' ')))) ||
                ((X == 3) && (((Y == 1) && (situacao_31 != ' ')) ||
                                    ((Y == 2) && (situacao_32 != ' ')) ||
                                    ((Y == 3) && (situacao_33 != ' ')))));

        if(X == 1) {
            if(Y == 1)
                situacao_11 = marca_atual;
            else if(Y == 2)
                situacao_12 = marca_atual;
            else
                situacao_13 = marca_atual;
        } else if(X == 2) {
            if(Y == 1)
                situacao_21 = marca_atual;
            else if(Y == 2)
                situacao_22 = marca_atual;
            else
                situacao_23 = marca_atual;
        } else {
            if(Y == 1)
                situacao_31 = marca_atual;
            else if(Y == 2)
                situacao_32 = marca_atual;
            else
                situacao_33 = marca_atual;
        }

        if(((marca_atual == situacao_11) && (situacao_11 == situacao_12) && (situacao_12 == situacao_13)) ||
           ((marca_atual == situacao_21) && (situacao_21 == situacao_22) && (situacao_22 == situacao_23)) ||
           ((marca_atual == situacao_31) && (situacao_31 == situacao_32) && (situacao_32 == situacao_33)) ||
           ((marca_atual == situacao_11) && (situacao_11 == situacao_21) && (situacao_21 == situacao_31)) ||
           ((marca_atual == situacao_12) && (situacao_12 == situacao_22) && (situacao_22 == situacao_32)) ||
           ((marca_atual == situacao_13) && (situacao_13 == situacao_23) && (situacao_23 == situacao_33)) ||
           ((marca_atual == situacao_11) && (situacao_11 == situacao_22) && (situacao_22 == situacao_33)) ||
           ((marca_atual == situacao_13) && (situacao_13 == situacao_22) && (situacao_22 == situacao_31)))
            break;
    }

    printf("\n %c | %c | %c", situacao_11, situacao_12, situacao_13);
    printf("\n---+---+---");
    printf("\n %c | %c | %c", situacao_21, situacao_22, situacao_23);
    printf("\n---+---+---");
    printf("\n %c | %c | %c\n\n", situacao_31, situacao_32, situacao_33);

    /*
    Parabenize o vencedor.
    */

    return EXIT_SUCCESS;
}
