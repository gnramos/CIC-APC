/**      @file: 01-binario.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de leitura e escrita em arquivo binário. */

#include <stdio.h>
#include <stdlib.h>

#define LETRAS 26 /* Valor constante global. */
#define NUMEROS 12 /* Valor constante global. */

/* Cria um arquivo com o nome dado como argumento. Retorna EXIT_SUCCESS caso
 * seja possível, EXIT_FAILURE caso contrário. */
int cria(char* arquivo) {
    const char string[] = "abcdefghijklmnopqrstuvwxyz";
    int i;
    FILE *fp = fopen(arquivo, "wb+");

    if(!fp) {
        printf("Não foi possível abrir \"%s\".\n", arquivo);
        return EXIT_FAILURE;
    }

    /* Escreve string em bloco. */
    fwrite(string, sizeof(string), 1, fp);

    /* Escreve números, um de cada vez. */
    for(i = 1; i <= NUMEROS; ++i)
        fwrite(&i, sizeof(i), 1, fp);

    fclose(fp);

    return EXIT_SUCCESS;
}

/* Mostra na saída padrão o conteúdo do arquivo dado como argumento. */
void mostra(char* arquivo) {
    char c;
    int i, numeros[NUMEROS];

    FILE *fp = fopen(arquivo, "rb");

    if(fp != NULL) {
        /* Lê um caractere de cada vez, +1 para o caractere
         * de terminação do string.  */
        printf("string: ");
        for(i = 0; i < LETRAS + 1; ++i) {
            fread(&c, sizeof(c), 1, fp);
            putchar(c);
        }

        /* Lê em bloco. */
        printf("\nnumeros:");
        fread(numeros, sizeof(numeros), 1, fp);

        for(i = 0; i < NUMEROS; ++i)
            printf(" %d", numeros[i]);
        printf("\n");

        fclose(fp);
    }
}

int main() {
    char arquivo[] = "apc.c.bin";

    if(cria(arquivo) == EXIT_SUCCESS)
        mostra(arquivo);


    return EXIT_SUCCESS;
}