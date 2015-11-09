/**      @file: vetor/4-mais_funcoes.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente as funções dobra, abs, e aplica; de modo que o
 * o programa funcione. */

#include <stdio.h>

/* Retorna o dobro do valor dado. */
int dobra(int i) {

}

/* Retorna o valor absoluto do valor dado. */
int abs(int i) {

}

/* Substitui cada valor do vetor dado pelo resultado de
 * aplicar a função dada a este valor.  */
void aplica(/* ? */) {

}

void mostra(int *vetor, int n) {
    int i;
    for(i = 0; i < n; ++i)
        printf("%d ", vetor[i]);
    printf("\n");
}

int main() {
    int vetor1[9] = {-1,-4,0,1,2,-2,3,-3,4};
    int vetor2[9] = {-1,-4,0,1,2,-2,3,-3,4};

    printf("Dobra:\n");
    aplica(dobra, vetor1, 9);
    mostra(vetor1, 9);

    printf("Módulo:\n");
    aplica(abs, vetor2, 9);
    mostra(vetor2, 9);

    return 0;
}

/* Resultado esperado:
Dobra:
-2 -8 0 2 4 -4 6 -6 8
Módulo:
1 4 0 1 2 2 3 3 4 */