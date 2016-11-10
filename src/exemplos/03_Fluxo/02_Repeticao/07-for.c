/**      @file: 07-for.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo do laço de repetição FOR. */

#include <stdio.h>

int main() {
    int i, n, soma = 0;

    printf("Bom dia! Digite um número positivo:\n");
    scanf("%d", &n);

    for(i = 1; i <= n; ++i)
        soma += i;

    printf("A soma de 0 a %d é: %d.", n, soma);

    return 0;
}