/**      @file: 00-ascii.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Mostra o mapeamento de inteiros para caracteres ASCII. */

#include <stdio.h>

int main() {
    int i;

    for(i = 65; i <= 65+25; ++i)
        printf("%c: %i\n", (char) i, i);

    printf("\n");

    for (i = 97; i <= 97+25; ++i)
        printf("%c: %i\n", (char) i, i);

    return 0;
}