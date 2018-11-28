/**      @file: batalha_naval.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação do jogo "Batalha Naval". */

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

int main() {
    /*
    armada -> [embarcação]               | vetor de embarcações

    jogador -> nome, armada (embarcações (tipo (nome, tamanho),
                                          partes (coordenadas)))

    Definição das estruturas de dados.
    Inicialização das estruturas de dados.

    Escreva as regras do jogo.
    Para cada jogador:
        Leia o nome do jogador.
        Para cada embarcação na armada do jogador:
            Para cada parte da embarcação:
                Leia a posição da parte.
                Para cada parte obtida da embarcação:
                    Verifique se a posição é válida.
            Para cada outra embarcação da armada:
                Para cada parte da outra embarcação:
                    Para cada parte da embarcação:
                        Verifique a sobreposição entre as partes.

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
