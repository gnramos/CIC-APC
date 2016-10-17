/**      @file: 2-scanf.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso da função de entrada de dados. */

#include <stdio.h>

int main() {
    int i1, i2;
    char c;
    float f;

    printf("Digite a soma (dois números inteiros, separados pelo operador +: ");
    scanf("%d+%d", &i1, &i2);

    /* Esta instrução é composta por diversos componentes:
     *
     *  Elemento | Descrição
     * ----------+--------------------------------------------------------------
     *     scanf | função que envia o comando "leia da saída padrão"
     * ----------+--------------------------------------------------------------
     *        () | os parênteses delimitam as informações passadas a função
     *           |  "scanf"
     * ----------+--------------------------------------------------------------
     *   "%d+%d" | a informação a ser lida da entrada padrão, que pode
     *           | ser decomposta em:
     *           |
     *        "" | as aspas delimitam o formato da informação a ser lida
     *           |
     *        %d | marca a posição no texto onde se deseja incluir outra
     *           | informação. Neste caso específico, um valor inteiro em base
     *           | decimal (com indicação do sinal ou não)
     *           |
     *         + | um caractere que indica a formatação da informação que se
     *           | espera ler, ou seja, que é esperado o caractere '+' na
     *           | informação lida
     *           |
     *        %d | marca a posição no texto onde se deseja incluir outra
     *           | informação. Neste caso específico, um valor inteiro em base
     *           | decimal (com indicação do sinal ou não)
     * ----------+--------------------------------------------------------------
     *         , | separa os argumentos da função (a informação a ser lida do
     *           | local onde esta informação será armazenada)
     * ----------+--------------------------------------------------------------
     *       &i1 | onde armazenar a informação, o tipo desta variável tem de ser
     *           | compatível com a especificação do primeiro argumento (%d)
     *           |
     *       &i2 | onde armazenar a informação, o tipo desta variável tem de ser
     *           | compatível com a especificação do segundo argumento (%d)
     * ----------+--------------------------------------------------------------
     *         ; | indica o fim da instrução */

    /* Outros exemplos: */
    printf("Digite dois números inteiros, separados por um espaço: ");

    /*         +---------+
               |         |
               |         v                                                    */
    scanf("%d+%d", &i1, &i2);
    /*      |       ^
            |       |
            +-------+                                                         */

    printf("Digite um número inteiro, um real  um caractere: ");
    scanf("%d %f %c", &i1, &f, &c);

    return 0;  /* Não houve erro(s). */
}
