/**      @file: 06-fizzbuzz.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * FizzBuzz é uma brincadeira de números e palavras. Os jogadores jogam em
 * turnos incrementais, onde cada um diz um número substituindo os números
 * divisíveis por 3 pela palavra "fizz", e números divisíveis por 5 pela palavra
 * "buzz". Se o número for múltiplo de 3 e 5, diga "fizzbuzz". Por exemplo, para
 * os números de 1 a 30, a reposta é a sequência:
 *
 * 1, 2, fizz, 4, buzz, fizz, 7, 8, fizz, buzz, 11, fizz, 13, 14, fizzbuzz, 16,
 * 17, fizz, 19, buzz, fizz, 22, 23, fizz, buzz, 26, fizz, 28, 29, fizzbuzz
 *
 * Implemente a função FizzBuzz, que recebe um número e define o que deve ser
 * dito, usando TDD.
 */

#include <assert.h> /* A macro "assert" testa a condição dada. */
#include <string.h> /* A função strcmp compara strings. */
#include <stdio.h>

/* Recebe o número n e escreve a sequência de "números" até n no vetor dado.
Assume que "resposta" tem tamanho suficiente para armazenar a sequência. */
void FizzBuzz(int n, char *resposta) {
	/* Implemente o código aqui. */
}

/* Testa a função FizzBuzz para o número 1. */
void testa_um() {
	char resposta[30];

	FizzBuzz(1, resposta);
	assert(0 == strcmp(resposta, "1"));
}

/* Testa a função FizzBuzz para o número 5. */
void testa_cinco() {
	char resposta[30];

	FizzBuzz(5, resposta);
	assert(0 == strcmp(resposta, "buzz"));
}

int main() {
	testa_um();
	testa_cinco();

	return 0;
}