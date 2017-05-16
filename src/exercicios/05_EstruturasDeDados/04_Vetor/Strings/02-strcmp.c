  /**      @file: vetor/strings/2-strcmp.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente a função strcmp. */

#include <stdio.h>

/* Comparação lexicográfica, retorna:
 *   -1 se str1 for menor que str2
 *    0 se forem iguais
 *    1 se str1 for maior que str2 */
int strcmp(char* str1, char* str2) {
  /* Implemente o código aqui. */
}

int main() {
  char* str0 = "abc";
  char* str1 = "ABC";
  char* str2 = "a";
  char* str3 = "abcde";

  printf("strcmp(%s,%s)=%d\n", str0,str0, strcmp(str0,str0));
  printf("strcmp(%s,%s)=%d\n", str0,str1, strcmp(str0,str1));
  printf("strcmp(%s,%s)=%d\n", str0,str2, strcmp(str0,str2));
  printf("strcmp(%s,%s)=%d\n", str0,str3, strcmp(str0,str3));
  printf("strcmp(%s,%s)=%d\n", str1,str1, strcmp(str1,str1));
  printf("strcmp(%s,%s)=%d\n", str1,str2, strcmp(str1,str2));
  printf("strcmp(%s,%s)=%d\n", str1,str3, strcmp(str1,str3));
  printf("strcmp(%s,%s)=%d\n", str2,str2, strcmp(str2,str2));
  printf("strcmp(%s,%s)=%d\n", str2,str3, strcmp(str2,str3));
  printf("strcmp(%s,%s)=%d\n", str3,str3, strcmp(str3,str3));

  return 0;
}

/* Saída esperada:

strcmp(abc,abc)=0
strcmp(abc,ABC)=1
strcmp(abc,a)=1
strcmp(abc,abcde)=-1
strcmp(ABC,ABC)=0
strcmp(ABC,a)=-1
strcmp(ABC,abcde)=-1
strcmp(a,a)=0
strcmp(a,abcde)=-1
strcmp(abcde,abcde)=0  */
