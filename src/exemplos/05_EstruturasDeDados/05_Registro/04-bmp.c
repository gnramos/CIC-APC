/**      @file: 04-bmp.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de leitura de cabeçalho de arquivo BMP. */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* Definição de tipos.
 * http://msdn.microsoft.com/en-us/library/cc230309.aspx */
typedef uint8_t  BYTE;
typedef uint32_t DWORD;
typedef int32_t  LONG;
typedef uint16_t WORD;

/* Informações sobre o tipo, tamanho e layout do arquivo.
 * http://msdn.microsoft.com/en-us/library/dd183374(VS.85).aspx */
typedef struct {
    WORD   bfType;
    DWORD  bfSize;
    WORD   bfReserved1;
    WORD   bfReserved2;
    DWORD  bfOffBits;
}  __attribute__((__packed__)) BITMAPFILEHEADER;
/* https://gcc.gnu.org/onlinedocs/gcc/Type-Attributes.html */

/* Informações sobre as dimensões e formato de cor da imagem.
 * http://msdn.microsoft.com/en-us/library/dd183376(VS.85).aspx */
typedef struct {
    DWORD  biSize;
    LONG   biWidth;
    LONG   biHeight;
    WORD   biPlanes;
    WORD   biBitCount;
    DWORD  biCompression;
    DWORD  biSizeImage;
    LONG   biXPelsPerMeter;
    LONG   biYPelsPerMeter;
    DWORD  biClrUsed;
    DWORD  biClrImportant;
}  __attribute__((__packed__)) BITMAPINFOHEADER;

/** Informação de intensidade RGB do pixel.
 * http://msdn.microsoft.com/en-us/library/aa922590.aspx */
typedef struct {
    BYTE  rgbtBlue;
    BYTE  rgbtGreen;
    BYTE  rgbtRed;
}  __attribute__((__packed__)) RGBTRIPLE;

BITMAPFILEHEADER le_BITMAPFILEHEADER(char* arquivo) {
    BITMAPFILEHEADER header;

    FILE *fp = fopen(arquivo, "rb");
    if (fp) {
        fread(&header, sizeof(BITMAPFILEHEADER), 1, fp);
        fclose(fp);
    } else
        printf("Erro ao tentar abrir \"%s\".\n", arquivo);

    return header;
}

void mostra_BITMAPFILEHEADER(BITMAPFILEHEADER header) {
    printf("BITMAPFILEHEADER\n");
    printf("\tTipo: %hu\n", header.bfType);   /* uint16_t */
    printf("\tTamanho: %u\n", header.bfSize); /* uint32_t */
}

BITMAPINFOHEADER le_BITMAPINFOHEADER(char* arquivo) {
    BITMAPINFOHEADER header;

    FILE *fp = fopen(arquivo, "rb");
    if (fp) {
        fseek(fp, sizeof(BITMAPFILEHEADER), SEEK_SET);
        fread(&header, sizeof(BITMAPINFOHEADER), 1, fp);
        fclose(fp);
    } else
        printf("Erro ao tentar abrir \"%s\".\n", arquivo);

    return header;
}

void mostra_BITMAPINFOHEADER(BITMAPINFOHEADER header) {
    printf("BITMAPINFOHEADER\n");
    printf("\tTamanho: %u\n", header.biSize); /* uint32_t */
    printf("\tLargura: %d\n", header.biWidth); /* int32_t */
    printf("\tAltura: %d\n", abs(header.biHeight)); /* int32_t */
    printf("\tTamanho da imagem: %u\n", header.biSizeImage); /* uint32_t */
}


/* Retorna 1 se o arquivo existe, 0 caso contrário. */
int existe_e_pode_abrir(char *arquivo) {
  FILE *fp = fopen(arquivo, "rb");
  fclose(fp);

  return (fp ? 1 : 0);
}

int main(int argc, char** argv) {
    char *arquivo;

    /* Validação da entrada. */
    if(argc < 2) {
        printf("É preciso passar pelo menos um arquivo BMP como argumento.\n");
        return EXIT_FAILURE;
    }

    /* Verificação da entrada. */
    arquivo = argv[1];
    if(!existe_e_pode_abrir(arquivo)) {
        printf("Arquivo \"%s\" não encontrado ou não pode ser lido.\n", arquivo);
        return EXIT_FAILURE;
    }

    mostra_BITMAPFILEHEADER(le_BITMAPFILEHEADER(arquivo));
    mostra_BITMAPINFOHEADER(le_BITMAPINFOHEADER(arquivo));

    return 0;
}
