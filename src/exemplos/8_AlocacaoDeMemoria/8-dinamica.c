/**      @file: 8-dinamica.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de alocação dinâmica de memória. */

#include <stdio.h>
#include <stdlib.h>

typedef     char byte;
typedef     byte kilobyte[1000];
typedef kilobyte megabyte[1000];
typedef megabyte gigabyte[1000];
typedef gigabyte terabyte[1000];
typedef terabyte petabyte[1000];

int main(){
  int n = 1;
  /* Inicializar ponteiros é uma boa prática de programação. */
  petabyte *vetor = NULL;

  /* O que acontece se não houver a quantidade de memória
   * requisitada disponível? */
  vetor = malloc(n*sizeof(petabyte));

  /* Suponho que sua máquina não tem um PetaByte de memória
   * disponível. Se for o caso, aumente a quantidade de bytes
   * requisitada para forçar o "erro". */

  /* Enfim... */

  /* É fácil verificar: se for possível alocar a quantidade
   * requisitada, ela será alocada e o ponteiro indicará um
   * endereço de memória válido; se não for possível, basta
   * indicar isso atribuindo ao ponteiro um valor notoriamente
   * "inválido": o endereço 0 (NULL).*/

  if((vetor == NULL) && (!vetor) && (vetor == 0))
    /* Todas as condições são verdadeiras. */
    printf("Não há %d petabytes disponíveis.\n", n);
  else
    printf("Conseguiu alocar!\n");

  /* O programador é responsável pela memória. */
  if(vetor)
    free(vetor);
  vetor = NULL;

  return 0;
}