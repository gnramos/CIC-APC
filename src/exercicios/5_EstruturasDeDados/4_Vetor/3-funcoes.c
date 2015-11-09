/**      @file: vetor/3-funcoes.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente as funções positivo, menor_que_2, par, e
 * mostra; de modo que o programa funcione. */

#include <stdio.h>

/* Indica se o número dado é positivo. Retorna 1 se for, 0
 * caso contrário. */
int positivo(int i) {

}

/* Indica se o número dado é menor que 2. Retorna 1 se for, 0
 * caso contrário. */
int menor_que_2(int i) {

}

/* Indica se o número dado é par. Retorna 1 se for, 0 caso
 * contrário. */
int par(int i) {

}

/* Recebe um vetor e uma função de teste, e mostra todos os
 * elementos do vetor com resultado do teste verdadeiro. */
void mostra(/* ? */) {

}

int main() {
    int vetor[9] = {-1,-4,0,1,2,-2,3,-3,4};

    printf("Positivos:\n");
    mostra(positivo, vetor, 9);

    printf("\nMenores que 2:\n");
    mostra(menor_que_2, vetor, 9);

    printf("\nPares:\n");
    mostra(par, vetor, 9);

    return 0;
}

/* Resultado esperado:
Positivos:
vetor[2] = 0
vetor[3] = 1
vetor[4] = 2
vetor[6] = 3
vetor[8] = 4

Menores que 2:
vetor[0] = -1
vetor[1] = -4
vetor[2] = 0
vetor[3] = 1
vetor[5] = -2
vetor[7] = -3

Pares:
vetor[1] = -4
vetor[2] = 0
vetor[4] = 2
vetor[5] = -2
vetor[8] = 4 */