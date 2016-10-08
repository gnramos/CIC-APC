/**      @file: 0-ponteiro.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso de ponteiros. */

#include <stdio.h>

int main() {
  char c = 'A';
  char* ptr = &c; /* Armazena o endereço de c */

  /* O conteúdo de c é: */
  printf("   c = %c\n", c);
  /* O conteúdo de ptr é: */
  printf(" ptr = %p\n", ptr);
  /* O conteúdo do endereço apontado por ptr é: */
  printf("*ptr = %c\n", *ptr);
  /* O endereço de ptr é: */
  printf("&ptr = %p\n", &ptr);

  return 0;
}