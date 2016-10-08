/**      @file: 9-for.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de laços de repetição com FOR. */

#include <stdio.h>

int main (){
    int N = 10;
    int i = 0, soma = 0;

    printf("for(i = 0; i <= %d; ++i) soma += i;\n", N);
    for(i = 0; i <= N; ++i)
        soma += i;

    printf("Soma de 0 a %d = %d\n", N, soma);

    printf("\nfor(i = 0, soma = 0; i < %d; ++i, soma += i);\n", N);
    for(i = 0, soma = 0; i < N; ++i, soma += i); /* Atenção ao ';' */
    printf("Soma de 0 a %d = %d\n", N, soma);

    return 0; /* Não houve erro. */
}