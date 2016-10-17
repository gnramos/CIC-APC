/**      @file: 2-raiz2-1.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de código para aproximar o valor da raiz
 * quadrada de um número inteiro não negativo. */

#include <stdio.h>

int main() {
  int r, n;

  printf("Qual o valor de n?\n");
  scanf("%d", &n);

  if(n < 0) {
    printf("Não sei calcular a raiz de número negativo.\n");
  }
  else {
    printf("Qual sua estimativa para a raiz de %d?\n", n);
    scanf("%d", &r);

    if(r <= 0)
      printf("A raiz não pode ser menor que zero.\n");
    else {
      r = (r+(n/r))/2;
      r = (r+(n/r))/2;

      printf("A aproximação da raiz de %d é %d.\n", n, r);
    }
  }

  return 0;
}