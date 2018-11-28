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
                        printf("%s acertou o %s em (%d, %d).\n",
                               jogadores[j].nome,
                               embarcacao->tipo.nome,
                               tiro.X, tiro.Y);
                        embarcacao->coordenadas[c] = DESTRUIDA;
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
