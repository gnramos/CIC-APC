/**      @file: 3-iniciante.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de erro simples para depuração.
 *
 * Baseado no livro "The Practice of Programming", de Brian
 * W. Kernighan e Rob Pike (Addison-Wesley, 1999). */

#include <stdio.h>
#include <stdlib.h>


/* Especificação de algum comportamento que lida com
argumentos da linha de comando (ex: o comando gcc).

Exemplo de uso para depuração (supondo que este programa seja
o executável "3-iniciante"):

./3-iniciante -o meu_executavel -f123 -t500 1-iniciante.c

O resultado esperado é:

executavel [meu_executavel]
    inicio [123]
       fim [500]
*/

int main(int argc, char **argv) {
    int i, inicio, fim;
    char *executavel = NULL;

    /* Avaliação das opções dadas na linha de comando. */
    for(i=1; i < argc; i++) {
        if(argv[i][0] != '-') /* opções terminadas */
            break;
        switch(argv[i][1]) {
        case 'o':             /* nome do executável */
            executavel = argv[i];
            break;
        case 'f':             /* valor inicial */
            inicio = atoi(argv[i]);
            break;
        case 't':             /* valor final */
            fim = atoi(argv[i]) ;
            break;
        default:
            break;
        }
    }
                                             /* Resultado esperado: */
    printf("executavel [%s].\n", executavel);/* executavel [meu_executavel] */
    printf("    inicio [%d].\n", inicio);    /*     inicio [123] */
    printf("       fim [%d].\n", fim);       /*        fim [500] */

    return 0;
}
