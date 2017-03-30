/**      @file: 01-printf.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso da função de saída de dados. */

#include <stdio.h> /* Arquivo que define a função printf. */

int main() { /* Ponto de entrada do programa */

    printf("2 + 2  = %d\n", 5);

    /* Esta instrução é composta por diversos componentes:
     *
     *       Elemento | Descrição
     * ---------------+---------------------------------------------------------
     *         printf | função que envia o comando "escreva na saída padrão"
     * ---------------+---------------------------------------------------------
     *             () | os parênteses delimitam as informações passadas a função
     *                | "printf"
     * ---------------+---------------------------------------------------------
     * "2 + 2 = %d\n" | a informação a ser escrita na saída padrão, que pode ser
     *                | decomposta em:
     *                |
     *             "" | as aspas delimitam o texto a ser escrito
     *                |
     *        2 + 2 = | conteúdo do texto
     *                |
     *             %d | marca a posição no texto onde se deseja incluir outra
     *                | informação. Neste caso específico, um valor decimal
     *                |
     *             \n | símbolos especiais que indicam a quebra de linha
     * ---------------+---------------------------------------------------------
     *              , | separa os argumentos da função (o texto a ser escrito do
     *                | valor a ser escrito nele)
     * ---------------+---------------------------------------------------------
     *              5 | o valor a ser escrito no lugar de %d
     * ---------------+---------------------------------------------------------
     *              ; | indica o fim da instrução */

    /* Outros exemplos: */
    printf("2 + %d = 5\n", 2);
    /*           |         ^
                 |         |
                 +---------+                                                  */

    /*                +--------+
                      |        |
                      |        v                                              */
    printf("2 + %d = %d\n", 2, 5);
    /*           |          ^
                 |          |
                 +----------+                                                 */

    printf("Agora, uma letra: %c\n", 'a');
    /*                         |      ^
                               |      |
                               +------+                                       */

    /*                            +-----------+
                                  |           |
                                  |           v                               */
    printf("Agora, duas letra%c: %c\n", 's', 'b');
    /*                        |          ^
                              |          |
                              +----------+                                    */

    /*                          +---------+
                                |         |
                                |         v                                   */
    printf("E %d de cada tipo: %c\n", 1, 'c');
    /*         |                      ^
               |                      |
               +----------------------+                                       */

    /*                                                   +------------------+
                                                         |                  |
                                                      +--+-------------+    |
                                                      |  |             |    |
                                                      |  |             v    v */
    printf("Ou %d de cada tipo:\n\tQuer %d café(s)? (%c/%c)\n", 2, 1, 'S', 'N');
    /*          |                        |                      ^  ^
                |                        |                      |  |
                +------------------------+----------------------+  |
                                         |                         |
                                         +-------------------------+          */

    return 0;   /* Não houve erro(s). */
}