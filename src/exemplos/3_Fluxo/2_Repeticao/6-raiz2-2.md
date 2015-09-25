/*	Universidade de Brasilia
 *	Pseudocodigo -   Exemplo do laço de repetição WHILE. 
 *	Author: M. Vieira Coelho Neto
 * 	File: 6-raiz2-2.md
 * 	Descrição feita pelo professor Guilherme N. Ramos (gnramos@unb.br)
 *	Disciplina: Algoritmos e Programação de Computadores */

Inicio

Variaveis
Inteiro: r, n, iteracoes

Mostra "Qual o valor de n?"
Ler n

Se n < 2
	Se n < 0
		Mostra "Não sei calcular a raiz quadrada de número negativo"
	Senão
		Mostra "A raiz quadrada de _ é _", n, n
	Fim-se
Senão
	Mostra "Qual sua estimativa inicial para a raiz de _?", n
	Ler r
	Mostra "Quantas iterações?"
	Ler iteracoes
	Se r <= 0 ou iteracoes < 0
		Mostra "Raiz e/ou quantidade de iteracoes inválida(s)."
	Senão
		Faça
			r <- r+(n/r))/2
			i++
		Enquanto i < iteracoes
	Fim-Se
	Mostra "Depois de n tentativas, a aproximação da raiz de %_ é %_.", iteracoes, n, r
Fim-Senão

Fim

