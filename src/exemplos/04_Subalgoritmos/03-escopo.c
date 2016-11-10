/**      @file: 03-escopo.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de escopos de variáveis locais. */

#include <stdio.h>

/* Troca os valores de x e y no escopo local. */
void troca(int x, int y) {
  int aux = x;
  x = y;
  y = aux;

  printf("troca: (x,y) = (%d,%d)\n", x, y);
}

int main() {
    int x = 1;
    int y = 2;

    printf("(x,y) = (%d,%d)\n", x, y);
    printf("Trocando... ");
    troca(x, y);
    printf("Trocou!\n");
    printf("(x,y) = (%d,%d)\n", x, y);

  return 0;
}