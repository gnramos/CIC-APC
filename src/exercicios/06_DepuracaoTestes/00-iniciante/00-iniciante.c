/**      @file: 00-iniciante.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de erro simples para depuração.
 *
 * Baseado no livro "The Practice of Programming", de Brian
 * W. Kernighan e Rob Pike (Addison-Wesley, 1999). */

#include <stdio.h>

int main() {
  int n;

  printf("Digite um número: ");
  scanf("%d", n);
  printf("Você digitou: %d", n);

  return 0;
}
