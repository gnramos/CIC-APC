/**      @file: subalgoritmos.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso da biblioteca com funcionalidades. */

#include "apc.h" /* Inclui a biblioteca. */

int main() {
  int i;

  printf("Agora é a hora: ");
  mostra_agora(); /* Função da biblioteca apc.h. */

  gera_numeros_aleatorios(); /* Função da apc.h. */

  for(i = 0; i < 5; ++i) {
    printf("Um número qualquer: %d\n", qualquer());     /* Função da apc.h */
    printf("Outro em [0,100):   %d\n", aleatorio(100)); /* Função da apc.h */
    printf("E mais um em [0,5): %d\n", aleatorio(5));   /* Função da apc.h */
  }

  return 0;
}