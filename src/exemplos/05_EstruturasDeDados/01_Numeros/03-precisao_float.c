/**      @file: 04-precisao_float.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implementação de código para exemplificar o erro de
 * precisão com tipo float.
 *
 * Exemplo do livro A Whirlwind Tour of Python, de Jake VanderPlas
 * http://www.oreilly.com/programming/free/files/a-whirlwind-tour-of-python.pdf */

#include <stdio.h>

int main() {
    if (0.1 + 0.2 == 0.3)
        printf("0.1 + 0.2 == 0.3\n");
    else
        printf("0.1 + 0.2 != 0.3\n");

    printf("\n0.1 == %.17f\n", 0.1);
    printf("0.2 == %.17f\n", 0.2);
    printf("0.3 == %.17f\n", 0.3);

  return 0;
}