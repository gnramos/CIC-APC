/**      @file: 1-printf.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso da função de saída de dados. */

#include <stdio.h> /* Arquivo que define a função printf. */

int main() { /* Ponto de entrada do programa */

    printf("Hello, World!\n");

    /* Esta instrução é composta por diversos componentes:
     *
     *          Elemento | Descrição
     * ------------------+------------------------------------------------------
     *            printf | função que envia o comando "escreva na saída padrão"
     * ------------------+------------------------------------------------------
     *                () | os parênteses delimitam as informações passadas a
     *                   | função "printf"
     * ------------------+------------------------------------------------------
     * "Hello, World!\n" | a informação a ser escrita na saída padrão, que pode
     *                   | ser decomposta em:
     *                   |
     *                "" | as aspas delimitam o texto a ser escrito
     *                   |
     *     Hello, World! | conteúdo do texto
     *                   |
     *                \n | símbolos especiais que indicam a quebra de linha
     * ------------------+------------------------------------------------------
     *                 ; | indica o fim da instrução */

    /* Outros exemplos: */
    printf("Algoritmos e Programação de Computadores\n");

    printf("\nEu vou. Eu vou...\nProgramar, agora eu vou.\n");

    return 0;  /* Não houve erro(s). */
}