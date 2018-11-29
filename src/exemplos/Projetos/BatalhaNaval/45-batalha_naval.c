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

#define TIROS 3

const coordenada_t DESTRUIDA = {0, 0}; /* Indica uma parte de embarcação que já
                                          foi destruída. */

/***********
 * Funções *
 ***********/

/* Indica se as coordenadas fornecidas são iguais. */
int iguais(coordenada_t c1, coordenada_t c2) {
    return ((c1.X == c2.X) && (c1.Y == c2.Y));
}

/* Retorna a quantidade de destroços na armada. */
int destrocos(embarcacao_t* armada) {
    int e, c, partes_destruidas = 0;
    for (e = SUBMARINO; e <= PORTA_AVIOES; ++e)
        for (c = 0; c < armada[e].tipo.tamanho; ++c)
            if (iguais(DESTRUIDA, armada[e].coordenadas[c]))
                ++partes_destruidas;
    return partes_destruidas;
}

/* Indica se a armada do jogador foi totalmente destruída. */
int destruida(embarcacao_t* armada) {
    int e, c;
    for (e = SUBMARINO; e <= PORTA_AVIOES; ++e)
        for (c = 0; c < armada[e].tipo.tamanho; ++c)
            if (!iguais(DESTRUIDA, armada[e].coordenadas[c]))
                return 0;
    return 1;
}

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

/* Indica o oponente do jogador . */
int oponente(int j) {
    return ((j + 1) % JOGADORES);
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
    coordenada_t tiro;
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
                        if (iguais(jogadores[j].armada[aux].coordenadas[c1],
                                   embarcacao->coordenadas[c])) {
                            printf("Coordenada inválida, o %s não pode se "
                                   "sobrepor ao %s!\n",
                                   embarcacao->tipo.nome,
                                   jogadores[j].armada[aux].tipo.nome);
                            return EXIT_FAILURE;
                        }
                    }
                }
            }
        }
    }

    j = 1; /* 2o jogador. */
    int armada_destruida = 0;
    while (!armada_destruida) {
        j = oponente(j);

        for (aux = 0; (!armada_destruida) && aux < TIROS; ++aux) {
            tiro = le_coordenada(jogadores[j].nome, "tiro");

            for (e = SUBMARINO; (!armada_destruida) && e <= PORTA_AVIOES; ++e) {
                embarcacao = &jogadores[oponente(j)].armada[e];
                for (c = 0; (!armada_destruida) && c < embarcacao->tipo.tamanho; ++c) {
                    if (iguais(tiro, embarcacao->coordenadas[c]) &&
                        !iguais(DESTRUIDA, embarcacao->coordenadas[c])) {
                        embarcacao->coordenadas[c] = DESTRUIDA;
                        printf("%s acertou o %s em (%d, %d).\n",
                               jogadores[j].nome,
                               embarcacao->tipo.nome,
                               tiro.X, tiro.Y);
                        armada_destruida = destruida(jogadores[oponente(j)].armada);
                    }
                }
            }
        }
    }

    printf("\n%s (%d) x (%d), %s\n\n",
           jogadores[0].nome, destrocos(jogadores[1].armada),
           destrocos(jogadores[0].armada), jogadores[1].nome);

    /*
    Parabenize o vencedor.
    */

    return EXIT_SUCCESS;
}
