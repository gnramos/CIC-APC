/**      @file: 2-bogo_sort.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Teste do desempenho do algoritmo Bogosort.
 *
 * Muito cuidado ao executar este programa, ele pode não terminar. */

#include <stdio.h>

#include "apc_ordenacao.h"

int main() {
  testa_ordenacao(bogosort);

  return 0;
}
