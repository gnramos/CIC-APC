/**      @file: 0-gdb_sigsev.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de falha de segmentação para uso do gdb. Veja as diferenças nas
 * mensagens de erro com uma compilação simples ("gcc -ansi -Wall"), e após uma
 * análise com o gdb  (não se esqueça de compilar para depurar:
 * "gcc -ansi -Wall -g") */

#include <stdio.h>

int main() {
  int *ptr = NULL, i = 5;

  ++i;

  /* O erro é claro: ler de um endereço de memória inválido. */
  printf("\n i = %d\n", *ptr);

  return 0;
}
