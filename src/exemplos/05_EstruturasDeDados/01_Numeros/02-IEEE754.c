/**      @file: 02-IEEE754.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplificar da representação binária de reais (padrão IEE754). */

#include <stdio.h>
#include <string.h>

/* Mostra os bits do inteiro dado na saída padrão. */
void mostra_bits_de_int(int n) {
    int bits = 8*sizeof(int);
    unsigned int bitmask = 0x80000000;

    for(; bits; --bits, bitmask /= 2)
        putchar(n & bitmask ? '1' : '0');
}

/* Formata a exibição dos bits do inteiro dado. */
void mostra_bits_IEE754(int n) {
    float f;

    /* f = n;*/ /* implica que f recebe o valor armazenado em n, ou seja, os
                 * bits de n são lidos, interpretados como um inteiro de
                 * determinado valor. Este valor é então armazenado conforme o
                 * padrão IEEE754. A ideia deste exemplo é verificar o valor que
                 * a sequência de bits (definida por n) representa as ser
                 * interpretada como ponto flutuante. */

    memcpy(&f, &n, sizeof(f)); /* copia os bits de n em f. */

    printf("%f: ", f); /* mostra o valor de f */
    mostra_bits_de_int(n);     /* mostra os bits de n/f */
    putchar('\n');
}

int main() {
    mostra_bits_IEE754(0xBF400000);
    mostra_bits_IEE754(0x41200000);

    return 0;
}