/**      @file: 1-iniciante.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplo de erro simples para depuração.
 *
 * Baseado no livro "The Practice of Programming", de Brian
 * W. Kernighan e Rob Pike (Addison-Wesley, 1999). */

#include <stdio.h>

int main() {
	const float PI = 3.141569;
	int r = 10;

	float area = PI*r*r;

	printf("A área de um círculo de raio %d é %f.\n", area, r);

    return 0;
}