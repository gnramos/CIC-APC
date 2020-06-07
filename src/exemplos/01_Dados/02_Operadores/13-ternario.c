/**      @file: 13-ternario.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização do operador ternário. */

#include <stdio.h>

int main () {
    /* O operador ternário é uma forma compacta de seleção de um valor conforme
    uma condição. Ele lida com 3 componentes:

        condicao ? valor_se_verdadeiro : valor_se_falso

    A expressão pode ser lida como "condicao é verdadeira? Então retorne
    valor_se_verdadeiro. Senão, valor_se_falso." O programa avalia a condição
    e escolhe o valor de acordo com ela.

    Não há restrição quanto ao tipo de valor de retorno. */

    int i;
    double d;
    printf("Ternário:\n");

    i = 1;
    printf("    i = %d\n", i);

    /* Tipo int */
    i = (1 < 2 ? 1 : -1);
    printf("\"i = (1 < 2 ? 1 : -1);\" -> i = %d\n", i);
    i = (1 > 2 ? 1 : -1);
    printf("\"i = (1 > 2 ? 1 : -1);\" -> i = %d\n", i);

    /* Tipo char */
    printf("1 é maior que 2? Resposta: %c\n", 1 > 2 ? 'S' : 'N');
    printf("1 é menor que 2? Resposta: %c\n", 1 < 2 ? 'S' : 'N');

    printf("O teste é: %c\n", 1 ? 'V' : 'F');
    printf("O teste é: %c\n", 0 ? 'V' : 'F');

    /* Tipo double */
    d = ('S' == 's' ? 3.14 : 0);
    printf("'S' == 's'? Resposta: %lf\n", d);
    d = ('N' == 'N' ? 3.14 : 0);
    printf("'N' == 'N'? Resposta: %lf\n", d);

    return 0; /* Não houve erro(s). */
}