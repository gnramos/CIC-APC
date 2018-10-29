/**      @file: 04-aritmetica.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de aritmética de ponteiros. */

#include <stdio.h>

#include "apc_ponteiro.h"

int main() {
    char c1 = 'a', c2 = 'b', c3 = 'c', c4 = 'd';
    int i1 = 42, i2 = 144;

    char *ptr_c = &c1;
    int *ptr_i = &i1;

    /* É interessante verificar os endereços e seus respectivos conteúdos. */
    printf("Exemplo 1:\n");
    printf("       &c1: %p |     c1: %c\n", &c1, c1);
    printf("     ptr_c: %p | *ptr_c: %c\n\n", ptr_c, *ptr_c);
    printf(" Entre ptr_c e &c1, tem-se %ld byte.\n\n\n", diff(&c1, ptr_c));

    /* Se considerar ptr_c + 1, tem-se: */
    printf("Exemplo 2:\n");
    printf("       &c1: %p |           c1: %c\n", &c1, c1);
    printf("       &c2: %p |           c2: %c\n", &c2, c2);
    printf(" ptr_c + 1: %p | *(ptr_c + 1): %c\n\n", ptr_c + 1, *(ptr_c + 1));
    printf(" Entre ptr_c + 1 e ptr_c, tem-se %ld byte.\n", diff(ptr_c, ptr_c + 1));
    printf(" Entre ptr_c + 1 e &c2, tem-se %ld byte.\n\n\n", diff(&c2, ptr_c + 1));

    /* Também é possível mudar diretamente a variável: */
    printf("Exemplo 3:\n");
    ptr_c +=2;
    printf("       &c1: %p |     c1: %c\n", &c1, c1);
    printf("       &c2: %p |     c2: %c\n", &c2, c2);
    printf("       &c3: %p |     c3: %c\n", &c3, c3);
    printf("     ptr_c: %p | *ptr_c: %c\n\n", ptr_c, *ptr_c);
    printf(" Entre ptr_c e &c1, tem-se %ld bytes.\n", diff(&c1, ptr_c));
    printf(" Entre ptr_c e &c2, tem-se %ld byte.\n", diff(&c2, ptr_c));
    printf(" Entre ptr_c e &c3, tem-se %ld byte.\n\n\n", diff(&c3, ptr_c));

    /* Também é possível mudar diretamente a variável: */
    printf("Exemplo 4:\n");
    ++ptr_c;
    printf("       &c1: %p |     c1: %c\n", &c1, c1);
    printf("       &c2: %p |     c2: %c\n", &c2, c2);
    printf("       &c3: %p |     c3: %c\n", &c3, c3);
    printf("       &c4: %p |     c4: %c\n", &c4, c4);
    printf("     ptr_c: %p | *ptr_c: %c\n\n", ptr_c, *ptr_c);
    printf(" Entre ptr_c e &c1, tem-se %ld bytes.\n", diff(&c1, ptr_c));
    printf(" Entre ptr_c e &c2, tem-se %ld bytes.\n", diff(&c2, ptr_c));
    printf(" Entre ptr_c e &c3, tem-se %ld bytes.\n", diff(&c3, ptr_c));
    printf(" Entre ptr_c e &c4, tem-se %ld byte.\n\n\n", diff(&c4, ptr_c));

    /* Inteiros funcionam da mesma forma. */
    printf("Exemplo 5:\n");
    printf("       &i1: %p |     i1: %d\n", &i1, i1);
    printf("     ptr_i: %p | *ptr_i: %d\n\n", ptr_i, *ptr_i);
    printf(" Entre ptr_i e &i1, tem-se %ld byte.\n\n\n", diff(&i1, ptr_i));

    printf("Exemplo 6:\n");
    ++ptr_i;
    printf("       &i1: %p |           i1: %d\n", &i1, i1);
    printf("       &i2: %p |           i2: %d\n", &i2, i2);
    printf("     ptr_i: %p |       *ptr_i: %d\n\n", ptr_i, *ptr_i);
    printf(" Entre ptr_i e &i1, tem-se %ld bytes.\n", diff(&i1, ptr_i));
    printf(" Entre ptr_i e &i2, tem-se %ld byte.\n\n\n", diff(&i2, ptr_i));

    /* Mas a interpretação dos bits depende do TIPO do ponteiro! */
    printf("Exemplo 7:\n");
    ++ptr_c;
    printf("       &i1: %p |     i1: %d\n", &i1, i1);   /* i1 é um NÚMERO INTEIRO */
    printf("     ptr_c: %p | *ptr_c: %c\n", ptr_c, *ptr_c); /* ptr_c é um ponteiro para CARACTERE */
    printf(" Entre ptr_c e &i1, tem-se %ld byte.\n\n\n", diff(&i1, ptr_c));
    /* A máquina não sabe a diferença, simplesmente executa o que lhe foi dado:
    "interprete como caractere o conteúdo existente no endereço armazenado por ptr_c". */

    printf("Exemplo 8:\n");
    ptr_i -= 2;
    printf("       &c1: %p |     c1: %c\n", &c1, c1);   /* c1 é um CARACTERE */
    printf("     ptr_i: %p | *ptr_i: %d\n", ptr_i, *ptr_i); /* ptr_i é um ponteiro para INTEIRO */
    printf(" Entre ptr_i e &c1, tem-se %ld byte.\n\n\n", diff(&c1, ptr_i));
    /* A máquina não sabe a diferença, simplesmente executa o que lhe foi dado:
    "interprete como inteiro o conteúdo existente no endereço armazenado por ptr_i". */
    return 0;
}