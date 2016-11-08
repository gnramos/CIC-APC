/**      @file: 02-while.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de laços de repetição com WHILE. */

#include <stdio.h>

int main (){
    int N = 10;
    int i = 0, soma = 0;
    i = 1;

    while(i <= N) {
        soma += i;
        i++;
    }
    printf("Soma de 0 a %d é %d\n", N, soma);

    /* De novo! (decrescente) */
    i = N;
    soma = 0;
    while(i) {
        soma += i--;
    }
    printf("%d é a soma de %d a %d.\n", soma, N , i);

    return 0; /* Não houve erro. */
}