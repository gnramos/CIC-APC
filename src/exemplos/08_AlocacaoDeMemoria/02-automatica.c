/**      @file: 02-automatica.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de alocação automática de memória. */

#include <stdio.h>

/* Variável global para contar quantas bytes são alocados automaticamente a cada
chamada de função. */
int bytes = 0;

/* Calcula o fatorial do número dado. */
int fat(int n) {
  /* Contabiliza a memória alocada automaticamente. */
  printf("Alocação de %ld bytes de memória (fat).\n", sizeof(n));
  bytes += sizeof(n);

  return (n > 1 ? n*fat(n-1) : n);
}

/* Indica ao "nome" o resultado do fatorial de n. */
void F(char *nome, int n) {
  /* Contabiliza a memória alocada automaticamente. */
  printf("Alocação de %ld bytes de memória (F).\n", sizeof(n) + sizeof(nome));
  bytes += sizeof(n) + sizeof(nome);

  printf("Olá %s.\n", nome);
  printf("%d! = %d.\n", n, fat(n));
}

int main() {
  /* alocação estática */
  char alguem[20];

  printf("Digite um nome: ")
  scanf("%s", alguem);
  F(alguem, 3);

  return 0;
}