/**      @file: 0-if.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização dos condicionais com if. */

#include <stdio.h>

int main () {
    if(0 == 0)
        printf("0 de fato é igual a 0.\n");

    if(0 == 1)
        printf("0 não é igual a 1, espero que esta mensagem nunca seja escrita...\n");

    if(0 < 1)
        printf("0 é menor que 1.\n");

    if(0 <= 1)
        printf("E 0 também é menor ou igual a 1.\n");

    if(0 > 1)
        printf("Mas 0 não é maior que 1.\n");

    if(0 >= 1)
        printf("Tampouco é maior ou igual a 1.\n");

    return 0; /* Não houve erro(s). */
}