/*	Universidade de Brasilia
 *	Pseudocodigo -   Exemplo do laço de repetição WHILE. 
 *	Author: M. Vieira Coelho Neto
 * 	File: 3-switch.md
 * 	Descrição feita pelo professor Guilherme N. Ramos (gnramos@unb.br)
 *	Disciplina: Algoritmos e Programação de Computadores */

Algoritmo demo_while

Variaveis
Inteiro: N <- 10, i <- 0;

Inicio

Mostra "Enquanto (i < _ )", N

Enquanto (i < N)
	Mostra "_", i
	i <- i+1
Fim-Enquanto

Mostra "Enquanto (i > 0)"

Enquanto(i > 0)
	Mostra "_", --i
Fim-Enquanto

i <- N
Mostra "Enquanto (i > 0)"

Enquanto(i--)
	Mostra "_", i
Fim-Enquanto

Fim
