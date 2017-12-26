/**      @file: 00-erros.c
 *     @author: Guilherme N. Ramos (gnramos@unb.br)
 * @disciplina: Algoritmos e Programação de Computadores
 *
 * Exemplos de tipos de erros mais comuns (tente corrigi-los). */

#include <stdio.h>

int main() {
	/* Erro sintático: */
	int x

	/* Erro sintático: */
	printf("%d", y);

	/* Erro de execução: */
	printf("%d", x[2]);

	/* Erro de execução: */
	printf("%f", 2 / 0);

	/* Erro semântico */
	int lado = 2;
	int perimetro = lado * lado;
	printf("O perimetro do quadrado de lado %d é %d\n", lado, perimetro);

	/* Erro semântico */
	perimetro = 4 * lado;
	printf("E se dobrarmos o lado, o perimetro torna-se: %d\n", perimetro);
	lado *= 2;

    return 0;
}
