/**      @file: 00-Newton-Raphson.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação do método de Newton-Raphson para aproximação
 * de raiz quadrada. Ao compilar, é aceitável um aviso
 * (warning) sobre a função fabs. */

#include <stdio.h>

/* Retorna o valor absoluto do número dado. */
float fabs(float f) {
    return (f < 0 ? -f : f);
}

/* Retorna o resultado do polinômio. */
float f(float r, float n) {
    /* f(r) = r^2 - n */
    return r*r - n;
}

/* Retorna o resultado da 1a derivada do polinômio. */
float fp(float r, float n) {
    /* f'(r) = 2*r */
    return 2*r;
}

/* Retorna uma estimativa inicial da raiz. */
float valor_inicial(float n) {
    return n/2;
}

/* Retorna o valor da aproximação da raiz. */
float aproxima(float r, float n) {
    return r - f(r, n)/fp(r, n);
}

/* Retorna o erro entre a estimativa atual da raiz e seu valor real. */
float erro(float r, float n) {
    /* Se soubesse o valor real da raiz, não estaria tentando aproximá-lo. Mas
     * é possível quantificar o erro sabendo o valor real da raiz ao quadrado. */
    return fabs(r*r - n);
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
    float n, precisao, r;
    int iteracoes;

    for(n = 1; n <= 64; n *= 2)
      for(iteracoes = 1; iteracoes <= 100; iteracoes *= 10) {
        for(precisao = 1; precisao >= 0.000009; precisao /= 10) {
          /* Por conta de erros de aproximação, é melhor usar 0.000009 que 0.00001*/
          r = Newton_Raphson(n, iteracoes, precisao);
          printf("Newton_Raphson(%.0f, %d, %.5f) = %f\n", n, iteracoes, precisao, r);
        }
        printf("\n");
      }

    return 0; /* Não houve erro(s). */
}