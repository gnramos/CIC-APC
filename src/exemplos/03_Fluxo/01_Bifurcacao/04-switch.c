/**      @file: 4-switch.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de utilização dos condicionais com switch. */

#include <stdio.h>

int main () {
    char c;

    printf("\nDigite uma letra: ");
    scanf("%c", &c);

    switch(c) {
         case 'a':
         case 'A':
             printf("\n%c de \"amor\".", c);
             break;
         case 'b':
         case 'B':
             printf("\n%c de \"baixinho\".", c);
             break;
         case 'c':
         case 'C':
             printf("\n%c de \"coração\".", c);
             break;
         case 'd':
         case 'D':
             printf("\n%c de \"docinho\".", c);
             break;
         case 'e':
         case 'E':
             printf("\n%c de \"escola\".", c);
             break;
         case 'f':
         case 'F':
             printf("\n%c de \"feijão\".", c);
             break;
         case 'g':
         case 'G':
             printf("\n%c de \"gente\".", c);
             break;
         case 'h':
         case 'H':
             printf("\n%c de \"humano\".", c);
             break;
         case 'i':
         case 'j':
         case 'k':
         case 'l':
         case 'm':
         case 'n':
         case 'o':
         case 'p':
         case 'q':
         case 'r':
         case 's':
         case 't':
         case 'u':
         case 'w':
         case 'x':
         case 'y':
         case 'z':
         case 'I':
         case 'J':
         case 'K':
         case 'L':
         case 'M':
         case 'N':
         case 'O':
         case 'P':
         case 'Q':
         case 'R':
         case 'S':
         case 'T':
         case 'U':
         case 'W':
         case 'X':
         case 'Y':
         case 'Z':
             printf("\n%c de alguma palavra...", c);
             break;
         default:
             printf("\nOpa, \'%c\'' não é uma letra!", c);
    }

    return 0; /* Não houve erro(s). */
}