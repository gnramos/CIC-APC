/**      @file: 02-main.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de funções que chamam funções. */

#include <stdio.h>
#include <stdlib.h>

int main(){
  int resultado;

  resultado = system("gcc -Wall -ansi 1-main.c -o teste");
  /* Assumindo que o processo terminou sem erros, deve-se usar a macro WEXITSTATUS.
  Mais detalhes em: http://stackoverflow.com/questions/808541/any-benefit-in-using-wexitstatus-macro-in-c-over-division-by-256-on-exit-statu */
  printf("Resultado de gcc: %d \n", WEXITSTATUS(resultado));

  if(resultado == EXIT_SUCCESS) {
    resultado = system("./teste");
    printf("Resultado da execução: %d\n", WEXITSTATUS(resultado));
  }

  return EXIT_SUCCESS;
}