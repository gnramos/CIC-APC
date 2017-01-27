/**      @file: gdb.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de erro de aritmética para uso do gdb. Veja as diferenças nas
 * mensagens de erro com uma compilação simples ("gcc -ansi -Wall"), e após uma
 * análise com o gdb  (não se esqueça de compilar para depurar:
 * "gcc -ansi -Wall -g") */

#include <stdio.h>

int divisao(int x, int y) {
	return (x / y);
}

int main() {
  int x = 5;
  int y = 2;
  printf("%d/%d = %d\n", x, y, divisao(x, y));

  x = 0;
  printf("%d/%d = %d\n", x, y, divisao(x, y));

  x = 5;
  y = 0;
  printf("%d/%d = %d\n", x, y, divisao(x, y));

  return 0;
}
