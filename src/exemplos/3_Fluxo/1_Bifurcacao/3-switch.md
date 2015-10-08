/*	Universidade de Brasilia
 *	Pseudocodigo -  Implementação de código para aproximar o valor da raiz
 *  quadrada de um número inteiro não negativo. 
 *	Author: Manoel Vieira Coelho Neto
 * 	File: 3-switch.md
 * 	Descrição feita pelo professor Guilherme N. Ramos (gnramos@unb.br)
 *	Disciplina: Algoritmos e Programação de Computadores */

Algoritmo seguir_ordens
/*peço que proponha um outro nome, não achei um adequado*/

Variáveis
Inteiro: i = 0

Inicio

Mostra "Digite um valor inteiro para i:"
Ler i

Segundo i, faça:
	caso -2:
		Mostra "Sei o que fazer quando i=-2"
		parar
	caso -1:
		Mostra "Sei o que fazer quando i=-1"
		parar
	caso 0:
		Mostra "Sei o que fazer quando i=0"
		parar
	caso 1:
		Mostra "Sei o que fazer quando i=1"
		parar
	caso 2:
		Mostra "Sei o que fazer quando i=2"
		parar
	padrão:
		Mostra "Não sei o que fazer quando i= _", i
Fim-Segundo
Fim