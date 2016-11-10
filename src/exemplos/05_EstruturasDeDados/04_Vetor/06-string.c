/**      @file: 06-string.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso de vetor de caracteres com caractere de término '?' */

#include "apc_vetor.h"

int main() {
  const int TAM = 50;
  char frase[TAM];

  printf("Digite um string: ");
  scanf("%[^\n]", frase);

  mostra_indices(TAM,"          ");
  /* Assume-se que o string termina
  em '.'. */
  mostra_ate_char(frase, '.');

  /* '.' é uma escolha infeliz, já que  é um caractere muito utilizado em
  strings. O ideal seria um caractere "inútil" (para comunicação com usuário). */

  return 0;
}