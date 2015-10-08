/*	Universidade de Brasilia
 *	Pseudocodigo -  Implementação de código para aproximar o valor da raiz
 *  quadrada de um número inteiro não negativo. 
 *	Author: Manoel Vieira Coelho Neto
 * 	File: 2-raiz2-1.md
 * 	Descrição feita pelo professor Guilherme N. Ramos (gnramos@unb.br)
 *	Disciplina: Algoritmos e Programação de Computadores */

Algoritmo estimativa_raiz_condicionada

Variaveis
Inteiro: r, n

Inicio

Mostra "Qual o valor de n?"
Ler n

Se n < 0, então,
	Mostra "Não sei calcular a raiz quadrada de número negativo."
senão,

	Mostra "Qual a sua estimativa inicial para a raiz de _?", n
	Ler r

	Se r <= 0, então,
		Mostra "A raiz nao pode ser menor que 0."
	senão,
		r = (r+(n/r))/2
		r = (r+(n/r))/2
		Mostra "Depois de 3 tentativas, a aproximação da raiz de _ é:", r
	Fim-se
Fim-se
Fim

