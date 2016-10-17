/**      @file: cabecalho.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Implemente a função cabecalho. */

#include <stdio.h>

/* Mostra na saída padrão o cabeçalho de um arquivo de código
 * fonte (similar ao deste arquivo). */
void cabecalho(char* arquivo, char* autor, char* descricao) {
	/* Implemente o código aqui. */
}

int main() {
	char arquivo[500], autor[500], descricao[500];

	scanf("%[^\n] ", arquivo);
	scanf("%[^\n] ", autor);
	scanf("%[^\n] ", descricao);

    cabecalho(arquivo, autor, descricao);

    return 0;
}