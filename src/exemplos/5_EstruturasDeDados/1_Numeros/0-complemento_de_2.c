/**      @file: 0-complemento_de_2.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de código para exemplificar a representação
 * binária de inteiros (complemento de 2). */

#include <stdio.h>

/* Mostra os bits do inteiro dado na saída padrão. */
void print_bits(int n) {
    int bit = 8*sizeof(int);
    unsigned int bitmask = 0x80000000;

    for(; bit; --bit) {
        if(n & bitmask) /* operação bit a bit */
            putchar('1');
        else
            putchar('0');

        bitmask /= 2;
    }
}

/* Formata a exibição dos bits do inteiro dado. */
void mostra_bits(int n) {
    printf("%4d: ", n);
    print_bits(n);
    putchar('\n');
}

int main() {
    int i;

    for(i = -5; i < 16; ++i)
        mostra_bits(i);

    return 0;
}