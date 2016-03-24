/**      @file: 1-scanf.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso da função de entrada de dados. */

#include <stdio.h>

int main() {
    int i;
    char c;
    float f;

    printf("Digite um número inteiro: ");
    scanf("%d", &i);

    /* Esta instrução é composta por diversos componentes:
     *
     *  Elemento | Descrição
     * ----------+--------------------------------------------------------------
     *     scanf | função que envia o comando "leia da saída padrão"
     * ----------+--------------------------------------------------------------
     *        () | os parênteses delimitam as informações passadas a função
     *           |  "scanf"
     * ----------+--------------------------------------------------------------
     *      "%d" | a informação a ser lida da entrada padrão, que pode
     *           | ser decomposta em:
     *           |
     *        "" | as aspas delimitam o formato da informação a ser lida
     *           |
     *        %d | marca a posição no texto onde se deseja incluir outra
     *           | informação. Neste caso específico, um valor inteiro em base
     *           | decimal (com indicação do sinal ou não)
     * ----------+--------------------------------------------------------------
     *         , | separa os argumentos da função (a informação a ser lida do
     *           | local onde esta informação será armazenada)
     * ----------+--------------------------------------------------------------
     *        &i | onde armazenar a informação, o tipo desta variável tem de ser
     *           | compatível com a especificação do primeiro argumento (%d)
     * ----------+--------------------------------------------------------------
     *         ; | indica o fim da instrução */

    printf("Você digitou %d\n", i);

    /* Outros exemplos: */
    printf("Digite um número real: ");
    scanf("%f\n", &f);
    printf("Você digitou %f\n", f);

    printf("Digite um caractere: ");
    scanf(" %c", &c);
    printf("Você digitou %c\n", c);

    /* Atenção ao espaço antes de %c. Essa é uma das formas mais simples de se
     * ler um caractere pois força a função scanf a ignorar os caracteres
     * brancos e ler o primeiro caractere "não branco" ("white-space", caractere
     * que não é visível para o usuário, veja "Semântica" no item 6.4 do padrão
     * C em http://www.open-std.org/JTC1/SC22/WG14/www/standards), . */

    return 0;  /* Não houve erro(s). */
}