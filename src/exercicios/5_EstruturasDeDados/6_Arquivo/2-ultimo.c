/**      @file: tipos/file/2-ultimo.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Dado um arquivo com N (número desconhecido) registros do
 * tipo registro_t, faça um programa que acessa, lê, e
 * mostra o último registro gravado. */

#include <stdio.h>

typedef struct {
    int codigo;
    char nome[30];
} registro_t;

int main() {
    /* fseek é a função adequada para este tipo de tarefa. */

    return 0;
}