/**      @file: 03-switch.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização dos condicionais com switch. */

#include <stdio.h>

int main () {

    int i = 0; /* Poderia ser qualquer valor. */

    printf("\nDigite um valor inteiro para i: ");
    scanf("%d", &i);

    switch(i) {
        case -2:
            printf("\nSei o que fazer quando i=-2.");
            /* Instruções para i = -2 */
            break; /* Sai do switch */
        case -1:
            printf("\nSei o que fazer quando i=-1.");
            /* Instruções para i = -1 */
            break; /* Sai do switch */
        case 0:
            printf("\nSei o que fazer quando i=0.");
            /* Instruções para i = 0 */
            break; /* Sai do switch */
        case 1:
            printf("\nSei o que fazer quando i=1.");
            /* Instruções para i = 1 */
            break; /* Sai do switch */
        case 2:
            printf("\nSei o que fazer quando i=2.");
            /* Instruções para i = 2 */
            break; /* Sai do switch */
        default:
            /* i não é um dos valores acima. */
            printf("\nNão sei o que fazer quando i=%d.", i);
            /* Instruções para outros valores de i */
    }

    return 0; /* Não houve erro(s). */
}