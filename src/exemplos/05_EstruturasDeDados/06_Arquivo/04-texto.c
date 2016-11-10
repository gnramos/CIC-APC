/**      @file: 04-texto.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de leitura de um arquivo texto e escrita em outro
 * arquivo. */

#include <stdio.h>
#include <stdlib.h>

int copia(char* arquivo) {
  char backup[500], string[500];

  FILE* saida = NULL;
  FILE* entrada = fopen(arquivo, "r");

  if(entrada == NULL) {
    printf("Não foi possível abrir \"%s\".\n", arquivo);
    return EXIT_FAILURE;
  }

  /* Definição do identificador do novo arquivo. */
  sprintf(backup, "copia_de_%s", arquivo);
  saida = fopen(backup, "w+");

  if(saida == NULL) {
    printf("\nNão foi possível abrir \"%s\".\n", backup);
    fclose(entrada); /* <-  */
    return EXIT_FAILURE;
  }

  /* Escreve cabeçalho. */
  fprintf(saida, "/**      @file: %s\n", backup);
  fprintf(saida, " *     @author: [gerado automaticamente]\n");
  fprintf(saida, " * @disciplina: Algoritmos e Programação de Computadores\n");
  fprintf(saida, " *\n * Exemplo de manipulação de arquivos. Este arquivo foi\n");
  fprintf(saida, " * gerado a partir de \"%s\". */\n\n", arquivo);

  /* Copia linha a linha. */
  while(NULL != fgets(string, sizeof(string), entrada))
    fputs(string, saida);

  fclose(saida);
  fclose(entrada);

  return EXIT_SUCCESS;
 }


int main(int argc, char** argv) {
  if(argc < 2) {
    printf("É preciso fornecer um arquivo texto como argumento.\n");
    return EXIT_FAILURE;
  }

  if(EXIT_SUCCESS != copia(argv[1])) {
    printf("Houve um erro ao tentar copiar \"%s\"\n", argv[1]);
  }

  return EXIT_SUCCESS;
}