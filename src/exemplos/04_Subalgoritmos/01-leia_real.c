/**      @file: 01-leia_real.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de implementação de uma função. */

#include <stdio.h>

/*

 +-- Tipo de dado de retorno (devolvido a quem chamou a função)
 |
 +-------------------------------------------------------------------------+
 |                                                                         |
 |       +-- Identificador da função. "leia_real" é uma descrição adequada |
 |       |   do comportamento definido.                                    |
 |       |                                                                 |
 |       |       +-- Argumentos. Neste caso, nenhum é fornecido.           |
 |       |       |                                                         |
 V       V       V                                                         |  */
float leia_real() {                                                    /*  |
    Uma função é um (sub)algoritmo completo, portanto segue as mesmas      |
    diretrizes de composição.                                              |
                                                                           |
    Declaração de variáveis.                                               |  */
    float num;                                                         /*  |
                                                                           |
    Definição do comportamento.                                            |  */
    printf("\nDigite o número: ");                                     /*  |  */
    scanf("%f", &num); /*                                                  |
                                                                           |
    /* Instrução explicitando o valor a ser retornado.                     |  */
    return num; /*                                                         |
            |                                                              |
            +--------> O valor armazenado aqui deve ser do mesmo tipo    --+
                       definido na assinatura da função */
}

/* Uma vez que a função foi definida, pode-se utilizá-la como desejado. */

int main () {
    int i;
    float numero;

    for(i = 1; i <= 5; ++i) {
        numero = leia_real();
        printf("%d) Li o número: %f\n", i, numero);
    }

    return 0;
}