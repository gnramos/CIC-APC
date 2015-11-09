/*       @file: Newton-Raphson.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente as funções valor_inicial, erro, f, e fp para
 * aproximar a raiz cúbica com o método de Newton-Raphson. */

#include <stdio.h>

/* Retorna o resultado do polinômio. */
float f(float r, float n) {
    /* f(r) = r^3 - n */

    /* Implemente o código aqui. */
}

/* Retorna o resultado da 1a derivada do polinômio. */
float fp(float r, float n) {
    /* f'(r) = 3r^2 */

    /* Implemente o código aqui. */
}

/* Retorna uma estimativa inicial da raiz. */
float valor_inicial(float n) {
    return n/2;
}

/* Retorna o valor da aproximação da raiz. */
float aproxima(float r, float n) {
    /* Implemente o código aqui. */
}

/* Retorna o erro entre a estimativa atual da raiz e seu valor real. */
float erro(float r, float n) {
    /* Se soubesse o valor real da raiz, não estaria tentando aproximá-lo. Mas
     * é possível quantificar o erro sabendo o valor real da raiz ao cubo. */

    /* Implemente o código aqui. */
}

/* Retorna uma aproximação do valor da raiz quadrada de n.
 * A quantidade de iterações e a precisão dadas limitam o esforço gasto na
 * aproximação. */
float Newton_Raphson(float n, int iteracoes, float precisao) {
    float r = valor_inicial(n);

    for(; iteracoes > 0; --iteracoes) {
        r = aproxima(r, n);

        if(precisao >= erro(r, n))
            break;
    }

    return r;
}

int main () {
    /* Implemente a função principal aqui. */

    return 0; /* Não houve erro(s). */
}