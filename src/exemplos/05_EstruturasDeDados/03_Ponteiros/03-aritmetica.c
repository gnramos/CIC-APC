/**      @file: 02-aritmetica.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de aritmética de ponteiros. */

#include <stdio.h>

#include "apc_ponteiro.h"

int main() {
    char c = 'a';
    int i = 13;
    double d = 1.337;

    char *ptr_c = &c;
    int *ptr_i = &i;
    double *ptr_d = &d;

    /* A aritmética depende to tipo. */
    printf("    ptr_c: %p\n", ptr_c);
    printf("  ptr_c+1: %p", ptr_c+1);
    printf(" (%ld bytes)\n\n", diff(ptr_c, ptr_c+1));
    printf("     ptr_i: %p\n", ptr_i);
    printf("   ptr_i+1: %p", ptr_i+1);
    printf(" (%ld bytes)\n\n", diff(ptr_i, ptr_i+1));
    printf("  ptr_d: %p\n", ptr_d);
    printf("ptr_d+1: %p", ptr_d+1);
    printf(" (%ld bytes)\n\n", diff(ptr_d, ptr_d+1));

    return 0;
}