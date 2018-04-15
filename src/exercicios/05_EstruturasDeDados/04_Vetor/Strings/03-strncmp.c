/**      @file: 03-strncmp.c
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
    /* Implemente o código aqui. */
}

/* Mostra n caracteres a partir do endereço dado, interrompe
 * o processo caso encontre o caractere nulo. */
void putnchar(char* str, int n) {
    int i;
    putchar('[');
    for(i = 0; i < n && str[i]; ++i)
        putchar(str[i]);
    putchar(']');
}

int main() {
    const int LEN_STR1 = 13, LEN_STR2 = 35;

    char str1[] = "Hello World!";
    char str2[] = "Hello World! E mais alguma coisa...";
    int n;

    for(n = 0; n <= LEN_STR2; ++n) {
        putnchar(str1, n);
        if(strncmp(str1, str2, n) == 0)
            printf(" == ");
        else
            printf(" != ");
        putnchar(str2, n);
        putchar('\n');
    }

    return 0;
}

/* Saída esperada:

[] == []
[H] == [H]
[He] == [He]
[Hel] == [Hel]
[Hell] == [Hell]
[Hello] == [Hello]
[Hello ] == [Hello ]
[Hello W] == [Hello W]
[Hello Wo] == [Hello Wo]
[Hello Wor] == [Hello Wor]
[Hello Worl] == [Hello Worl]
[Hello World] == [Hello World]
[Hello World!] != [Hello World!]
[Hello World!] != [Hello World! ]
[Hello World!] != [Hello World! E]
[Hello World!] != [Hello World! E ]
[Hello World!] != [Hello World! E m]
[Hello World!] != [Hello World! E ma]
[Hello World!] != [Hello World! E mai]
[Hello World!] != [Hello World! E mais]
[Hello World!] != [Hello World! E mais ]
[Hello World!] != [Hello World! E mais a]
[Hello World!] != [Hello World! E mais al]
[Hello World!] != [Hello World! E mais alg]
[Hello World!] != [Hello World! E mais algu]
[Hello World!] != [Hello World! E mais algum]
[Hello World!] != [Hello World! E mais alguma]
[Hello World!] != [Hello World! E mais alguma ]
[Hello World!] != [Hello World! E mais alguma c]
[Hello World!] != [Hello World! E mais alguma co]
[Hello World!] != [Hello World! E mais alguma coi]
[Hello World!] != [Hello World! E mais alguma cois]
[Hello World!] != [Hello World! E mais alguma coisa]
[Hello World!] != [Hello World! E mais alguma coisa.]
[Hello World!] != [Hello World! E mais alguma coisa..]
[Hello World!] != [Hello World! E mais alguma coisa...] */