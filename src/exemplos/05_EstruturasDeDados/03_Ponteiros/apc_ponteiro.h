/**      @file: apc_ponteiro.h
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de funções comuns para lidar com ponteiros. */

#ifndef UNB_CIC_APC_PONTEIRO_H
#define UNB_CIC_APC_PONTEIRO_H

/* Retorna a quantidade de bytes entre os endereços. */
long diff(void* a, void* b) {
    return b - a;
}

/* Troca os conteúdos dos inteiros. */
void troca_i(int* a, int* b) {
    int aux = (*a);
    (*a) = (*b);
    (*b) = aux;
}

#endif /* UNB_CIC_APC_PONTEIRO_H */