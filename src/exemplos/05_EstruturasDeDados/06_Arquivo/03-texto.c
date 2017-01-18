/**      @file: 03-texto.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de leitura e escrita em arquivo texto. */

#include <stdio.h>
#include <stdlib.h>

typedef char string[50];

/* Cria um arquivo com o nome dado como argumento. Retorna EXIT_SUCCESS caso
 * seja possível, EXIT_FAILURE caso contrário. */
int cria(char* arquivo) {
  FILE *fp = fopen(arquivo, "w+");

  if(!fp) {
    printf("Não foi possível abrir \"%s\".\n", arquivo);
    return EXIT_FAILURE;
  }

  const string str = "Algoritmos e Programação de Computadores";
  const double d = 12.23;
  const int i = 101;

  fprintf(fp, "%s\n%lf\n\t%d", str, d, i);
  fclose(fp);

  return EXIT_SUCCESS;
}

/* Mostra na saída padrão o conteúdo do arquivo dado como argumento. */
void mostra(char* arquivo) {
  string str;

  FILE *fp = fopen(arquivo, "r");

  if(!fp)
    return;

  /* "Texto" é composto apenas por caracteres. */
  fscanf(fp, "%[^\n]", str);
  printf("string = %s\n", str);
  fscanf(fp, "%s", str);
  printf("string = %s\n", str);
  fscanf(fp, "%s", str);
  printf("string = %s\n", str);

  fclose(fp);
}


/* Mostra na saída padrão o conteúdo do arquivo dado como argumento conforme os
 * tipos. */
void mostra_formatado(char* arquivo) {
  string str;
  double d;
  int i;

  FILE *fp = fopen(arquivo, "r");

  if(!fp)
    return;

  /* Lê do arquivo na ordem: string -> real -> inteiro. É essencial que seja
   * a mesma ordem em que foi escrito, pois as informações estarão incorretas
   * caso contrário. */
  fscanf(fp, "%[^\n]\n%lf\n\t%d", str, &d, &i);
  fclose(fp);

  printf("string = %s\n", str);
  printf("double = %lf\n", d);
  printf("   int = %d\n", i);
}

/* Mostra na saída padrão o conteúdo do arquivo dado como argumento, mas lê as
 * informações em ordem diferente da que foi escrita. */
void mostra_errado(char* arquivo) {
    string str;
  double d;
  int i;
  FILE *fp = fopen(arquivo, "r");

  if(!fp)
      return;

  /* Lê do arquivo na ordem: inteiro -> real -> string. */
  fscanf(fp, "%d\n%lf\n%[^\n]\n", &i, &d, str);
  fclose(fp);

  printf("string = %s\n", str);
  printf("double = %lf\n", d);
  printf("   int = %d\n", i);
}

int main() {
  char arquivo[] = "apc.c.txt";

  if(cria(arquivo) == EXIT_SUCCESS) {
    printf("Leitura correta:\n");
    mostra(arquivo);
    printf("\nLeitura correta com formatação:\n");
    mostra_formatado(arquivo);
    printf("\nLeitura incorreta:\n");
    mostra_errado(arquivo);
  }

  return EXIT_SUCCESS;
}