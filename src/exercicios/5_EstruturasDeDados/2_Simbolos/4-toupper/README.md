/**      @file: funcao/4-toupper.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente a função toupper. */

#include <stdio.h>

/* Recebe um caractere e retorna a versão maiúscula deste, se
 * houver, o próprio caractere caso contrário. */
char toupper(char c) {
/* É uma boa ideia olhar a tabela ASCII... */

}

int main() {
    char c;

    c = 'a', printf("toupper(%c) = %c\n", c, toupper(c));
    c = 'b', printf("toupper(%c) = %c\n", c, toupper(c));
    c = 'B', printf("toupper(%c) = %c\n", c, toupper(c));
    c = '.', printf("toupper(%c) = %c\n", c, toupper(c));
    c = ' ', printf("toupper(%c) = %c\n", c, toupper(c));

    return 0;
}