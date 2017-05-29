/**      @file: imagem.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Arquivo auxiliar para exercitar a aplicação de registros. */

#include <stdio.h>

/* Defina o tipo file_header aqui. Considere o resultado do
exercício anterior (02-imagem). */

int main() {
	file_header imagem;

	/* Defina os valores de uma imagem 800x600. */

	/* Vamos ignorar o tipo por enquanto...*/
	/*if(imagem.tipo != ??)
		printf("Tipo incorreto!\n"); */

	if(imagem.tamanho != 1440024)
		printf("Tamanho incorreto!\n");
	if(imagem.info.resolucao != 480000)
		printf("Resolução incorreta!\n");
	if(imagem.info.largura != 800)
		printf("Largura incorreta!\n");
	if(imagem.info.altura != 600)
		printf("Altura incorreta!\n");
	if(imagem.info.tamanho !=  1440000)
		printf("Tamanho incorreto!\n");

    return 0;
}



