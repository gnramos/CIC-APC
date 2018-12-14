/**      @file: 02-min.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de implementação de uma função. */

#include <stdio.h>

/*

 +-- Tipo de dado de retorno (devolvido a quem chamou a função)
 |
 +---------------------------------------------------------------------+
 |                                                                     |
 |   +-- Identificador da função.                                      |
 |   |                                                                 |
 |   |      +------+-- Argumentos. Valores a serem comparados. <-------+---+
 |   |      |      |                                                   |   |
 V   V      V      V                                                   |   |  */
int min(int x, int y) {                                            /*  |   |
  Uma função é um (sub)algoritmo completo, portanto segue as mesmas    |   |
  diretrizes de composição.                                            |   |
                                                                       |   |  */
  if (x < y)                                                       /*  |   |  */
    return x; /* --+                                               /*  |   |  */
  else        /*   +--> O valor armazenado na variável deve ser do     |   |  */
    return y; /* --+    mesmo tipo definido na assinatura da função ---+   |
                                                                           |
  "return" é uma instrução explicitando o valor a ser devolvido ao         |
  final da execução.                                                       |  */
}                                                                  /*      |
                                                                           |
Uma vez que a função foi definida, pode-se utilizá-la como desejado.       |
                                                                           |  */
int main() {                                                           /*  |  */
  int a, b; /*                    +----------+         Os valores que      |
                                  |          |         são fornecidos      |
                                  |  +-------+--+      para a função ------+  */
  for (a = 5; a > 0; --a)   /* ---+  |       |  |      são definidos          */
    for (b = 0; b < 5; ++b) /* ------+       V  V      aqui.                  */
      printf("min(%d, %d) = %d\n", a, b, min(a, b));   /*   ^
                                             |  |           |
                                             |  +-----------+
                                             +--------------+                 */

  return 0;
}