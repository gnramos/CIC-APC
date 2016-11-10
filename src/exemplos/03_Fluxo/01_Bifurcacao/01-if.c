/**      @file: 01-if.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização dos condicionais com if. */

#include <stdio.h>

int main () {
    if(-1) {
        printf("Se entrou aqui, a condição é \"verdadeira\".\n");
        printf("Então -1 tem valor lógico \"verdadeiro\".\n");
    }
    else {
        printf("Se entrou aqui, a condição é \"falsa\".\n");
        printf("Então -1 tem valor lógico \"falso\".\n");
    }

    if(0) {
        printf("Se entrou aqui, a condição é \"verdadeira\".\n");
        printf("Então 0 tem valor lógico \"verdadeiro\".\n");
    }
    else {
        printf("Se entrou aqui, a condição é \"falsa\".\n");
        printf("Então 0 tem valor lógico \"falso\".\n");
    }

    if(1) {
        printf("Se entrou aqui, a condição é \"verdadeira\".\n");
        printf("Então 1 tem valor lógico \"verdadeiro\".\n");
    }
    else {
        printf("Se entrou aqui, a condição é \"falsa\".\n");
        printf("Então 1 tem valor lógico \"falso\".\n");
    }

    return 0; /* Não houve erro(s). */
}