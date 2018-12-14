/**      @file: 09-escopo.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementa a função de fibonacci e conta quantas
 * chamadas são realizadas. */

#include <stdio.h>

int contador;

/* Retorna o n-ésimo número da sequência de Fibonacci. */
int fib(int n) {
    ++contador;
    if(n < 2)
        return 1;
    return fib(n-1) + fib(n-2);
}

/* Conta quantas vezes a função fib é chamada para n. */
void testa_fib(int n) {
    contador = 0;
    printf("fib(%d) = %2d", n, fib(n));
    printf("    (%3d chamadas)\n", contador);
}

int main() {
    int n;
    for(n = 0; n < 10; ++n)
        testa_fib(n);

    return 0;
}