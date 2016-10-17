/**      @file: 5-atribuicao.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização do operador de atribuição. */

#include <stdio.h>

int main () {
    int i; /* "i" é um modo  amigável (para o programador) de identificar o
            * espaço de memória que vai armazenar a informação de um número
            * inteiro. */

    printf("Atribuição:\n");

    i = 0;   /* atribua o valor 0 a variável i */

    printf("(i =   0) O valor armazenado em i é: %d.\n", i);
    /* A função printf reconhece "i" como         |      ^
       um espaço de memória que contém a          |      |
       informação de um número inteiro,           +------+
       então acessa esta informação e a
       apresenta no lugar do %d. */

    i = -1;  /* atribua o valor -1 a variável i */
    printf("(i =  -1) O valor armazenado em i é: %d.\n", i);

    i = 2;   /* atribua o valor 2 a variável i */
    printf("(i =   2) O valor armazenado em i é: %d.\n", i);

    i = i+1; /* acesse o valor armazenado na variável i, some 1 a este valor, e
              * atribua o valor resultante a variável i */
    printf("(i = i+1) O valor armazenado em i é: %d.\n", i);

    i = i*2; /* acesse o valor armazenado na variável i, multiplique por 2 este
              * valor, e atribua o valor resultante a variável i */
    printf("(i = i*2) O valor armazenado em i é: %d.\n", i);

    i = i-5; /* acesse o valor armazenado na variável i, subtraia 5 deste valor,
              *  e atribua o valor resultante a variável i */
    printf("(i = i-5) O valor armazenado em i é: %d.\n", i);

    i = 0;   /* atribua o valor 0 a variável i */
    printf("(i =   0) O valor armazenado em i é: %d.\n", i);

    return 0; /* Não houve erro(s). */
}