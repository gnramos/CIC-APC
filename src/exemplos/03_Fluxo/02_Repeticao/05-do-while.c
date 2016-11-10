/**      @file: 05-do-while.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de laços de repetição com DO-WHILE. */

#include <stdio.h>

int main (){
    int N = 10;
    int i = 0, soma = 0;

    do {
        soma += i;
        i++; /* Atualização da condição de parada. */
    } while(i <= N);
    printf("Soma de 0 a %d = %d.\n", N, soma);

    printf("i = %d.\n", i);
    do {
        soma += i;
        i++; /* Atualização da condição de parada. */
        printf("Teste da condição ao final, executa os comandos pelo menos uma vez.\n");
    } while(i <= N);
    printf("Agora i = %d e soma = %d.\n", i, soma);

    return 0; /* Não houve erro. */
}