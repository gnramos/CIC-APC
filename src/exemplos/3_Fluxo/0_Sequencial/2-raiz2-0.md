/*	Universidade de Brasilia
 *	Pseudocodigo - implementação de código para aproximar o valor 
 *  da raiz quadrada de um número inteiro.
 *	Author: Manoel Vieira Coelho Neto
 * 	File: 2-raiz2-0.md
 * 	Descrição feita pelo professor Guilherme N. Ramos (gnramos@unb.br)
 *	Disciplina: Algoritmos e Programação de Computadores */

Algoritmo Estimativa_de_raiz

Variáveis
Inteiro: r,n

Inicio


Mostra "Qual o valor de n?"
Ler n

Mostra "Qual sua estimativa inicial para a raiz de _?", n
Ler r

Mostra "_*_ = _", r, r, r*r

r = (r+(n/r))/2
Mostra "_*_ = _", r, r, r*r

r = (r+(n/r))/2
Mostra "_*_ = _", r, r, r*r

Mostra "Depois de 3 tentativas, a aproximação da raiz de %_ é %_.", n, r

Fim