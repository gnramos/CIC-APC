/**      @file: 05-texto.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso de arquivo texto. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  char arquivo[] = "apc.c.txt";
  const char string[29] = "disse o corvo, \"Nunca mais\".\n";
  FILE * fp = fopen(arquivo , "w+" );

  if(fp == NULL) {
    printf("Não foi possível abrir \"%s\".\n", arquivo);
    return EXIT_FAILURE;
  }

  fputs(string, fp);
  rewind(fp);  /* <- */
  fputc('D', fp);

  fclose(fp);

  return EXIT_SUCCESS;
}