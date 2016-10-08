/**      @file: 0-usuario.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de código com complexidades distintas.
 *
 * Você pode testar com sua própria percepção de tempo para argumentos
 * diferentes:
 *
 * ./testa 1
 * ./testa 10
 * ./testa 100     <- cuidado com "grandes" valores de n e complexidades com
 * ./testa 1000    <- crescimento de maior ordem. */

#include <stdio.h>
#include <stdlib.h>

#include "apc_complexidade.h"

/* Testes conforme a instrução: */
void instrucao() {
    putchar('.');
}

/* Assume que é passado um argumento inteiro indicando o tamanho da entrada,
 * executa uma quantidade de instruções proporcional a complexidade do algoritmo
 * implementado. */
int main(int argc, char **argv) {
    /* Verificação de argumentos. */
    if(argc != 2) {
        printf("Forneça apenas um número inteiro (representando o tamanho da entrada).\n");
        return EXIT_FAILURE;
    }

    /* Assume que o segundo argumento é um inteiro positivo. */
    int n = atoi(argv[1]);

    /* Validação da entrada. */
    if(0 > n) {
        printf("Valor inválido (%d).\n", n);
        return EXIT_FAILURE;
    }
    if(n > 10) {
        printf("Não, isso demoraria demais...\n");
        return EXIT_FAILURE;
    }

    /* Vamos lá... */
    printf("     O(1): ");
    O_1(n);

    printf("\n O(log2n): ");
    O_log2n(n);

    printf("\n     O(n): ");
    O_n(n);

    printf("\nO(nlog2n): ");
    O_nlog2n(n);

    printf("\n   O(n^2): ");
    O_cn(n, 2);

    printf("\n    (2^n): ");
    O_cn(2, n);

    printf("\n    O(n!): ");
    O_n_fat(n);

    printf("\n");

    return EXIT_SUCCESS;
}