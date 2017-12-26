/**      @file: gdb.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de depuração. */

#include <stdio.h>

void setint(int* p, int i) {
   *p = i;
}

int main()  {
   int a;
   int* b;

   setint(&a, 10);
   printf("a = %d\n", a);

   printf("b = %p\n", b);
   setint(b, 10);
   printf("*b = %d\n", *b);

   return 0;
}
