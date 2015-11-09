/**      @file: 11-main.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de manipulação do valor de retorno de programas. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int resultado;

  resultado = system("gcc -Wall -ansi 10-main.c -o soma");
  /* Assumindo que o processo terminou sem erros, deve-se usar a macro WEXITSTATUS.
    Mais detalhes em:http://stackoverflow.com/questions/808541/any-benefit-in-using-wexitstatus-macro-in-c-over-division-by-256-on-exit-statu */
  printf("Resultado de gcc: %d \n", WEXITSTATUS(resultado));

  if(resultado == EXIT_SUCCESS) {
    resultado = system("./soma 50 -1 6 -47 2");
    printf("Resultado da soma: %d\n",WEXITSTATUS(resultado));
  }

  return EXIT_SUCCESS;
}