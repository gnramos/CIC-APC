/**      @file: alocacao/dinamica-3.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de alocação dinâmica de memória. */

#include <stdio.h>
#include <stdlib.h>

typedef char     kilobyte[1000];
typedef kilobyte megabyte[1000];
typedef megabyte gigabyte[1000];
typedef gigabyte terabyte[1000];
typedef terabyte petabyte[1000];

int main(void){
  /* Inicializar ponteiros é uma boa prática de programação. */
  megabyte *mega = NULL;
  petabyte *peta = NULL;

  /* Espero ser possível alocar um MegaByte. */
  mega = malloc(sizeof(megabyte));

  if(!mega) {
    printf("Não há 1 MB disponível.\n");
    return EXIT_FAILURE;
  }

  /* Mas e se ao longo do processo for necessária mais
   * memória que o disponível? */
  peta = malloc(sizeof(petabyte));

  if(!peta) {
    printf("Não há 1 PB disponível.\n");

    /* O PROGRAMADOR É RESPONSÁVEL PELA MEMÓRIA! */
    free(mega);
    mega = NULL;

    return EXIT_FAILURE;
  }

  /* Processos com a memória alocada... */

  /* O programador é responsável pela memória. */
  free(peta);
  peta = NULL;
  free(mega);
  mega = NULL;

  return 0;
}