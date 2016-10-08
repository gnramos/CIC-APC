/**      @file: 11-teste_parada.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de testes de parada em laços de repetição. */

#include <stdio.h>

int main (){
    int i = 0;

    /* A condição de parada deve ser modificada dentro do próprio laço. */
    char deve_parar = 0;
    i = 0;
    do {
        ++i;
        deve_parar = ((i%31) == 0); /* para quando for múltiplo de 31 */

        /* Poderia ser a leitura de um dado do usuário... */
    } while (!deve_parar);
    printf("Saiu do laço do-while porque deve_parar.\n");

    deve_parar = 0;
    while (!deve_parar) {
        deve_parar = (((++i)%31) == 0);
        /* ... */
    }
    printf("Saiu do laço while porque deve_parar.\n");

    for(; !deve_parar; i++) {
        /* ... */
        deve_parar = !(i%31);
    }
    printf("Saiu do laço for porque deve_parar.\n");



    /* É possível indicar o fim do laço dentro do próprio laço. */
    i = 0;
    while(1) { /* Laço infinito! */
        /* ... */

        if(((++i)%31) == 0)
            break; /* Sai quando for múltiplo de 31 */

        /* ... */
    }
    printf("Saiu do laço while porque (%d %% 31) == 0.\n", i);

    i = 0;
    do {
        /* ... */

        if(((++i)%31) == 0)
            break; /* Sai quando for múltiplo de 31 */

        /* ... */
    } while(1); /* Laço infinito! */
    printf("Saiu do laço do-while porque (%d %% 31) == 0.\n", i);

    for(;;) { /* Laço infinito! */
        /* ... */
        break;
    }
    printf("Saiu do laço for porque executou break.\n");

    return 0; /* Não houve erro. */
}