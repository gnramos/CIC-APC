/**      @file: busca/binaria-1.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação da busca binária (recursiva) em um vetor. */

#include <stdio.h>

#include "apc_busca.h"
#include "../../5_EstruturasDeDados/4_Vetor/apc_vetor.h"

int main() {
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};

    printf("Vetor: ");
    mostra_i(vetor, 10);

    testa_busca(-1, vetor, 10, busca_binaria_r);
    testa_busca(0, vetor, 10, busca_binaria_r);
    testa_busca(1, vetor, 10, busca_binaria_r);
    testa_busca(2, vetor, 10, busca_binaria_r);
    testa_busca(5, vetor, 10, busca_binaria_r);
    testa_busca(9, vetor, 10, busca_binaria_r);
    testa_busca(10, vetor, 10, busca_binaria_r);
    testa_busca(11, vetor, 10, busca_binaria_r);

    printf("\nAcumulado: %d\n", comparacoes_na_busca);

    return 0;
}