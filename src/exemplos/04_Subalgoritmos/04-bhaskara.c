/**      @file: 04-bhaskara.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de implementação de funções. */

#include <stdio.h>

/* Lê um valor real. */
float leia_real() {
    float num;

    printf("\nDigite o número: ");
    scanf("%f", &num);

    return num;
}

/* Retorna o valor absoluto do número dado. */
float absoluto(float n) {
    return (n < 0 ?  -n : n);
}

/* Calcula a raiz quadrada do número (pelo método Babilônico). */
float raiz(float n) {
    float r = n / 2;

    while(absoluto(r*r - n) > r)
        r = (r+(n/r))/2;

    return r;
}

/* Calcula o Delta. */
float delta(float a, float b, float c) {
    return (b*b) - (4*a*c);
}

int main() {
    float a, b, c, r1, r2;

    a = leia_real();
    b = leia_real();
    c = leia_real();

    r1 = (-b + raiz(delta(a, b, c))) / 2;
    r2 = (-b - raiz(delta(a, b, c))) / 2;

    printf("As raízes são: %f e %f\n", r1, r2);

    return 0;
}
