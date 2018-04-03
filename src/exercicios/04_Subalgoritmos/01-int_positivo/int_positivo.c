/**      @file: int_positivo.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente a função leia_inteiro_positivo. */

#include <stdio.h>

/* Retorna um valor inteiro lido da entrada padrão. */
int leia_inteiro() {
    int num;
    printf("Digite o número inteiro: ");
    scanf("%d", &num);
    return num;
}

/* Lê valor(es) da entrada padrão até receber um valor
 * inteiro positivo, que é retornado. */
int leia_inteiro_positivo() {
    /* Use a função leia_inteiro(). */
}

int main() {
    int N;

    scanf("%d", &N);

    while(N--)
        printf("Li %d\n", leia_inteiro_positivo());

    return 0;
}