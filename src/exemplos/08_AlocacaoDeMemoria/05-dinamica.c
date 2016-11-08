/**      @file: 05-dinamica.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de alocação dinâmica de memória. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = NULL;

    /* Requisição de memória. */
    p = malloc(sizeof(int));

    if(!p || p == NULL) { /* Condições equivalentes */
        printf("Não foi possível alocar memória.\n");
        return EXIT_FAILURE;
    }

    *p = 123;
    printf("Armazenando %d no endereço %p.\n", *p, p);

    free(p);
    p = NULL;

    return 0;
}
