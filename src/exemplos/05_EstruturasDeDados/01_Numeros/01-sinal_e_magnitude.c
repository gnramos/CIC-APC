/**      @file: 01-sinal_e_magnitude.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de código para exemplificar a representação
 * binária de inteiros (sinal e magnitude). */

#include <stdio.h>

/* Mostra os bits do caractere dado na saída padrão. */
void print_bits(char n) {
    int bits = 8*sizeof(char);
    unsigned char bitmask = 0x80;

    for(; bits; --bits, bitmask /= 2)
        putchar(n & bitmask ? '1' : '0');
}


/* Mostra os bits do inteiro dado na saída padrão. */
void sinal_e_magnitude(char n) {
    int bit = 8*sizeof(char);
    int i, magnitude, valor_posicao;
    unsigned char bitmask = 0x80;

    valor_posicao = 1;
    for(i = 1; i < bit; ++i)
        valor_posicao *=2;

    /* O 1o bit indica o sinal: */
    putchar(n & bitmask ? '-' : '+');

    /* Demais bits indicam a magnitude. */
    magnitude = 0;
    do {
        --bit;
        bitmask /= 2;
		valor_posicao /=2;

        if(n & bitmask)
			magnitude += valor_posicao;

    } while(bit);

    printf("%d", magnitude);
}

/* Formata a exibição dos bits do caractere dado. */
void mostra_bits(char n) {
    print_bits(n);
    printf(" = ");
    sinal_e_magnitude(n);
    putchar('\n');
}

int main() {
    mostra_bits(-127);
    mostra_bits(-126);
    mostra_bits(-2);
    mostra_bits(-1);
    mostra_bits(0);
    mostra_bits(1);
    mostra_bits(2);
    mostra_bits(126);
    mostra_bits(127);
    mostra_bits(128);

    return 0;
}