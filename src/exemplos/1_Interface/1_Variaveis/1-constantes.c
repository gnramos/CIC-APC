/**      @file: 1-constantes.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo do uso de constantes. */

#include <stdio.h>

int main() {
    /* Constantes se referem a valores fixos, que o programa não pode alterar
     * durante a execução. Constantes podem ser de quaisquer dos tipos básicos
     * (inteiro, ponto flutuante, simbólico).
     *
     * Existem regras para nomear variáveis, tanto de sintaticamente quanto
     * semanticamente. Pode-se usar apenas letras e dígitos, e o caractere '_'.
     * Geralmente, utiliza-se apenas letras maiúsculas para nomes de constantes
     * de modo que seja mais fácil identificá-las no código (em contraste a
     * variáveis). */

    /* Constantes inteiras: */
    const int QUARENTA_E_DOIS = 42;
    const int OCTAL           = 052;  /* 0 a esquerda. */
    const int HEXADECIMAL     = 0x2A; /* 0x a esquerda. */

    /* Constantes reais: */
    const float PI         = 3.14159;
    const float PI_DE_NOVO = 314159E-5L;

    /* Constantes simbólicas: */
    const char A               = 'a';
    const char TABULACAO       = '\t';
    const char QUEBRA_DE_LINHA = '\n';

    printf("QUARENTA_E_DOIS = [%d].\n", QUARENTA_E_DOIS);
    printf("OCTAL           = [%d] (em octal = [%o]).\n", OCTAL, OCTAL);
    printf("HEXADECIMAL     = [%d] (em hexadecimal = [%x]).\n", HEXADECIMAL, HEXADECIMAL);
    printf("PI              = [%f].\n", PI);
    printf("PI_DE_NOVO      = [%f].\n", PI_DE_NOVO);
    printf("A               = [%c].\n", A);
    printf("TABULACAO       = [%c].\n", TABULACAO);
    printf("QUEBRA_DE_LINHA = [%c].\n", QUEBRA_DE_LINHA);

    /* "Constante" significa que não pode variar. Tente compilar qualquer das
     * instruções a seguir: */

    /* QUARENTA_E_DOIS = 2; */
    /* PI              = 3; */
    /* A               = 'b'; */

    return 0;
}
