/**      @file: 7-string.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso de vetor de caracteres com caractere de término '\0'. */

#include "apc_vetor.h"

int main() {
    const int TAM = 50;
    char frase[TAM];

    printf("Digite um string: ");
    scanf("%[^\n]", frase);

    mostra_indices(TAM, "          ");
    /* Assume-se que o string termina em '\0'. */
    mostra_ate_char(frase, '\0');

    /* Esta é de fato a forma padrão de indicar o término do vetor. */
    printf("string = [%s]\n", frase);

    return 0;
}