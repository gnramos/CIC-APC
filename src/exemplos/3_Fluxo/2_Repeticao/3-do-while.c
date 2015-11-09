/**      @file: 3-do-while.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo do laço de repetição DO-WHILE. */

#include <stdio.h>

#define AGUA "Uma taça de vitamina de frutas e iogurte natural grego."
#define TERRA "Uma taça de suco de mamão e uma cesta com frutas da estação."
#define FOGO "Uma xícara de café preto e uma porção bem servidade ovos com bacon."
#define AR "Uma xícara de café preto."
#define CORACAO AGUA "\n" TERRA "\n" FOGO "\n" AR

void sirva(char* opcao) {
    printf("%s\n", opcao);
}

int main() {
    int resposta;

    printf("Bom dia! Qual tipo de café você deseja hoje?\n");

    do {
        printf("1: Água (vitamina de frutas e iogurte)\n");
        printf("2: Terra (suco de mamão, frutas frescas)\n");
        printf("3: Fogo (café preto, ovos & bacon)\n");
        printf("4: Ar (café preto)\n");
        printf("5: Coração! (todas as anteriores)\n");
        scanf("%d", &resposta); /* Atualização da condição de parada. */
    } while(1 > resposta || resposta > 5);

    switch(resposta) {
        case 1: sirva(AGUA);
                break;
        case 2: sirva(TERRA);
                break;
        case 3: sirva(FOGO);
                break;
        case 4: sirva(AR);
                break;
        case 5: sirva(CORACAO);
                break;
    }

    return 0;
}