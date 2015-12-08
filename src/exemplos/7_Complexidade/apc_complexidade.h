/**      @file: apc_complexidade.h
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de funções comuns para exemplos de complexidade de algoritmos.
 * A complexidade é medida em função da quantidade de execuções da função
 * instrucao(), que é declarada aqui mas definida conforme a vontade do usuário.
 *
 * Por exemplo, uma implementação de fácil entendimento e visualização seria:
 *
 *     void instrucao() {
 *         putchar('.');
 *     }
 */

#ifndef UNB_CIC_APC_COMPLEXIDADE_H
#define UNB_CIC_APC_COMPLEXIDADE_H

/* Executa uma instrução. */
void instrucao(); /* Pode ser qualquer conjunto de instruções cuja complexidade
                     seja constante em relação a n. Exemplos:

                     1) putchar('.');

                     2) if(condicao) {
                            ++i;
                            putchar('.');
                        } else {
                            --i;
                        }

                     3) for(i = 0; i < 100; ++i)
                            for(j = 0; j < 1000000; ++j)
                                putchar('.'); */

/* Implementação de algoritmo com complexidade O(1) em relação a quantidade de
execuções da função instrucao(). */
void O_1(unsigned int n) {
    instrucao();
}

/* Implementação de algoritmo com complexidade O(log2 n) em relação a quantidade
de execuções da função instrucao(). */
void O_log2n(unsigned int n) {
    for(; n > 0; n /= 2)
        O_1(n);
}

/* Implementação de algoritmo com complexidade O(n) em relação a quantidade de
execuções da função instrucao(). */
void O_n(unsigned int n) {
    int i;
    for(i = 0; i < n; ++i)
        O_1(n);
}

/* Implementação de algoritmo com complexidade O(n*log2(n)) em relação a
quantidade de execuções da função instrucao(). */
void O_nlog2n(unsigned int n) {
    int i;
    for(i = 0; i < n; ++i)
        O_log2n(n);
}

/* Implementação de algoritmo com complexidade O(n^c) em relação a quantidade de
execuções da função instrucao(). */
void O_nc(unsigned int n, unsigned int c) {
    int i;
    if(c){
        for(i = 0; i < n; i++){
            O_nc(n, c-1);
        }
    }
    else
        O_1(n);
}

/* Implementação de algoritmo com complexidade O(c^n) em relação a quantidade de
execuções da função instrucao(). */
void O_cn(unsigned int c, unsigned int n) {
    if(n) {
        int i;
        for(i=0;i<c;++i)
            O_cn(c, n-1);
    }
    else
        O_1(c);
}

/* Implementação de algoritmo com complexidade O(n!) em relação a quantidade de
execuções da função instrucao(). */
void O_n_fat(unsigned int n) {
    if(n) {
        int i;
        for(i = 0; i < n; ++i)
            O_n_fat(n-1);
    } else
        O_1(n);
}

#endif /* UNB_CIC_APC_COMPLEXIDADE_H */