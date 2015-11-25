/**      @file: 1-estatica.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de alocação estática de memória. */

#include <stdio.h>

/* Definindo as unidades de medida. */
typedef     char byte;
typedef     byte kilobyte[1000];
typedef kilobyte megabyte[1000];
typedef megabyte gigabyte[1000];
typedef gigabyte terabyte[1000];
typedef terabyte petabyte[1000];

int main() {
  /* Estes espaços são alocados antes de iniciar a execução das instruções. */
  petabyte PB;

  PB[0][0][0][0][0] = '1';
  printf("byte 0 é %c.\n", PB[0][0][0][0][0]);

  /* O que acontece se não houver a quantidade de memória
   * requisitada disponível? Tente executar este código e
   * descubra... */

  /* Suponho que sua máquina não tem um PetaByte de memória
   * disponível. Se for o caso, aumente a quantidade de bytes
   * requisitada para forçar o "erro". */

    return 0;
}