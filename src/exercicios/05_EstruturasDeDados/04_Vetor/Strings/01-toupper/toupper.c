/**      @file: toupper.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente a função toupper. */

#include <stdio.h>

/* Transforma todas as letras do alfabeto presentes no string
 * dado em sua versão maiúscula, não altera os demais
 * caracteres. */
void toupper(char* str) {
    /* Implemente o código aqui. */
}

int main() {
    char string[1001];

    scanf("%[^\n]", string);
    toupper(string);
    printf("%s\n", string);

    return 0;
}
