/**      @file: 08-for.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de laços de repetição com FOR. */

#include <stdio.h> /* escrita/leitura padrão */

/* Função principal. */
int main (){
    int N = 10;
    int i = 0;

    printf("for(i = 0; i < %d; ++i)\n\t", N);
    for(i = 0; i < N; ++i) /* Atualização da condição de parada. */
        printf("%d ", i);

    printf("\n\ni = %d\n", i);

    for(; i < N;)
        printf("Teste da condição no início, não deveria ter entrado nesse laço.\n");

    return 0; /* Não houve erro. */
}