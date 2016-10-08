/**      @file: 7-dinamica.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de alocação dinâmica de memória. */

#include <stdio.h>
#include <stdlib.h>

int le_int_entre(int inf, int sup) {
  int n;

  do {
    printf("Digite o número de elementos (entre %d e %d): ", inf, sup);
    scanf("%d", &n);
  } while(inf > n || n > sup);

  return n;
}

int main(){
  /* Inicializar ponteiros é uma boa prática de programação. */
  float *vetor = NULL;
  int i, n = le_int_entre(1, 10);

  /* Requisição da quantidade de memória adequada. */
  vetor = malloc(n*sizeof(float));
  if(!vetor) {
    printf("Não foi possível alocar memória.\n");
    return EXIT_FAILURE;
  }

  printf("Digite os %d elementos: ", n);
  for(i=0; i < n; i++)
    scanf("%f", vetor+i);

  printf("\nVetor: [ ");
  for(i=0; i < n; i++)
    printf("%f ", vetor[i]);
  printf("]\n");

  /* O programador é responsável pela memória. */
  free(vetor);
  vetor = NULL;

  return 0;
}