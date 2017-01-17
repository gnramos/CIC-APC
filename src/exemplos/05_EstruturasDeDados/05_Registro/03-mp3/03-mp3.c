/**      @file: 03-mp3.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de uso de registro (ID3v1) para armazenar as
 * informações de um arquivo no formato MP3. Veja mais em:
 * http://en.wikipedia.org/wiki/ID3#ID3v1 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
   char header[3];
   char titulo[30];
   char artista[30];
   char album[30];
   char ano[4];
   char comentario[30];
   unsigned char genero;
} mp3_ID3v1;

/* Retorna 1 se o arquivo existe, 0 caso contrário. */
int existe_e_pode_abrir(char *arquivo) {
  FILE *fp = fopen(arquivo, "rb");
  if(fp) {
    fclose(fp);
    return 1;
  }

  return 0;
}

/* Retorna 1 se o registro estiver preenchido corretamente, 0
 * caso contrário. */
int valido(mp3_ID3v1 id3v1) {
    return (strncmp(id3v1.header, "TAG", 3) ? 0 : 1);
}

/* Tenta abrir e ler o arquivo MP3 para preencher um registro
 * com as informações (supõe que o arquivo existe). Retorna o
 * registro preenchido, se conseguiu abrir, vazio caso
 * contrário. */
mp3_ID3v1 le_ID3v1(char *arquivo) {
    mp3_ID3v1 id3v1;

    FILE *fp = fopen(arquivo, "rb");
    if (fp) {
        fseek(fp, -sizeof(mp3_ID3v1), SEEK_END);
        fread(&id3v1, sizeof(mp3_ID3v1), 1, fp);
        fclose(fp);
    } else
        printf("Erro ao tentar abrir \"%s\".\n", arquivo);

    return id3v1;
}

/* Exibe as informações do registro na saída padrão. */
void mostra_ID3v1(mp3_ID3v1 id3v1) {
    printf("Título: %.30s\n", id3v1.titulo);
    printf("Artista: %.30s\n", id3v1.artista);
    printf("Album: %.30s\n", id3v1.album);
    printf("Ano: %.4s\n", id3v1.ano);

    if (id3v1.comentario[28] == '\0') {
        printf("Comentário: %.28s\n", id3v1.comentario);
        printf("Número: %d\n", id3v1.comentario[29]);
    }
    else {
        printf("Comentário: %.30s\n", id3v1.comentario);
    }

    printf("Gênero: %u\n\n", id3v1.genero);
}

/* Retorna 1 se o usuário indicar que deseja abrir o arquivo
 * com o programa ('s' ou 'S'), 0 caso contrário. */
int quer_abrir_com(char *aplicativo) {
    printf("Abrir o arquivo com o aplicativo \"%s\"? (S/N)\n", aplicativo);

    switch(getchar()) {
        case 's':
        case 'S':
            return 1;
        default:
            return 0;
    }
}

/* Tenta abrir o arquivo dado com o aplicativo dado,
 * retornando o resultado da chamada. */
int abre(char* arquivo, char *aplicativo) {
    char comando[200];

    sprintf(comando, "%s '%s'", aplicativo, arquivo);
    return system(comando);
}

int main(int argc, char** argv) {
    char *arquivo, *aplicativo = NULL;
    mp3_ID3v1 id3v1;

    /* Validação da entrada. */
    if(argc < 2) {
        printf("É preciso passar pelo menos um arquivo MP3 como argumento.\n");
        return EXIT_FAILURE;
    } else if(argc > 2)
        aplicativo = argv[2];

    /* Verificação da entrada. */
    arquivo = argv[1];
    if(!existe_e_pode_abrir(arquivo)) {
        printf("Arquivo \"%s\" não encontrado ou não pode ser lido.\n", arquivo);
        return EXIT_FAILURE;
    }

    /* Leitura do cabeçalho. */
    id3v1 = le_ID3v1(arquivo);
    if(!valido(id3v1)) {
        printf("Não foi possível ler cabeçalho arquivo \"%s\".\n", arquivo);
        return EXIT_FAILURE;
    }

    mostra_ID3v1(id3v1);

    /* "Bônus" */
    if(aplicativo && quer_abrir_com(aplicativo)) {
        if(abre(arquivo, aplicativo)) {
            printf("Erro ao tentar abrir o arquivo \"%s\" com o aplicativo \"%s\".\n", arquivo, argv[2]);
            return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}
