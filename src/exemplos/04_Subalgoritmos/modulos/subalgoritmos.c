/**      @file: subalgoritmos.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso do módulo com funcionalidades. */

#include "apc.h" /* Inclui o módulo */

int main() {
  int i;

  printf("Agora é a hora: ");
  mostra_agora(); /* Função do módulo */

  gera_numeros_aleatorios(); /* Função do módulo */

  for(i = 0; i < 5; ++i) {
    printf("  Um número qualquer: %d\n", qualquer());     /* Função do módulo */
    printf("  Outro em [0,100):   %d\n", aleatorio(100)); /* Função do módulo */
    printf("  E mais um em [0,5): %d\n", aleatorio(5));
  }

  return 0;
}