/**      @file: 00-while.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo do laço de repetição WHILE. */

#include <stdio.h>

#define PICANHA "free(B01)"

void sirva(char* opcao) {
  printf("Servindo %s.\n\n", opcao);
}

int main() {
  char resposta = 'n';

  printf("Bem-vindo ao rodízio!\n");

  while(resposta == 'n' || resposta == 'N') {
    sirva(PICANHA);

    printf("Satisfeito?\n");
    scanf(" %c", &resposta); /* <--  Atualização da      */
  }                          /*      condição de parada. */

  return 0;
}