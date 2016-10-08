/**      @file: 9-fatorial.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação da função fatorial de forma iterativa e
 * recursiva. */

#include <stdio.h>

/* Retorna o valor do fatorial de n. */
int fatorial_i(int n) {
    int fat = 1;

    while(n > 1) {
        fat = n*fat;
        n = n - 1;
    }

    return fat;
}

/*Retorna o valor do fatorial de n. */
int fatorial_r(int n) {
    if(n < 2)
        return 1;

    return n*fatorial_r(n-1);
}

int main() {
    int n;
    for(n = 1; n < 14; ++n) {
        printf("fatorial_r(%d) -> %d =", n, fatorial_r(n));
        printf(" %d <- fatorial_i(%d)\n", fatorial_i(n), n);
        /* O que acontece se n >= 14? */
    }

    return 0;
}