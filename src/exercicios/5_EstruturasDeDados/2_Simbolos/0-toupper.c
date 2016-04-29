/**      @file: funcao/0-toupper.c
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

void testa_char(char c) {
	printf("toupper(%c) = %c\n", c, toupper(c));
}

int main() {
    testa_char('a'); /* Espera-se 'A' */
    testa_char('b'); /* Espera-se 'B' */
    testa_char('B'); /* Espera-se 'B' */
    testa_char('.'); /* Espera-se '.' */
    testa_char(' '); /* Espera-se ' ' */

    return 0;
}