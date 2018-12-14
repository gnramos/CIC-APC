/**      @file: 02-leia_no_intervalo.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de implementação de uma função. */

#include <stdio.h>

/*       +-----------------------------------------------------------------+
         |                                                                 |
         V                                                                 |  */
float leia_real() {                                                    /*  |  */
    float num;                                                         /*  |
                                                                           |  */
    printf("\nDigite o número: ");                                     /*  |  */
    scanf("%f", &num);                                                 /*  |
                                                                           |  */
    return num;                                                        /*  |  */
}                                                                      /*  |
                                                                           |
Uma vez que a função foi definida, pode-se utilizá-la como desejado.       |
                                                                           |
                                                                           |
 +-- Tipo de dado de retorno (devolvido a quem chamou a função)            |
 |                                                                         |
 +---------------------------------------------------------------------+   |
 |                                                                     |   |
 |       +-- Identificador da função.                                  |   |
 |       |                                                             |   |
 |       |       +-- Valores mínimo e máximo do intervalo aceitável.   |   |
 |       |       |                                                     |   |
 V       V       V                                                     |   |  */
float leia_no_intervalo(float min, float max) {/*                      |   |  */
    float num;                                                     /*  |   |
                                                                       |   |  */
    do {                                                           /*  |   |  */
        printf("Digite um número entre %f e %f.\n", min, max);     /*  |   |  */
        num = leia_real();  /* ----------------------------------------+---+  */
    } while (min > num || num > max);                              /*  |
                                                                       |
    /* Instrução explicitando o valor a ser retornado.                 |      */
    return num;                                                    /*  |
            |                                                          |
            +-------> O valor armazenado aqui deve ser do mesmo tipo --+
                      definido na assinatura da função */
}

int main () {
    int i, numero;

    for(i = 1; i <= 5; ++i) {
        numero = leia_no_intervalo(i, 5);
        printf("%d) Li o número: %d\n", i, numero);
    }

    return 0; /* Não houve erro(s). */
}