/**      @file: 1-hello_world_detalhado.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Explicações para o mesmo programa definido no arquivo 0-hello_world.c.
 *
 * O texto entre os marcadores iniciais ("/" e "*") e finais ("*" e "/") é
 * considerado um comentário, e portanto completamente ignorado pelo compilador.
 * Use comentários quando realmente necessários, pois têm a função de
 * esclarescer algo que não é óbvio no código. O texto até aqui é um bom exemplo
 * de comentário (no contexto inicial da disciplina), e um péssimo exemplo de
 * uso de seria:
 *                                   (╯°□°）╯︵ ┻━┻                          */


#include <stdio.h> /* Esta instrução é interpretada pelo pré-processador, e
                    * inclui o arquivo stdio.h, que faz parte da distribuição do
                    * sistema para programação em C. Neste arquivo é definida a
                    * função printf, que é usada neste programa para mostrar a
                    * mensagem na tela. */


int main() { /* A função main é o ponto de entrada do programa, indicando onde a
              * execução é iniciada. int é o tipo de dado que esta função
              * retorna. Os parênteses delimitam os argumentos passados a função,
              * (neste caso, nenhum). Por fim, as chaves delimitam o escopo da
              * função, indicando onde começam e terminam suas instruções. */


    printf("Hello World!\n"); /* A função printf exibe na saída padrão o texto
                               * dado como argumento ("Hello World!\n"). */


    return 0; /* Retorna o valor dado (0) como resultado da execução da função
               * main. Em C, geralmente o resultado 0 indica que o código foi
               * executado com sucesso. */
}
