/**      @file: 04-bhaskara.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de comunicação de dados entre blocos do código.
 * Por usar a função sqrt, é preciso compilar com a opção
 * "-lm" (para link com a biblioteca de matemática). */

#include <stdio.h>
#include <math.h>

/* Calcula as raízes do polinômio de coeficientes a, b, c com
a fórmula de Bhaskara. Retorna 1 se as raizes são reais, 0
caso contrário, e altera o conteúdo dos ponteiros r1 e r2
para os valores das raízes, caso sejam reais. */
int bhaskara(double a, double b, double c,
             double *r1, double *r2) {
    double delta = b*b - 4*a*c;
    int raizes_reais = (delta >= 0 ? 1 : 0);

    if(raizes_reais) {
        (*r1) = (-b + sqrt(delta))/2;
        (*r2) = (-b - sqrt(delta))/2;
    }

    return raizes_reais;
}

/* Testa a fórmula de Bhaskara com os coeficientes dados. */
void testa_bhaskara(double a, double b, double c) {
    double r1, r2;
    int raizes_reais;

    printf("%+.0lfx^2 %+.0lfx %+.0lf = 0\n", a, b, c);

    raizes_reais = bhaskara(a, b, c, &r1, &r2);
    if(raizes_reais)
        printf("\tr1 = %lf\n\tr2 = %lf\n\n", r1, r2);
    else
        printf("\tRaizes complexas.\n\n");
}

int main() {
    testa_bhaskara(1, -1, -2);
    testa_bhaskara(1, -4, 5);
    testa_bhaskara(2, 0, -1);

    return 0;
}