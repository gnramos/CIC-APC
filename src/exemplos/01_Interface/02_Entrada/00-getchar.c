/**      @file: 0-getchar.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso da função de entrada de dados. */

#include <stdio.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    c = getchar();

    /* Esta instrução é composta por diversos componentes:
     *
     *  Elemento | Descrição
     * ----------+--------------------------------------------------------------
     *   getchar | função que envia o comando "leia um caractere da saída
     *           | padrão"
     * ----------+--------------------------------------------------------------
     *        () | os parênteses delimitam as informações passadas a função
     *           | "getchar" - neste caso, nada.
     * ----------+--------------------------------------------------------------
     *         ; | indica o fim da instrução */

    printf("Você digitou [%c].\n", c);
    /* As chaves servem para delimitar a área onde o caractere será mostrado,
    para facilitar a visualização. */


    /* A entrada padrão usa um buffer para armazenar as informações dadas,
     * portanto getchar não retorna o valor lido até que você pressione a tecla
     * [Enter]. Entretanto, getchar só lê (e retorna) o primeiro caractere, o
     * que leva a duas situações "interessantes":
     *
     * 1) Independentemente do que for digitado, os comandos acima só mostrarão
     * o primeiro caractere. Por exemplo, se digitar abc[Enter], o que será
     * exibido é: "Você digitou [a]."
     *
     * 2) O buffer armazena os caracteres, portanto uma chamada subsequente de
     * getchar retorna o segundo caractere digitado. Por exemplo, se você
     * digitou a[Enter], o comando a seguir deve mostrar o seguinte:
     *
     * O próximo caractere do buffer é [
     * ].
     *
     * [Enter] é representado pelo caractere de quebra de linha ('\n'), e é de
     * fato o próximo caractere no buffer. Se você digitou abc[Enter], o comando
     * a seguir deve mostrar o seguinte:
     *
     * O próximo caractere do buffer é [b].
     *
     * Pois a sequência fica armazenada no buffer e b seria o próximo caractere.
     *
     * Cuidado com isso, este funcionamento pode influenciar muito o
     * comportamento do seu programa. */

    c = getchar();
    printf("O próximo caractere do buffer é [%c].\n", c);

    return 0;  /* Não houve erro(s). */
}