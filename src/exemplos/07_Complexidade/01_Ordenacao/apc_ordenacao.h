/**      @file: apc_ordenacao.h
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de funções de ordenação. */

#ifndef UNB_CIC_APC_ORDENACAO_H
#define UNB_CIC_APC_ORDENACAO_H

#include "../../5_EstruturasDeDados/4_Vetor/apc_vetor.h"

int comparacoes_na_ordenacao; /* Variável global para contar a quantidade de
                 comparações realizadas em uma função de busca.
                 Veja a função testa_ordenacao. */

int trocas_na_ordenacao; /* Variável global para contar a quantidade de trocas
              realizadas em uma função de busca. Veja a função
              testa_ordenacao. */

/* Retorna 1 se a <= b, 0 caso contrário. */
int crescente(int a, int b) {
  ++comparacoes_na_ordenacao;
  return (a <= b ? 1 : 0);
}

/* Troca os conteúdos dos inteiros. */
void troca(int* a, int* b) {
  ++trocas_na_ordenacao;

  int aux = *a;
  *a = *b;
  *b = aux;
}

/*******************************************************************************
 * Bogosort
 ******************************************************************************/

/* Retorna 1 se o vetor de n elementos está em ordem crescente, 0 caso
contrário. */
int ordenado(int* vetor, int n) {
  while(--n)
    if(!crescente(vetor[n-1], vetor[n]))
    return 0;
  return 1;
}

/* Rearranja os n elementos do vetor em ordem aleatória. */
void embaralha(int* vetor, int n) {
  int i, vezes = rand()%n;

  for(i = 0; i < vezes; ++i)
    troca(vetor + i, vetor + (rand()%n));
}

/* Ordena os elementos do vetor em ordem crescente. */
void bogosort(int* vetor, int n) {
  while(!ordenado(vetor, n))
    embaralha(vetor, n);
}

/*******************************************************************************
 * Bubblesort
 ******************************************************************************/

/* Ordena os elementos do vetor em ordem crescente. */
void bubble_sort1(int* vetor, int n) {
  int i, j;

  for(i = 0; i < n; ++i)
    for(j = i + 1; j < n; ++j)
      if(!crescente(vetor[i], vetor[j]))
        troca(vetor + i, vetor + j);
}

/* Ordena os elementos do vetor em ordem crescente. */
void bubble_sort2(int* vetor, int n) {
  int i, houve_troca;

  do {
    houve_troca = 0;
    for(i = 0; i < n-1; ++i)
      if(!crescente(vetor[i], vetor[i+1])) {
        troca(vetor + i, vetor + i + 1);
        houve_troca = 1;
      }
  } while(houve_troca);
}

/*******************************************************************************
 * Selection Sort
 ******************************************************************************/

/* Ordena os elementos do vetor em ordem crescente. */
void selection_sort(int* vetor, int n) {
  int i, j, minimo;

  for(i = 0; i < n; ++i) {
    minimo = i;
    for(j = i+1; j < n; ++j)
      if(!crescente(vetor[minimo], vetor[j]))
        minimo = j;
    if(minimo != i)
      troca(vetor + i, vetor + minimo);
  }
}

/*******************************************************************************
 * Insertion Sort
 ******************************************************************************/

/* Ordena os elementos do vetor em ordem crescente. */
void insertion_sort(int* vetor, int n) {
  int i, j;

  for(i = 1; i < n; ++i) {
    j = i;
    while(j > 0 && !crescente(vetor[j-1], vetor[j])) {
      troca(vetor + j-1, vetor + j);
      --j;
    }
  }
}

/* Testa a ordenação de vetores com elementos em disposições
distintas utilizando a função dada. */
void testa_ordenacao(void (*ordena)(int *, int)) {

  /* Realiza a ordenação do vetor de n elementos com a
  função dada, indicando o resultado e os custos
  envolvidos. */
  void testa(void (*ordena)(int *, int), int *vetor, int n) {
    comparacoes_na_ordenacao = 0;
    trocas_na_ordenacao = 0;

    printf("     Original: ");
    mostra_i(vetor, n);
    ordena(vetor, n);
    printf("  Ordem crescente: ");
    mostra_i(vetor, n);
    printf("(%d trocas, %d comparações)\n\n", trocas_na_ordenacao, comparacoes_na_ordenacao);
  }

  const int n = 10;
  int vetor_aleatorio[] = {1,2,1,4,8,7,6,5,10,9};
  int vetor_em_ordem[] = {1,1,2,4,5,6,7,8,9,10};
  int vetor_em_ordem_inversa[] = {10,9,8,7,6,5,4,2,1,1};

  testa(ordena, vetor_aleatorio, n);
  testa(ordena, vetor_em_ordem, n);
  testa(ordena, vetor_em_ordem_inversa, n);
}

#endif /* UNB_CIC_APC_ORDENACAO_H */
