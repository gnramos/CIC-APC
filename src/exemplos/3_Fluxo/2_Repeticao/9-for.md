/*	Universidade de Brasilia
 *	Pseudocodigo -   Exemplo do laço de repetição WHILE. 
 *	Author: M. Vieira Coelho Neto
 * 	File: 9-for.md
 * 	Descrição feita pelo professor Guilherme N. Ramos (gnramos@unb.br)
 *	Disciplina: Algoritmos e Programação de Computadores */

Algoritmo soma_com_for

Variaveis
Inteiro: i <- 0, n <- 10, soma <- 0

Inicio

Mostra "Para i <- 0, até _, soma <- soma + i", n

Para i <- 0, até n, faça
	soma <- soma + i
Fim-Para

Mostra "A soma de 0 a _ é: _", n, soma

Mostra "Para i <- 0, soma <-0, até _-1, passo soma <- soma + i", n
Para i <- 0, soma <- 0, até n-1, passo soma <- soma +i faça
Fim-para

Mostra "A soma de 0 a _ é: _", n, soma


Fim