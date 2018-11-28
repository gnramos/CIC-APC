/**      @file: batalha_naval.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação do jogo "Batalha Naval". */

#include "batalha_naval.h"

int main() {
    jogador_t jogadores[JOGADORES] = {{.armada={{.tipo={"Submarino", 2}},
                                                {.tipo={"Cruzador", 3}},
                                                {.tipo={"Destroyer", 4}},
                                                {.tipo={"Porta-aviões", 5}}}},
                                      {.armada={{.tipo={"Submarino", 2}},
                                                {.tipo={"Cruzador", 3}},
                                                {.tipo={"Destroyer", 4}},
                                                {.tipo={"Porta-aviões", 5}}}}};

    escreve_as_regras();

    int j, aux;
    coordenada_t tiro;
    for (j = 0; j < JOGADORES; ++j) {
        leia_nome(j + 1, jogadores[j].nome);
        if (!posiciona_armada(&jogadores[j]))
            return EXIT_FAILURE;
    }

    j = 1; /* 2o jogador. */
    int armada_destruida = 0;
    while (!armada_destruida) {
        j = oponente(j);

        for (aux = 0; (!armada_destruida) && aux < TIROS; ++aux) {
            tiro = le_coordenada(jogadores[j].nome, "tiro");

            if (atingiu_armada(tiro, jogadores[oponente(j)].armada, jogadores[j].nome))
                armada_destruida = destruida(jogadores[oponente(j)].armada);
        }
    }

    printf("\n%s (%d) x (%d), %s\n\n",
           jogadores[0].nome, destrocos(jogadores[1].armada),
           destrocos(jogadores[0].armada), jogadores[1].nome);
    printf("Parabéns %s!\n", jogadores[j].nome);

    return EXIT_SUCCESS;
}
