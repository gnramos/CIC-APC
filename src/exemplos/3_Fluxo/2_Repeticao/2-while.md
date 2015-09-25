/*	Universidade de Brasilia
 *	Pseudocodigo -   Exemplo do laço de repetição WHILE. 
 *	Author: M. Vieira Coelho Neto
 * 	File: 2-while.md
 * 	Descrição feita pelo professor Guilherme N. Ramos (gnramos@unb.br)
 *	Disciplina: Algoritmos e Programação de Computadores */

Inicio
Variaveis
Inteiro: N <- 10, i <- 0, soma <- 0

Enquanto i <= N
	soma <- soma + i
	i++
Fim-Enquanto

Mostra "Soma de 0 a _ é _", N, soma

i = N
soma = 0

Enquanto i
	soma <- soma + i++
Fim-Enquanto

Mostra "_ é a soma de _ a _." soma, N, i

Fim