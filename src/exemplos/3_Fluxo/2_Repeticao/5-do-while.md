/*	Universidade de Brasilia
 *	Pseudocodigo -   Exemplo do laço de repetição WHILE. 
 *	Author: M. Vieira Coelho Neto
 * 	File: 5-do-while.md
 * 	Descrição feita pelo professor Guilherme N. Ramos (gnramos@unb.br)
 *	Disciplina: Algoritmos e Programação de Computadores */

Algoritmo do_while_mao_dupla

Variaveis
Inicio N <- 10, i <- 0, soma <- 0

Inicio

Faça
	soma = soma + i
	i++
Enquanto i <= N

Mostra "Soma de 0  a _ = _.", N, soma
Mostra "i = _.", i

Faça
	soma <- soma + i
	i++
	Mostra "Teste da condição ao final, executa os comandos pelo menos uma vez."
Enquanto i <= N

Mostra "Agora i = _ e soma = _.", i, soma

Fim