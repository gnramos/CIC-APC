/**      @file: apc_numeros.h
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de funções comuns para números inteiros. */

#ifndef UNB_CIC_APC_5ED_NUMEROS_H
#define UNB_CIC_APC_5ED_NUMEROS_H

/* Retorna o maior dos valores inteiros dados. */
int max_i(int a, int b) {
    return (a > b ? a : b);
}

/* Retorna o menor dos valores inteiros dados. */
int min_i(int a, int b) {
    return (a < b ? a : b);
}

/* Retorna o valor absoluto do número inteiro dado. */
int abs(int n) {
    return (n > 0 ? n : -n);
}

/* Retorna o valor absoluto do número real dado. */
float fabs(float n) {
    return (n > 0 ? n : -n);
}

#endif /* UNB_CIC_APC_5ED_NUMEROS_H */