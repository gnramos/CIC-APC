/**      @file: 01-toupper.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente a função toupper. */

#include <stdio.h>
#include <stdio.h>

/* Transforma todas as letras do alfabeto presentes no string
 * dado em sua versão maiúscula, não altera os demais
 * caracteres. */
void toupper(char* str) {

}

void test(char *str) {
    printf("%s -> ", str);
    toupper(str);
    printf("%s\n", str);
}

int main() {
    char str0[] = "abc";
    char str1[] = "ABC";
    char str2[] = "a";
    char str3[] = "Hello World!";
    char str4[] = "Hello, KiTTy...";

    test(str0);
    test(str1);
    test(str2);
    test(str3);
    test(str4);

    return 0;
}

/* Resultado esperado:

abc -> ABC
ABC -> ABC
a -> A
Hello World! -> HELLO WORLD!
Hello, KiTTy... -> HELLO, KITTY... */
