/*	Universidade de Brasilia
 *	Pseudocodigo -   Exemplo do laço de repetição WHILE. 
 *	Author: M. Vieira Coelho Neto
 * 	File: 2-while.md
 * 	Descrição feita pelo professor Guilherme N. Ramos (gnramos@unb.br)
 *	Disciplina: Algoritmos e Programação de Computadores */

defina AGUA como "Uma taça de vitamina de frutas e iogurte natural grego."
defina TERRA como "Uma taça de suco de mamão e uma cesta com frutas da estação."
defina FOGO como "Uma xícara de café preto e uma porção bem servidade ovos com bacon."
defina AR como "Uma xícara de café preto."
defina CORACAO como AGUA "\n" TERRA "\n" FOGO "\n" AR

Funcao sirva(opcao)
	mostre "_", opcao
Fim-sirva

Inicio
Variaveis
Inteiro: resposta

Mostra "Bom dia! Qual tipo de café você deseja hoje?"

Faça
	Mostra "1: Água (vitamina de frutas e iorgute)"
	Mostra "2: Terra (suco de mamão, frutas frescas)"
	Mostra "3: Fogo (café preto, ovos & bacon)"
	Mostra "4: Ar (café preto)"
	Mostra "5: Coração! (todas as anteriores)"
	Leia resposta
Enquanto resposta

Segundo resposta
	caso 1: sirva(AGUA)
			pare
	caso 2: sirva(TERRA)
			pare
	caso 3: sirva(FOGO)
			pare
	caso 4: sirva(AR)
			pare
	caso 5: sirva(CORACAO)
			pare
Fim-Segundo

Fim