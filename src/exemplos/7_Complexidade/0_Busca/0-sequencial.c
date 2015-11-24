/**      @file: 0-sequencial.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de busca sequencial em vetor. */

#include <stdio.h>

#include "apc_busca.h"
#include "../../5_EstruturasDeDados/4_Vetor/apc_vetor.h"

int main() {
    int vetor[] = {1,2,1,4,8,7,6,5,10,9};

    printf("Vetor: ");
    mostra_i(vetor, 10);

    testa_busca(-1, vetor, 10, busca_sequencial);
    testa_busca(0, vetor, 10, busca_sequencial);
    testa_busca(1, vetor, 10, busca_sequencial);
    testa_busca(2, vetor, 10, busca_sequencial);
    testa_busca(5, vetor, 10, busca_sequencial);
    testa_busca(9, vetor, 10, busca_sequencial);
    testa_busca(10, vetor, 10, busca_sequencial);
    testa_busca(11, vetor, 10, busca_sequencial);

    printf("\nComparações acumuladas: %d\n", comparacoes_na_busca);

    return 0;
}