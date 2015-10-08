/*	Universidade de Brasilia
 *	Pseudocodigo -   Exemplo do laço de repetição WHILE. 
 *	Author: M. Vieira Coelho Neto
 * 	File: 3-switch.md
 * 	Descrição feita pelo professor Guilherme N. Ramos (gnramos@unb.br)
 *	Disciplina: Algoritmos e Programação de Computadores */

Algoritmo servir_picanha

Defina PICANHA como "free(B01)"

Variaveis
Caractere: resposta <- 'n'

Função sirva(caractere opcao)
    Mostra "Servindo _.", opcao

Inicio

Mostra "Bem-vindo ao rodízio!"

Enquanto (resposta == 'n' ou resposta == 'N')
	sirva(PICANHA)

	Mostra("Satisfeito?")
	Ler resposta
Fim