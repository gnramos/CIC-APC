/**      @file: 01-ascii.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Mostra o mapeamento de caracteres ASCII para inteiros. */

#include <stdio.h>

int main() {
    char c;

    for(c = 'A'; c <= 'Z'; ++c)
        printf("%c: %i\n", c, (int) c);

    printf("\n");

    for(c = 'a'; c <= 'z'; ++c)
        printf("%c: %i\n", c, (int) c);

    return 0;
}