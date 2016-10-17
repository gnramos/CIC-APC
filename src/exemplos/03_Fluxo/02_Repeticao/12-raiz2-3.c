/**      @file: 12-raiz2-3.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de código para aproximar o valor da raiz
 * quadrada de um número real não negativo, com aproximação
 * pelo método babilônico. */

#include <stdio.h>
#include <stdlib.h> /* Define a função abs */

int main() {
  int  n, r = 1, tentativas = 0;

  printf("Qual o valor de n?\n");
  scanf("%d", &n);

  if(n < 0)
    printf("Não sei calcular a raiz de número negativo.\n");
  else {
    while(abs(r*r - n) > r) {
      r = (r+(n/r))/2;
      ++tentativas;
    }

    printf("Depois de %d tentativas, a aproximação da raiz de %d é %d.\n", tentativas, n, r);
  }
  return 0;
}