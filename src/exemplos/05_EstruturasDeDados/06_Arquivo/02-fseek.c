/**      @file: 02-fseek.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo da utilização da função fseek. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char arquivo[] = "apc.c.bin";
    const char string[] = "Disse o corvo, \"Nunca mais\".\n";
    FILE *fp = fopen(arquivo, "wb+" );

    if(!fp) {
        printf("Não foi possível abrir \"%s\".\n", arquivo);
        return EXIT_FAILURE;
    }

    fwrite(string, sizeof(string), 1, fp);
    fseek(fp, 16, SEEK_SET);
    fwrite("Chega", sizeof(char), 5, fp);
    fclose(fp);

    /* O que você espera que tenha acontecido? Abra o arquivo gerado e confira... */

    return EXIT_SUCCESS;
}