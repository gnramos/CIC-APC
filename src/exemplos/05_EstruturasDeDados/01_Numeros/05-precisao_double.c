/**      @file: 05-precisao_double.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de código para exemplificar o acúmulo do
 * erro de precisão com tipo double após diversas iterações. */

#include <stdio.h>

/* Retorna o valor absoluto de f. */
double abs(double f) {
    return (f < 0 ? -f : f);
}

/* Retorna o erro percentual entre a e b. */
double erro(double a, double b) {
    return abs(a-b)/a*100;
}

int main() {
    int i, j, escala = 1;

    double soma = 0;
    for(i = 0; i < 10; ++i)
        soma += 0.1;

    if(soma == 1)
        printf("soma == 1\n\n");
    else
        printf("soma != 1\n\n");

    /* O erro pode ser acumulado com o uso... */
    soma = 0;
    for(i = 1; i <= 1000000000; ++i) {
        /* diferente de soma += 1 */
        for(j = 0; j < 10; ++j)
            soma += 0.1;

        if(i%escala == 0) {
            printf("%10d) soma == %16lf (erro = %lf%%)\n", i, soma, erro(soma,i));
            escala *= 10;
        }
    }

    return 0;
}