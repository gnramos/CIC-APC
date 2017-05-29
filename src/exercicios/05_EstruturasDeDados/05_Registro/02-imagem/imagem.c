/**      @file: imagem.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Arquivo auxiliar para exercitar a aplicação de registros. */

#include <stdio.h>

/* Defina o tipo file_info aqui. */

int main() {
	file_info imagem;

	/* Defina os valores de uma imagem 800x600. */

	if(imagem.resolucao != 480000)
		printf("Resolução incorreta!\n");
	if(imagem.largura != 800)
		printf("Largura incorreta!\n");
	if(imagem.altura != 600)
		printf("Altura incorreta!\n");
	if(imagem.tamanho !=  1440000)
		printf("Tamanho incorreto!\n");

    return 0;
}



