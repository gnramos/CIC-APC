/**      @file: apc_subalgoritmos.h
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de módulo com funcionalidades. */

#ifndef UNB_CIC_APC_SUBALGORITMOS_H /* Testa se o módulo já foi definido. */
#define UNB_CIC_APC_SUBALGORITMOS_H /* Caso não tenha sido, defina agora,
                                       efetivamente evitando a duplicação das
                                      funcionalidades definidas aqui. */

/* A inclusão é recursiva... */
#include <stdio.h>  /* Funcionalidades de E/S */
#include <stdlib.h> /* Definições padrões */
#include <time.h>   /* Funcionalidades de tempo */

#include "apc_subalgoritmos.h" /* Duplicação!

                                  Mas há proteção definida, então o conflito é
                                  evitado... Mas fica a questão de falta de
                                  atenção do programador com este tipo de
                                  descuido (exceto neste arquivo que foi criado
                                  especificamente para ilustrar este tipo de
                                  situação). */

/* Escreve a hora atual na saída padrão. */
void mostra_agora() {
  time_t hora_local;
  time(&hora_local);
  printf("%s", ctime(&hora_local));
}

/* Retorna um número inteiro aleatório. */
int qualquer() {
  return rand();
}

/* Retorna um número inteiro aleatório entre 0 e o valor dado (não incluso). */
int aleatorio(unsigned int max) {
  return qualquer()%max;
}

#endif /* Indica o fim da definição de funcionalidades do módulo (UNB_CIC_APC_SUBALGORITMOS_H) */
