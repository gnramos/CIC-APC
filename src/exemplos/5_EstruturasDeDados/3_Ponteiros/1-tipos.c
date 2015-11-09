/**      @file: 1-tipos.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de uso de ponteiros. */

#include <stdio.h>
#include <ctype.h> /* tolower */

int main() {
  int      i = 10;
  char     c = 'A';
  float    f = 1.5;
  double   d = 3.14;
  int*    pi = &i;
  char*   pc = &c;
  float*  pf = &f;
  double* pd = &d;

  printf("i = %4d (pi = %p)\n", i, pi);
  printf("c = %4c (pc = %p)\n", c, pc);
  printf("f = %.2f (pf = %p)\n", f, pf);
  printf("d = %.2lf (pd = %p)\n", d, pd);

  (*(pi))++;
  (*(pc)) = tolower(*pc);
  (*pf) /= 3;
  *pd *= 2;

  printf("\ni = %4d (pi = %p)\n", i, pi);
  printf("c = %4c (pc = %p)\n", c, pc);
  printf("f = %.2f (pf = %p)\n", f, pf);
  printf("d = %.2lf (pd = %p)\n", d, pd);

  return 0;
}