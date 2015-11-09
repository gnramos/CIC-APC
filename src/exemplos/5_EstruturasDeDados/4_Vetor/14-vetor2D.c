/**      @file: 14-vetor2D.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo uso de vetor de vetor. Avisos (warnings) quanto a tipos diferentes
 * para argumentos para a função mostra_matriz na são esperados compilação. */

#include "apc_vetor.h"

int main() {
  int vetor25[2][5];
  int vetor52[5][2];

  int i, j;

  for(i = 0; i < 2; ++i)
    for(j = 0; j < 5; ++j)
      vetor25[i][j] = 5*i + j;

  printf("Vetor25:\n");
  mostra_matriz_i(*vetor25, 2, 5);

  for(i = 0; i < 5; ++i)
    for(j = 0; j < 2; ++j)
      vetor52[i][j] = 2*5 - (2*i + j);

  printf("\nVetor52:\n");
  mostra_matriz_i(*vetor52, 5, 2);

  /* Um vetor é uma coleção de elementos homogêneos em posições contíguas na
   * memória, portanto um vetor de vetores é uma coleção de vetores contíguos na
   * memória... */
  printf("\nVetor25:");
  mostra_i(*vetor25, 2*5);

  printf("\nVetor52:");
  mostra_i(*vetor52, 5*2);

  printf("\n");

  return 0;
}