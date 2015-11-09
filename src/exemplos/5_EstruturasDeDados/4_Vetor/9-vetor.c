/**      @file: 9-vetor.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de equivalência de ponteiros. */

#include "apc_vetor.h"
#include "../3_Ponteiros/apc_ponteiro.h"

int main() {
    char v[] = "Lovelace";
    int b[5][10];

    /* "v"  é tipo 'vetor de 9 caracteres' */
    /* "&v" é tipo 'ponteiro para ponteiro de caractere' */
    printf(" sizeof(v) = %ld\n", sizeof(v));
    printf("sizeof(&v) = %ld\n\n", sizeof(&v));

    /* "b"  é tipo 'ponteiro para vetor de 5 vetores de 10 inteiros' */
    /* "&b" é tipo 'ponteiro para vetor de inteiros' */
    printf("sizeof(b) = %ld\n", sizeof(b));
    printf("sizeof(&b)= %ld\n\n", sizeof(&b));

    /* A aritmética depende to tipo. */
    printf("  v: %p\n", v);
    printf("v+1: %p (%ld bytes)\n\n", v+1, diff(v,v+1));
    printf("  b: %p\n", b);
    printf("b+1: %p (%ld bytes)\n\n",  b+1, diff(b,b+1));

    return 0;
}