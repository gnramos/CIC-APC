/**      @file: apc_vetor.h
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de funções comuns para vetores. */

#ifndef UNB_CIC_APC_VETOR_H
#define UNB_CIC_APC_VETOR_H

#include <stdio.h>

/* Exibe todos os elementos do vetor de
n elementos. */
void mostra_i(int *vetor, int n) {
    int i;

    printf("{%d", vetor[0]);
    for(i = 1; i < n; ++i)
        printf(", %d", vetor[i]);
    printf("}\n");
}

/* Mostra índices de cada posição para exibição de vetor de n
elementos. */
void mostra_indices(int n, char *prefixo) {
    int i;
    printf("%s ", prefixo);
    for(i = 1; i < n/10; ++i)
        printf("         %d", i);
    printf("\n%s", prefixo);
    for(i = 0; i < n; ++i)
        printf("%d", i%10);
    printf("\n");
}

/* Mostra os n primeiros caracteres da partir do endereço
dado. */
void mostra_n_chars(char* str, int n) {
    int i;
    printf("string = [");
    for(i = 0; i < n; ++i)
        putchar(str[i]);
    printf("]\n");
}

/* Mostra todos os caracteres até que seja encontrado o
caractere que indica o término do string. */
void mostra_ate_char(char *str, char termino) {
    int i = -1;
    printf("string = [");
    do {
        ++i;
        putchar(str[i]);
    } while(str[i] != termino);
    printf("]\n");

}

/* Exibe os elementos de um vetor 2D de forma "estruturada". */
void mostra_matriz_i(int *v, int linhas, int colunas) {
    int i;

    for(i = 0; i < linhas*colunas; i += colunas)
        mostra_i(v+i, colunas);
}

#endif /* UNB_CIC_APC_VETOR_H */