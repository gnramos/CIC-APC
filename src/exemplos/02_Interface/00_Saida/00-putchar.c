/**      @file: 00-putchar.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso da função de saída de caractere. */

#include <stdio.h> /* Arquivo que define a função putchar. */

int main() { /* Ponto de entrada do programa */

    putchar('@');

    /* Esta instrução é composta por diversos componentes:
     *
     *  Elemento | Descrição
     * ----------+--------------------------------------------------------------
     *   putchar | função que envia o comando "escreva na saída padrão"
     * ----------+--------------------------------------------------------------
     *        () | os parênteses delimitam as informações passadas a função
     *           | "putchar"
     * ----------+--------------------------------------------------------------
     *       '@' | a informação a ser escrita na saída padrão, que pode ser
     *           | decomposta em:
     *           |
     *        '' | as aspas simples delimitam o caractere a ser escrito
     *           |
     *         @ | caractere a ser escrito
     * ----------+--------------------------------------------------------------
     *         ; | indica o fim da instrução */

    /* Outros exemplos: */
    putchar('\t'); /* \t é um caractere especial que indica tabulação. */
    putchar('H');
    putchar('e');
    putchar('l');
    putchar('l');
    putchar('o');
    putchar(',');
    putchar(' ');
    putchar('W');
    putchar('o');
    putchar('r');
    putchar('l');
    putchar('d');
    putchar('!');
    putchar('\n'); /* \n é um caractere especial que indica quebra de linha. */

    return 0;  /* Não houve erro(s). */
}