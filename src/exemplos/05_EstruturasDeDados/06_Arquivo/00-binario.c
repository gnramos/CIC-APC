/**      @file: 00-binario.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de leitura e escrita em arquivo binário. */

#include <stdio.h>
#include <stdlib.h>

typedef char string[50];

/* Cria um arquivo com o nome dado como argumento. Retorna
 * EXIT_SUCCESS caso seja possível, EXIT_FAILURE caso
 * contrário. */
int cria(char* arquivo) {
  const string str = "Algoritmos e Programação de Computadores";
  const double d = 12.23;
  const int i = 101;

  /* O que acontece se não for possível abrir o arquivo? (ele
   * não existe, você não tem permissão para tanto, alguém já
   * o está manipulando, etc.) */
  FILE *fp = fopen(arquivo, "wb+"); /* "b" de "binário"... */

  /* É fácil verificar: se for possível abrir o arquivo, o
   * ponteiro indicará um endereço de memória válido; se não
   * for possível, basta indicar isso atribuindo ao ponteiro
   * um valor notoriamente "inválido": o endereço 0 (NULL). */
  if((fp == NULL) && (!fp) && (fp == 0)) {
      /* Os testes são equivalentes. */
      printf("Não foi possível abrir \"%s\".\n", arquivo);
      return EXIT_FAILURE;
  }

  /* Escreve no arquivo na ordem: string -> real -> inteiro. */
  fwrite(str, sizeof(str), 1, fp);
  fwrite(&d, sizeof(d), 1, fp);
  fwrite(&i, sizeof(i), 1, fp);

  /* O programador é responsável pelo arquivo. */
  fclose(fp);

  return EXIT_SUCCESS;
}

/* Mostra na saída padrão o conteúdo do arquivo dado como argumento. */
void mostra(char* arquivo) {
  string str;
  double d;
  int i;
  FILE *fp = fopen(arquivo, "rb");

  if(!fp)
      return;

  /* Lê do arquivo na ordem: string -> real -> inteiro. É essencial que seja
   * a mesma ordem em que foi escrito, pois as informações estarão incorretas
   * caso contrário. */
  fread(str, sizeof(str), 1, fp); /* tem de ser do tamanho certo! */
  fread(&d, sizeof(d), 1, fp);
  fread(&i, sizeof(i), 1, fp);
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
  FILE *fp = fopen(arquivo, "rb");

  if(!fp)
      return;

  /* Lê do arquivo na ordem: inteiro -> real -> string. */
  fread(&i, sizeof(i), 1, fp);
  fread(&d, sizeof(d), 1, fp);
  fread(str, sizeof(str), 1, fp); /* tem de ser do tamanho certo! */
  fclose(fp);

  printf("string = %s\n", str);
  printf("double = %lf\n", d);
  printf("   int = %d\n", i);
}

int main() {
  char arquivo[] = "apc.bin";

  if(cria(arquivo) == EXIT_SUCCESS) {
    printf("Leitura correta:\n");
    mostra(arquivo);
    printf("\nLeitura incorreta:\n");
    mostra_errado(arquivo);
  }

  return EXIT_SUCCESS;
}
