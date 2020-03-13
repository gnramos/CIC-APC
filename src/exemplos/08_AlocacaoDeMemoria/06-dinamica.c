/**      @file: 06-dinamica.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de alocação dinâmica de memória.
 *
 * Entenda e discuta, passo a passo, o efeito de cada instrução no código. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;        /* "má" ideia... */
    int *q = NULL; /* boa ideia! */

    p = malloc(sizeof(int));
    *p = 123;

    q = malloc(sizeof(int));
    *q = *p;

    q = p;

    free(p);
    free(q);  /* má ideia... */
    q = NULL; /* boa ideia! */

    return 0;
}
