/**      @file: 4-intermediario.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de código para depuração. Há alguns problemas, tente encontrá-los e
 * consertá-los. */

#include <stdio.h>

int um(int *x) {
    cabum();
    return (*x)/(*x);
}

int dois(int x) {
    x = 0;
    return 1 + um(&x);
}

int soma_tres(int *x) {
    *x += um(x) + dois(*x);
}

void cabum() {
    int *ptr = NULL;
    *ptr = 5;
}

int main() {
    int x = 2;

    soma_tres(&x);
    printf("x = %d\n", x);

    return 0;
}
