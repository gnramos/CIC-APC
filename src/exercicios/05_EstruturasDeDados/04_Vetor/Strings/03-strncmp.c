/**      @file: vetor/strings/3-strncmp.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente a função strncmp. */

#include <stdio.h>

/* Comparação lexicográfica do n primeiros caracteres,
 * retorna:
 *   -1 se str1 for menor que str2
 *    0 se forem iguais
 *    1 se str1 for maior que str2 */
int strncmp(char* str1, char* str2, int n) {

}

/* Mostra n caracteres a partir do endereço dado. */
void putnchar(char* str, int n) {
    int i;
    putchar('[');
    for(i = 0; i < n; ++i)
        putchar(str[i]);
    putchar(']');
}

int main() {
    char* str1 = "Hello World!";
    char* str2 = "Hello World! E mais alguma coisa...";
    int n;

    for(n = 0; n <= strlen(str2); ++n) {
        putnchar(str1, n);
        if(strncmp(str1,str2, n) == 0)
            printf(" == ");
        else
            printf(" != ");
        putnchar(str2, n);
        printf("\n");
    }

    return 0;
}