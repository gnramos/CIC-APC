/**      @file: Newton-Raphson.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente as funções aproxima_raiz4/erro_raiz4 e
 * aproxima_raiz6/erro_raiz6, e complete a função
 * Newton-Raphson. Esta versão funciona "apenas" para raízes
 * simples (encontrar k tal que r^k == n).  */

#include <stdio.h>

/* Retorna o valor absoluto do número dado. */
float fabs(float n) {
    return (n > 0 ? n : -n);
}

/***********************************************************
 *                 Aproxima a raiz quadrada                *
 ***********************************************************/
float aproxima_raiz2(float r, float n) {
    /* A função que representa o polinômio é: */
    float raiz2(float n, float r) {
        return r*r - n;
    }

    /* E a derivada dela é: */
    float raiz2_p(float n, float r) {
        return 2*r;
    }

    /* Newton mostrou que uma boa aproximação é: */
    return r - (raiz2(n, r))/raiz2_p(n, r);
}

/** Indica o erro associado a uma aproximação da raiz
quadrada. */
float erro_raiz2(float r, float n) {
    return fabs(r*r - n);
}

/***********************************************************
 *                  Aproxima a raiz cúbica                 *
 ***********************************************************/
float aproxima_raiz3(float r, float n) {
    /* A função que representa o polinômio é: */
    float raiz3(float n, float r) {
        return r*r*r - n;
    }

    /* E a derivada dela é: */
    float raiz3_p(float n, float r) {
        return 3*r*r;
    }

    /* Newton mostrou que uma boa aproximação é: */
    return r - (raiz3(n, r))/raiz3_p(n, r);
}

/** Indica o erro associado a uma aproximação da raiz cúbica.
 */
float erro_raiz3(float r, float n) {
    return fabs(r*r*r - n);
}

/***********************************************************
 *                  Aproxima a raiz quarta                 *
 ***********************************************************/
float aproxima_raiz4(float r, float n) {

}

/** Indica o erro associado a uma aproximação da raiz quarta.
 */
float erro_raiz4(float r, float n) {

}

/***********************************************************
 *                  Aproxima a raiz sexta                 *
 ***********************************************************/
float aproxima_raiz6(float r, float n) {

}

/** Indica o erro associado a uma aproximação da raiz sexta.
 */
float erro_raiz6(float r, float n) {

}

/***********************************************************/
float valor_inicial(float n) {
    return n/2;
}

/* Retorna a aproximação para a raiz do polinômio. Recebe:
 *          n: número n para aproximar a raiz do polinômio
 *  iteracoes: quantidade máxima de iterações a realizar
 *   precisao: precisão mínima para o resultado
 *         ? : ponteiro para a função que aproxima a raiz do
 *             polinômio
 *         ? : ponteiro para a função que indica o erro
 *             associado estimativa da raiz do polinômio */
float Newton_Raphson(float n, int iteracoes, float precisao,
                     /* ? */ (*aproxima)(/* ? */),
                     /* ? */ (*erro)(/* ? */)) {
    float r = valor_inicial(n);

    for(; iteracoes > 0; --iteracoes) {
        r = aproxima(r, n);

        if(precisao >= erro(r, n))
            break;
    }

    return r;
}

int main () {
    const float PRECISAO = 0.001;
    const int ITERACOES = 100;
    float n, r;

    scanf("%f", &n);

    r = Newton_Raphson(n, ITERACOES, PRECISAO, aproxima_raiz2, erro_raiz2);
    printf("raiz2(%.3f) = %.3f\n", n, r);

    r = Newton_Raphson(n, ITERACOES, PRECISAO, aproxima_raiz3, erro_raiz3);
    printf("raiz3(%.3f) = %.3f\n", n, r);

    r = Newton_Raphson(n, ITERACOES, PRECISAO, aproxima_raiz4, erro_raiz4);
    printf("raiz4(%.3f) = %.3f\n", n, r);

    r = Newton_Raphson(n, ITERACOES, PRECISAO, aproxima_raiz6, erro_raiz6);
    printf("raiz6(%.3f) = %.3f\n", n, r);

    return 0; /* Não houve erro(s). */
}