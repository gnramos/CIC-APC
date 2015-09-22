/**      @file: tipos/ponteiro/1-maior.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente a função maior. */

#include <stdio.h>

/* Recebe o endereço do primeiro de 10 caracteres quaisquer,
 * e retorna o endereço do maior deles. */
char* maior(char* str) {

}

int main() {
    char* m;
    char* str1 = "abcdefghij";
    char* str2 = "JIHGFEDCBA";
    char* str3 = "1239874560";

    m = maior(str1);
    printf("O endereço do maior de \"%s\" é %p (%c).\n", str1, m, *m);

    m = maior(str2);
    printf("O endereço do maior de \"%s\" é %p (%c).\n", str2, m, *m);

    m = maior(str3);
    printf("O endereço do maior de \"%s\" é %p (%c).\n", str3, m, *m);

    return 0;
}