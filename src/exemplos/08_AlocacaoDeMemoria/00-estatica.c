/**      @file: 00-estatica.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de alocação estática de memória. */

#include <stdio.h>

int main() {
    /* Estes espaços são alocados antes de iniciar a execução
    das instruções. */
    int bytes, inteiros[50];
    float f, reais[5];
    char c, string[500];

    /* Contabilizando os espaços. */
    bytes = sizeof(bytes) + sizeof(inteiros);
    bytes += sizeof(f) + sizeof(reais);
    bytes += sizeof(c) + sizeof(string);

    printf("Alocação de %d bytes de memória.\n", bytes);

    return 0;
}