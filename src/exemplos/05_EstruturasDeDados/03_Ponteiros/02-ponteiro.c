/**      @file: 02-ponteiro.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de aritmética de ponteiros. */

#include <stdio.h>

#include "apc_ponteiro.h"

int main() {
    char chars[10];
    int ints[10];
    double doubles[10];

    /* "chars"  é tipo 'ponteiro para caractere' */
    /* "&chars" é tipo 'ponteiro para vetor de 10 char' */
    printf(" sizeof(chars) = %ld\n", sizeof(chars));
    printf("sizeof(&chars) = %ld\n\n", sizeof(&chars));

    /* "ints"  é tipo 'ponteiro para caractere' */
    /* "&ints" é tipo 'ponteiro para vetor de 10 int' */
    printf(" sizeof(ints) = %ld\n", sizeof(ints));
    printf("sizeof(&ints) = %ld\n\n", sizeof(&ints));

    /* "doubles"  é tipo 'ponteiro para caractere' */
    /* "&doubles" é tipo 'ponteiro para vetor de 10 double' */
    printf(" sizeof(doubles) = %ld\n", sizeof(doubles));
    printf("sizeof(&doubles) = %ld\n\n", sizeof(&doubles));

    /* A aritmética depende to tipo. */
    printf("    chars: %p\n", chars);
    printf("  chars+1: %p", chars+1);
    printf(" (%ld bytes)\n\n", diff(chars, chars+1));
    printf("     ints: %p\n", ints);
    printf("   ints+1: %p", ints+1);
    printf(" (%ld bytes)\n\n", diff(ints, ints+1));
    printf("  doubles: %p\n", doubles);
    printf("doubles+1: %p", doubles+1);
    printf(" (%ld bytes)\n\n", diff(doubles, doubles+1));

    return 0;
}