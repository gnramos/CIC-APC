/*	Universidade de Brasilia
 *	Pseudocodigo -   Exemplo do laço de repetição WHILE. 
 *	Author: M. Vieira Coelho Neto
 * 	File: 7-for.md
 * 	Descrição feita pelo professor Guilherme N. Ramos (gnramos@unb.br)
 *	Disciplina: Algoritmos e Programação de Computadores */

Algoritmo soma_interna

Variaveis
Inteiro: i, n, soma <- 0

Inicio

Mostra "Bom dia! Digite um número positivo:"
Ler n

Para i <- 1, até n, faça
	soma <- soma + i
Fim-Para

Mostra "A soma de 0 a _ é: _", n, soma

Fim