/**      @file: 10-main.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de um programa que soma inteiros dados como
 * argumentos na linha de comando. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  /* Assume que todos os argumentos são inteiros. */

  int i, soma = 0;
  for(i = 1; i < argc; ++i)
    soma += atoi(argv[i]);

  return soma;
}