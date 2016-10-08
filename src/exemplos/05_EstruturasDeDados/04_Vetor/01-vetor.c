/**      @file: 1-vetor.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de equivalência de ponteiros. */

#include <stdio.h>

int main() {
  char v[] = "Lovelace";
  char* p = "Ada";

  printf("%s (%p)\n", v, v);
  printf("%s (%p)\n\n", p, p);

  /* "v"  é tipo 'vetor de 9 caracteres' */
  /* "&v" é tipo 'ponteiro para ponteiro de caractere' */
  printf(" sizeof(v) = %ld\n", sizeof(v));
  printf("sizeof(&v) = %ld\n\n", sizeof(&v));

  /* "p"  é tipo 'ponteiro para caractere' */
  /* "&p" é tipo 'ponteiro para ponteiro para caractere' */
  printf(" sizeof(p) = %ld\n", sizeof(p));
  printf("sizeof(&p) = %ld\n\n", sizeof(&p));

  return 0;
}