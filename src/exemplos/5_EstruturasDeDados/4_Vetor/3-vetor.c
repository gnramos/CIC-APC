/**      @file: 3-vetor.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo uso de vetor como argumento de função e de ponteiro
 * para função. */

#include "apc_vetor.h"

#define TAM 10

int crescente(int a, int b) { return (a < b); }
int decrescente(int a, int b) { return (a > b); }

/* Aplica a função de comparação dada em todos os elementos
 * do vetor, alterando suas posições de modo que fique
 * ordenado. */
void ordena(int vetor[TAM], int (*em_ordem)(int, int)) {
    int i, j;
    for(i = 0; i < TAM; ++i)
        for(j = i + 1; j < TAM; ++j)
            if(!em_ordem(vetor[i], vetor[j]))
                troca_i(vetor+i, vetor+j);
}

int main() {
    int vetor[] = {1,2,1,4,8,7,6,5,10,9};

    printf("         Original: ");
    mostra_i(vetor, TAM);

    ordena(vetor, crescente);
    printf("  Ordem crescente: ");
    mostra_i(vetor, TAM);

    ordena(vetor, decrescente);
    printf("Ordem decrescente: ");
    mostra_i(vetor, TAM);

    return 0;
}