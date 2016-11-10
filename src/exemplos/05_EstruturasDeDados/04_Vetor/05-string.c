/**      @file: 05-string.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso de vetor de caracteres. */

#include "apc_vetor.h"

int main() {
  const int TAM = 50;
  char string[TAM];

  printf("Digite um string: ");

  /* Lê o string, limitando a 50 símbolos. */
  scanf("%50[^\n]", string);

  /* Mostra os índices do vetor de caracteres
   para facilitar a visualização de seu
   conteúdo. */
  mostra_indices(TAM, "          ");
  mostra_n_chars(string, 50);

  return 0;
}