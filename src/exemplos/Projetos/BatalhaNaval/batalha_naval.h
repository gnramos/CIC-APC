/**      @file: batalha_naval.h
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Estruturas de dados e funções utilizadas no jogo "Batalha Naval". */

#ifndef UNB_CIC_APC_BATALHA_NAVAL_H
#define UNB_CIC_APC_BATALHA_NAVAL_H

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

/* Indica se a embarcação foi completamente destruída. */
int afundou(embarcacao_t* embarcacao) {
    int c;
    for (c = 0; c < embarcacao->tipo.tamanho; ++c)
        if (!iguais(DESTRUIDA, embarcacao->coordenadas[c]))
            return 0;
    return 1;
}

/* Verifica se houve uma embarcação na armada atingida pelo tiro e, havendo,
destrói a parte alvejada. */
int atingiu(coordenada_t tiro, embarcacao_t* embarcacao, char* nome) {
    int c;
    for (c = 0; c < embarcacao->tipo.tamanho; ++c)
        if (iguais(tiro, embarcacao->coordenadas[c]) &&
            !iguais(DESTRUIDA, embarcacao->coordenadas[c])) {
            printf("%s %s o %s em (%d, %d).\n", nome,
                   (afundou(embarcacao) ? "destruiu" : "atingiu"),
                   embarcacao->tipo.nome, tiro.X, tiro.Y);
            embarcacao->coordenadas[c] = DESTRUIDA;
            return 1;
        }

    return 0;
}

/* Verifica se a armada foi atingida pelo tiro e, tendo sido, destrói a parte alvejada. */
int atingiu_armada(coordenada_t tiro, embarcacao_t* armada, char* atirador) {
    int e, c;
    for (e = SUBMARINO; e <= PORTA_AVIOES; ++e) {
        for (c = 0; c < armada[e].tipo.tamanho; ++c) {
            if (atingiu(tiro, &armada[e], atirador))
                return 1;
        }
    }
    return 0;
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

void escreve_as_regras() {
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

/* Recebe o nome do jogador da entrada padrão. */
void leia_nome(int ordem, char* nome) {
    printf("Digite o nome do %do jogador (sem espaços): ", ordem);
    scanf("%s", nome);
}

/* Indica o oponente do jogador . */
int oponente(int j) {
    return ((j + 1) % JOGADORES);
}

/* Verifica se as [coordenadas das] embarcações se sobrepõem. */
int sobrepoe(embarcacao_t* emb1, embarcacao_t* emb2) {
    int c1, c2;

    for(c1 = 0; c1 < emb1->tipo.tamanho; ++c1)
        for(c2 = 0; c2 < emb2->tipo.tamanho; ++c2)
            if (iguais(emb1->coordenadas[c1], emb2->coordenadas[c2]))
                return 1;
    return 0;
}

/* Indica se as coordenadas são vizinhas ou não. */
int vizinhas(coordenada_t c1, coordenada_t c2) {
    return (1 == abs(c1.X - c2.X) + abs(c1.Y - c2.Y));
}

/* Posiciona a embarcação indicada na armada do jogador. */
int posiciona(embarcacao_t *embarcacao, char* nome) {
    int c1, c2;
    for (c1 = 0; c1 < embarcacao->tipo.tamanho; ++c1) {
        embarcacao->coordenadas[c1] = le_coordenada(nome, embarcacao->tipo.nome);

        for (c2 = c1; c2 > 0; --c2) {
            if (!vizinhas(embarcacao->coordenadas[c2],
                          embarcacao->coordenadas[c2-1])) {
                printf("Coordenada inválida, a embarcação as partes do "
                       "%s devem ser vizinhas!\n", embarcacao->tipo.nome);
                return 0;
            }
        }
    }
    return 1;
}

/* Posiciona a armada do jogador. */
int posiciona_armada(jogador_t* jogador) {
    int e, aux;
    for (e = SUBMARINO; e <= PORTA_AVIOES; ++e) {
        if (!posiciona(&(jogador->armada[e]), jogador->nome))
            return EXIT_FAILURE;

        for (aux = SUBMARINO; aux < e; ++aux) {
            if (sobrepoe(&(jogador->armada[e]), &(jogador->armada[aux])))
               return EXIT_FAILURE;
        }
    }

    return 1;
}

#endif
