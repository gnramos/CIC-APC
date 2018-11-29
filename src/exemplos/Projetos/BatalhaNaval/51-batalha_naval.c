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

    int j, e, c, aux;
    embarcacao_t *embarcacao;
    coordenada_t tiro;
    for (j = 0; j < JOGADORES; ++j) {
        leia_nome(j + 1, jogadores[j].nome);

        for (e = SUBMARINO; e <= PORTA_AVIOES; ++e) {
            embarcacao = &jogadores[j].armada[e];
            if (!posiciona(embarcacao, jogadores[j].nome))
                return EXIT_FAILURE;

            for (aux = SUBMARINO; aux < e; ++aux) {
                if (sobrepoe(embarcacao, &jogadores[j].armada[aux]))
                   return EXIT_FAILURE;
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
    printf("Parabéns %s!\n", jogadores[j].nome);

    return EXIT_SUCCESS;
}
