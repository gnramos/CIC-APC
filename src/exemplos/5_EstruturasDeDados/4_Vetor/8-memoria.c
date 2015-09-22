/**      @file: 8-memoria.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de [mau] uso da memória. */

#include <stdio.h>

/* Lê uma quantidade indeterminada de caracteres da entrada padrão e tenta
armazená-los em um local de memória que não foi alocado para isso. */
void scanf_errado() {
    char* buffer;

    printf("Digite uma frase: ");
    scanf("%s", buffer);
    printf("Você digitou [%s]\n", buffer);
}

/* Lê uma quantidade indeterminada de caracteres da entrada padrão e tenta
armazená-los em um local de memória alocado para isso, mas que tem espaço
limitado. */
void scanf_vulneravel() {
    char buffer[50];

    printf("Digite uma frase: ");
    scanf("%s", buffer);
    printf("Você digitou [%s]\n", buffer);
}

/* Lê uma quantidade indeterminada de caracteres da entrada padrão e armazena os
50 primeiros em um local de memória alocado para isso. */
void scanf_seguro() {
    char buffer[51]; /* +1 para o caractere de término. */

    printf("Digite uma frase: ");
    scanf("%50[^\n]", buffer);
    printf("Você digitou [%s]\n", buffer);
}

int main() {
    /* scanf_errado(); */     /* Segmentation fault (core dumped) */
    /* scanf_vulneravel(); */ /* Pode funcionar (ou não). */
    scanf_seguro();

    return 0;
}