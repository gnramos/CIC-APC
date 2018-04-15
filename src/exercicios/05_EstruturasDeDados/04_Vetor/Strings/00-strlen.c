/**      @file: 00-strlen.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente a função strlen. */

#include <stdio.h>

/* Retorna a quantidade de caracteres da string. */
int strlen(char* str) {
    /* Implemente o código aqui. */
}

int main() {
    char* str0 = NULL;
    char* str1 = "a";
    char* str2 = "Hello World!";
    char* str3 = "Olha a pamonha.";
    char* str4 = "Um, dois, feijão com arroz...";

    printf("strlen(\"%s\") = %d\n", str0, strlen(str0));
    printf("strlen(\"%s\") = %d\n", str1, strlen(str1));
    printf("strlen(\"%s\") = %d\n", str2, strlen(str2));
    printf("strlen(\"%s\") = %d\n", str3, strlen(str3));
    printf("strlen(\"%s\") = %d\n", str4, strlen(str4));

    return 0;
}

/* Resultado esperado:

strlen("(null)") = 0
strlen("a") = 1
strlen("Hello World!") = 12
strlen("Olha a pamonha.") = 15
strlen("Um, dois, feijão com arroz...") = 29 */
