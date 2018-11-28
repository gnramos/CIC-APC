/**      @file: batalha_naval.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação do jogo "Batalha Naval". */

#include <stdio.h>
#include <stdlib.h>

/***********************
 * Estruturas de Dados *
 ***********************/

typedef struct {
    int X, Y;   /* Definem a posição em cada eixo. */
} coordenada_t; /* Define uma coordenada no campo de batalha. */

typedef struct {
    char nome[50]; /* Identifica a embarcação. */
    int tamanho;   /* Define o tamanho da embarcação. */
} tipo_t;          /* Define um tipo de embarcação. */

typedef struct {
    tipo_t tipo;                 /* Identifica a embarcação. */
    coordenada_t coordenadas[5]; /* Define a posição no campo de batalha. */
} embarcacao_t;                  /* Define uma embarcação. */

typedef struct {
    char nome[50];          /* Identifica o jogador. */
    embarcacao_t armada[4]; /* Define a armada. */
} jogador_t;                /* Define um jogador. */

/**********************
 * Constantes Globais *
 **********************/

#define JOGADORES 2

int main() {
    jogador_t jogadores[JOGADORES] = {{.armada={{.tipo={"Submarino", 2}},
                                                {.tipo={"Cruzador", 3}},
                                                {.tipo={"Destroyer", 4}},
                                                {.tipo={"Porta-aviões", 5}}}},
                                      {.armada={{.tipo={"Submarino", 2}},
                                                {.tipo={"Cruzador", 3}},
                                                {.tipo={"Destroyer", 4}},
                                                {.tipo={"Porta-aviões", 5}}}}};

    printf("*****************\n");
    printf("* BATALHA NAVAL *\n");
    printf("*****************\n\n");

    printf("Os jogadores alternam ataques até que todas as embarcações de um "
           "deles sejam completamente destruídas.\n\n");

    printf("Cada ataque é definido por 3 tiros em posições do campo oponente, "
           "acertar uma das embarcações destrói a parte alvejada.\n\n");

    printf("Após cada tiro, o oponente informa se houve acerto e qual a "
           "embarcação atingida.\n\n");

    printf("Bom jogo!\n");
    printf("*********\n\n");

    int j;
    for (j = 0; j < JOGADORES; ++j) {
        printf("Digite o nome do %do jogador (sem espaços): ", j + 1);
        scanf("%s", jogadores[j].nome);
    /*
        Para cada embarcação na armada do jogador:
            Para cada parte da embarcação:
                Leia a posição da parte.
                Para cada parte obtida da embarcação:
                    Verifique se a posição é válida.
            Para cada outra embarcação da armada:
                Para cada parte da outra embarcação:
                    Para cada parte da embarcação:
                        Verifique a sobreposição entre as partes.
*/  } /*

    Enquanto uma armada não for destruída:
        Defina o jogador do turno.
        Para cada ataque do jogador:
            Leia as coordenadas do tiro.
            Para cada embarcação da armada do oponente:
                Para cada parte da embarcação:
                    Se o tiro atingiu a parte e ela não está destruída:
                        Informe qual parte foi atingida.
                        Destrua a parte atingida.
                        Se a armada do oponente foi destruída:
                            Termine a batalha.

    Apresente o placar.
    Parabenize o vencedor.
    */

    return EXIT_SUCCESS;
}
