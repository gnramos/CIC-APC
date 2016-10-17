/**      @file: 4-precisao_float.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de código para exemplificar o acúmulo do
 * erro de precisão com tipo float após diversas iterações. */

#include <stdio.h>

/* Retorna o valor absoluto de f. */
float abs(float f) {
    return (f < 0 ? -f : f);
}

/* Retorna o erro percentual entre a e b. */
float erro(float a, float b) {
    return abs(a-b)/a*100;
}

int main() {
    int i, j, escala = 1;

    float soma = 0;
    for(i = 0; i < 10; ++i)
        soma += 0.1;

    if(soma == 1)
        printf("soma == 1\n\n");
    else
        printf("soma != 1\n\n");

    /* O erro pode ser acumulado com o uso... */
    soma = 0;
    for(i = 1; i <= 1000000; ++i) {
        /* diferente de soma += 1 */
        for(j = 0; j < 10; ++j)
            soma += 0.1;

        if(i%escala == 0) {
            printf("%7d) soma == %14f (erro = %f%%)\n", i, soma, erro(soma,i));
            escala *= 10;
        }
    }

    return 0;
}