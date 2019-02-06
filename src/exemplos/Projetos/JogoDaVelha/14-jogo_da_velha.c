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

    /*
    Enquanto for possível marcar:
        Mostre a situação do jogo.
        Defina quem marca no turno.
        Repita até que as coordenadas sejam válidas:
        	Leia as coordenadas da marcação.
        Marque a posição.
        Se a marca completa uma linha de 3 marcas iguais:
            Termine o jogo.

    Mostre a situação do jogo.
    Parabenize o vencedor.
    */

    return EXIT_SUCCESS;
}
