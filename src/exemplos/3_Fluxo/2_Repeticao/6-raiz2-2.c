/**      @file: repeticao/raiz2-2.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de código para aproximar o valor da raiz
 * quadrada de um número inteiro não negativo, com um laço
 * de repetição. */

#include <stdio.h>

int main() {
  int r, n, iteracoes, i;

  printf("Qual o valor de n?\n");
  scanf("%d", &n);

  if(n < 2) {
    if(n < 0)
      printf("Não sei calcular a raiz quadrada de número negativo.\n");
    else
      printf("A raiz quadrada de %d é %d.\n", n, n);
  }
  else {
    printf("Qual sua estimativa inicial para a raiz de %d?\n", n);
    scanf("%d", &r);
    printf("Quantas iterações?\n");
    scanf("%d", &iteracoes);

    if(r <= 0 || iteracoes < 0)
      printf("Raiz e/ou quantidade de iterações inválida(s).\n");
    else {
      do {
        r = (r+(n/r))/2;
        ++i;
      } while(i < iteracoes);

      printf("Depois de %d tentativas, a aproximação da raiz de %d é %d.\n", iteracoes, n, r);
    }
  }

  return 0;
}