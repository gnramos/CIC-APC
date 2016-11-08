/**      @file: 04-escopo.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de escopos de variáveis locais e globais. */

#include <stdio.h>

int var_global;

/* Incrementa as variáveis "local" e "var_global". */
int incrementa(int local) {
  ++local;
  ++var_global;
  printf("incrementa: local = %d, var_global = %d\n", local, var_global);

  return local;
}

/* Duplica as variáveis "local" e "var_global". */
int duplica(int local) {
  local *= 2;
  var_global *= 2;
  printf("duplica: local = %d, var_global = %d\n", local, var_global);

  return local;
}

/* Incrementa e duplica as variáveis "local" e "var_global". */
int incrementa_e_duplica(int local) {
  local = incrementa(local);
  printf("INCREMENTA_e_duplica: local = %d, var_global = %d\n", local, var_global);
  local = duplica(local);
  printf("incrementa_e_DUPLICA: local = %d, var_global = %d\n", local, var_global);

  return local;
}

int main() {
  int local = 1;
  var_global = 1;

  printf("main: local = %d, var_global = %d\n\n", local, var_global);

  incrementa(local);
  printf("main: local = %d, var_global = %d\n\n", local, var_global);

  duplica(local);
  printf("main: local = %d, var_global = %d\n\n", local, var_global);

  incrementa_e_duplica(local);
  printf("main: local = %d, var_global = %d\n\n", local, var_global);

  return 0;
}