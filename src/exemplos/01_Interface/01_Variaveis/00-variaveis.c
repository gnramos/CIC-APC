/**      @file: 00-variaveis.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo do uso de variáveis. */

#include <stdio.h>

int main() {
    /* Variáveis simplesmente identificam um espaço de memória que o programa
     * pode manipular (alterar). Em C, cada variável tem um tipo específico que
     * determina o espaço a ser ocupado (quantidade de bits - diretamente
     * associada a quantidade de informação que pode ser armazenada) e como
     * interpretar e manipular a informação armazenada.
     *
     * Existem regras para nomear variáveis, tanto de sintaticamente quanto
     * semanticamente. Pode-se usar apenas letras e dígitos, e o caractere '_'.
     *
     * Ao identificar sua variável, tente usar um termo que indique claramente a
     * utilidade desta no contexto de seu programa. */

    /* Variáveis inteiras: */
    int idade      = 0;
    int contador1  = 0;
    int contador_2 = 0;

    /* Variáveis reais: */
    float juros_ao_mes      = 1.15;
    float taxa_de_aprovacao = 0.75;

    /* Variáveis simbólicas: */
    char sexo     = 'M';
    char resposta = 'N';

    printf("1a versão:\n");
    printf("idade             = [%d]\n", idade);
    printf("contador1         = [%d]\n", contador1);
    printf("contador_2        = [%d]\n", contador_2);
    printf("juros_ao_mes      = [%f]\n", juros_ao_mes);
    printf("taxa_de_aprovacao = [%f]\n", taxa_de_aprovacao);
    printf("sexo              = [%c]\n", sexo);
    printf("resposta          = [%c]\n", resposta);

    /* A informação armazenada em uma variável pode "variar", e esta atualização
     * permite que se realize as mais diversas tarefas. */

    idade             = 20;
    contador1         = 1;
    contador_2        = 2;
    juros_ao_mes      = 0.05;
    taxa_de_aprovacao = 1;
    sexo              = 'F';
    resposta          = 'S';

    /* Verificando as alterações: */
    printf("2a versão:\n");
    printf("idade             = [%d]\n", idade);
    printf("contador1         = [%d]\n", contador1);
    printf("contador_2        = [%d]\n", contador_2);
    printf("juros_ao_mes      = [%f]\n", juros_ao_mes);
    printf("taxa_de_aprovacao = [%f]\n", taxa_de_aprovacao);
    printf("sexo              = [%c]\n", sexo);
    printf("resposta          = [%c]\n", resposta);

    /* As alterações podem ser feitas quantas vezes forem necessárias. */

    idade             = 18;
    contador1         = 10;
    contador_2        = 200000;
    juros_ao_mes      = 0;
    taxa_de_aprovacao = 0;
    sexo              = '?';
    resposta          = '?';

    /* Verificando as alterações: */
    printf("3a versão:\n");
    printf("idade             = [%d]\n", idade);
    printf("contador1         = [%d]\n", contador1);
    printf("contador_2        = [%d]\n", contador_2);
    printf("juros_ao_mes      = [%f]\n", juros_ao_mes);
    printf("taxa_de_aprovacao = [%f]\n", taxa_de_aprovacao);
    printf("sexo              = [%c]\n", sexo);
    printf("resposta          = [%c]\n", resposta);

    return 0;
}