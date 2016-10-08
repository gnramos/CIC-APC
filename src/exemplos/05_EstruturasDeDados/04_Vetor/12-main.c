/**      @file: 12-main.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de má utilização de ponteiros. */

#include <stdio.h>

int main(int argc, char* argv[]) {
    /* A ideia é cumprimentar o usuário... */
    printf("Boa tarde, %s.\n", argv[1]);

    return 0;
}

/* É perigoso acessar memória além da planejada... Tente:
 *   printf("%s\n", argv[2]);
 *   printf("%s\n", argv[3]);
 *   printf("%s\n", argv[5]);
 *   printf("%s\n", argv[50]);
 *   printf("%s\n", argv[5000]); */