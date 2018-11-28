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

#define SUBMARINO 0
#define PORTA_AVIOES 3

/***********
 * Funções *
 ***********/

/* Obtém as informações, da entrada padrão, de uma coordenada específica .
Retorna apenas coordenadas válidas. */
coordenada_t le_coordenada(char* nome_do_jogador, char* descricao_da_coordenada) {
    coordenada_t coord;
    do {
        printf("%s, digite as coordenadas do %s.\n",
               nome_do_jogador, descricao_da_coordenada);
        scanf("%d %d", &coord.X, &coord.Y);

        if ((1 <= coord.X) && (coord.X <= 15) &&
            (1 <= coord.Y) && (coord.Y <= 15))
            return coord;

        printf("Coordenada(s) inválida(s)!\n");
    } while (1);
}

/* Indica se as coordenadas são vizinhas ou não. */
int vizinhas(coordenada_t c1, coordenada_t c2) {
    return (1 == abs(c1.X - c2.X) + abs(c1.Y - c2.Y));
}

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

    int j, e, c, aux;
    int c1;
    embarcacao_t *embarcacao;
    for (j = 0; j < JOGADORES; ++j) {
        printf("Digite o nome do %do jogador (sem espaços): ", j + 1);
        scanf("%s", jogadores[j].nome);

        for (e = SUBMARINO; e <= PORTA_AVIOES; ++e) {
            embarcacao = &jogadores[j].armada[e];
            for (c = 0; c < embarcacao->tipo.tamanho; ++c) {
                embarcacao->coordenadas[c] = le_coordenada(jogadores[j].nome,
                                                           embarcacao->tipo.nome);

                for (aux = c; aux > 0; --aux) {
                    if (!vizinhas(embarcacao->coordenadas[aux],
                                  embarcacao->coordenadas[aux-1])) {
                        printf("Coordenada inválida, a embarcação as partes do "
                               "%s devem ser vizinhas!\n", embarcacao->tipo.nome);
                        return EXIT_FAILURE;
                    }
                }
            }

            for (aux = SUBMARINO; aux < e; ++aux) {
                for (c1 = 0; c1 < jogadores[j].armada[aux].tipo.tamanho; ++c1) {
                    for (c = 0; c < embarcacao->tipo.tamanho; ++c) {
    /*
                        Verifique a sobreposição entre as partes.
*/                  } /*
*/              } /*
*/          } /*
*/      } /*
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
