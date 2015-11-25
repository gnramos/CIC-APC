/**      @file: 0-string.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente a função para_string, e conserte a função testa_com. */

#include <stdio.h>

/* Recebe um caractere c e o transforma em um string, ou seja, devolve um string
 * de comprimento 1 tendo c como único elemento. */
char *para_string(char c) {
    /* Alocação dinâmica de memória... */
}

void testa_com(char c) {
    char *string = para_string(c);
    printf("\t[%c] == [%s]\n", c, string);

    /* Esta função parece executar corretamente, mas falta uma parte *muito*
     * importante... */
}

int main() {
    printf("Todos os resultados deveriam ser iguais:\n");

    testa_com('@');
    testa_com('H');
    testa_com('e');
    testa_com('l');
    testa_com('l');
    testa_com('o');
    testa_com(',');
    testa_com(' ');
    testa_com('W');
    testa_com('o');
    testa_com('r');
    testa_com('l');
    testa_com('d');
    testa_com('!');

    return 0;
}